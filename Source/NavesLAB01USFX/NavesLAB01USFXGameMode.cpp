// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesLAB01USFXGameMode.h"
#include "NavesLAB01USFXPawn.h"
#include "Enemigo.h"
#include "EnemigoAereo.h"
#include "EnemigoTerrestre.h"
#include "MuroBase.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ANavesLAB01USFXGameMode::ANavesLAB01USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANavesLAB01USFXPawn::StaticClass();
}

void ANavesLAB01USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    int32 CantidadEnemigos = FMath::RandRange(8, 15);

    // Spawn 10 naves y agregar a array
    for (int32 i = 0; i < CantidadEnemigos; i++)
    {
        float RandX = FMath::RandRange(-800.0f, 800.0f);
        float RandY = FMath::RandRange(100.0f, 600.0f);
        float RandZ = 200.0f;

        FVector UbicacionSpawn(RandX, RandY, RandZ);  // Spread inicial
        AEnemigo* NuevaNave = nullptr;

        int32 EnemigoAleatorio = FMath::RandRange(0, 2);

        switch (EnemigoAleatorio)
        {
        case 0:
            NuevaNave = World->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), UbicacionSpawn, FRotator::ZeroRotator);
            break;
        case 1:
            NuevaNave = World->SpawnActor<AEnemigoAereo>(AEnemigoAereo::StaticClass(), UbicacionSpawn, FRotator::ZeroRotator);
            break;
        case 2:
            NuevaNave = World->SpawnActor<AEnemigoTerrestre>(AEnemigoTerrestre::StaticClass(), UbicacionSpawn, FRotator::ZeroRotator);
            break;
        }

        if (NuevaNave)
        {
            NuevaNave->bMovimientoAutonomo = true;
            AEnemigos.Add(NuevaNave); //Almacenar en el contenedor
        }
    }
    
    PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);// Obtener Pawn jugador
    GetWorldTimerManager().SetTimer(TimerFormacion, this, &ANavesLAB01USFXGameMode::FormarNavesFrentePawn, IntervaloFormacion, true);// Iniciar timer cada 5 seg 
}

void ANavesLAB01USFXGameMode::LiberarNaves()
{
    for (AEnemigo* Nave : AEnemigos)
    {
        if (Nave)
        {
			Nave->bMovimientoAutonomo = true;// Reanudar movimiento autónomo
            Nave->CargarRuta();//Cargar ruta aleatoria
        }
    }
}

void ANavesLAB01USFXGameMode::FormarNavesFrentePawn()
{
    if (!PlayerPawn || AEnemigos.Num() == 0) 
        return;

    FVector UbicacionPawn = PlayerPawn->GetActorLocation();
    FRotator RotacionPawn = PlayerPawn->GetActorRotation();

    // Posición delante del Pawn (offset frontal)
    FVector DireccionFrente = RotacionPawn.Vector();
    FVector PosicionBase = UbicacionPawn + (DireccionFrente * -500);  // 500uu delante

    // Formar verticalmente
    for (int32 i = 0; i < AEnemigos.Num(); i++)
    {
        if (AEnemigo* Nave = AEnemigos[i])
        {
            // Interpolar suavemente a posición de formación
            FVector PosicionFormacion(PosicionBase.X, PosicionBase.Y + (i * EspaciadoVertical), PosicionBase.Z);
			Nave->PosicionDestinoGameMode = PosicionFormacion;
            //Nave->SetActorLocation(FMath::VInterpTo(Nave->GetActorLocation(), PosicionFormacion, GetWorld()->GetDeltaSeconds(), 2.0f));
            Nave->SetActorRotation(FRotator(0, 0, RotacionPawn.Pitch));  // Miran igual que Pawn
			Nave->bMovimientoAutonomo = false;  // Pausar movimiento autónomo
        }
    }
    UE_LOG(LogTemp, Warning, TEXT("¡Naves formadas frente al jugador!"));

    float TiempoEspera = 3.0f;
    GetWorldTimerManager().SetTimer(TimerLiberacion, this, &ANavesLAB01USFXGameMode::LiberarNaves, TiempoEspera, false);
}


void ANavesLAB01USFXGameMode::ActivarEfectoOla()
{
    for (AMuroBase* Muro : ArrayMuros) {
        if (Muro) {
            Muro->bHacerOla = true;
        }
    }
}

