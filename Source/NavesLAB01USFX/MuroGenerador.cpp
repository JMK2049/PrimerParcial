// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroGenerador.h"
#include "MuroBase.h"
#include "MuroFantasma.h"
#include "MuroTrampa.h"
#include "MuroMovil.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMuroGenerador::AMuroGenerador()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMuroGenerador::BeginPlay()
{
    Super::BeginPlay();

    for (const FDatosMuro& Dato : TablaDeMuros)
    {
        if (Dato.MuroReferencia && Dato.MuroReferencia->IsValidLowLevel())
        {
            Dato.MuroReferencia->Destroy();
        }
    }
    TablaDeMuros.Empty(); //Limpiamos la tabla antes de empezar
    GenerarMurosAleatorios(); //Generamos los muros al iniciar el juego
}

AMuroBase* AMuroGenerador::SpawnPatron(FVector Origen, int32 TipoPatron, TSubclassOf<AMuroBase> Clase)
{
    if (!Clase) return nullptr;

    TArray<FVector> Offsets;
    float Separacion = 100.0f;//Ajustar segun el tamaño del cubo
    AMuroBase* BloqueMaestro = nullptr;//Representa toda la estructura

    FString NombreForma;
    //Definir los patrones de muros
    switch (TipoPatron)
    {
    case 0://Muro Horizontal
        NombreForma = "Fila";
        Offsets.Add(FVector(0, -Separacion, 0));
        Offsets.Add(FVector(0, 0, 0));
        Offsets.Add(FVector(0, Separacion, 0));
        break;

    case 1://Muro Vertical
        NombreForma = "Columna";
        Offsets.Add(FVector(0, 0, 0));
        Offsets.Add(FVector(Separacion, 0, 0));
        Offsets.Add(FVector(Separacion * 2, 0, 0));
        break;

    case 2://Muro en L
        NombreForma = "L";
        Offsets.Add(FVector(Separacion * 2, 0, 0));
        Offsets.Add(FVector(Separacion, 0, 0));
        Offsets.Add(FVector(0, 0, 0));
        Offsets.Add(FVector(0, Separacion, 0));
        break;

    case 3://Muro en L Invertida
        NombreForma = "L_Invertida";
        Offsets.Add(FVector(Separacion * 2, 0, 0));
        Offsets.Add(FVector(Separacion * 2, -Separacion, 0));
        Offsets.Add(FVector(0, 0, 0));
        Offsets.Add(FVector(Separacion, 0, 0));
        break;
    }

    //Iteramos sobre los offsets para crear la estructura
    for (int32 i = 0; i < Offsets.Num(); i++)
    {
        FVector PosicionFinal = Origen + Offsets[i];
        AMuroBase* NuevoBloque = GetWorld()->SpawnActor<AMuroBase>(Clase, PosicionFinal, FRotator::ZeroRotator);

        if (NuevoBloque)
        {
            NuevoBloque->UpdateOverlaps(false);
            NuevoBloque->AplicarEfecto();

            if (i == 0)
            {
                BloqueMaestro = NuevoBloque;
                BloqueMaestro->Tags.Add(FName(*NombreForma));
            }
        }
    }
    return BloqueMaestro;
}

void AMuroGenerador::GenerarMurosAleatorios()
{
    AActor* MiNave = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (!MiNave) return;

    FVector NavePos = MiNave->GetActorLocation();
    int EstructurasCreadas = 0;
    int Intentos = 0;

    while (EstructurasCreadas < 85 && Intentos < 500)
    {
        Intentos++;

        float RandX = NavePos.X + FMath::RandRange(-1200.0f, 2500.0f);
        float RandY = NavePos.Y + FMath::RandRange(-2000.0f, 2000.0f);
        FVector UbicacionOrigen = FVector(RandX, RandY, NavePos.Z + 5.0f);

        int32 TipoForma = FMath::RandRange(0, 3);//Elegimos la forma (0: Fila, 1: Columna, 2: L)
        int32 TipoClase = FMath::RandRange(0, 3);//Elegimos un tipo de patrón de muro al azar

        TSubclassOf<AMuroBase> ClaseElegida;
        switch (TipoClase)
        {
        case 0: ClaseElegida = AMuroBase::StaticClass(); break;
        case 1: ClaseElegida = AMuroFantasma::StaticClass(); break;
        case 2: ClaseElegida = AMuroTrampa::StaticClass(); break;
        case 3: ClaseElegida = AMuroMovil::StaticClass(); break;
        default: ClaseElegida = AMuroBase::StaticClass(); break;
        }

        //Antes de spawnear, verificamos que no haya colisiones con la nave usando una caja de choque
        FVector DimensionesCaja = FVector(150.0f, 150.0f, 5.0f);
        FCollisionShape CajaDeChoque = FCollisionShape::MakeBox(DimensionesCaja);

        FCollisionQueryParams Params;
        Params.AddIgnoredActor(MiNave);

        bool bEstaOcupado = GetWorld()->OverlapBlockingTestByChannel(UbicacionOrigen, FQuat::Identity, ECollisionChannel::ECC_Visibility, CajaDeChoque, Params);
        if (!bEstaOcupado)
        {
            AMuroBase* EstructuraNueva = SpawnPatron(UbicacionOrigen, TipoForma, ClaseElegida);//Llamamods a la funcion para Spawneamos el patrón
            if (EstructuraNueva)
            {
                FDatosMuro NuevaEntrada;
                NuevaEntrada.MuroReferencia = EstructuraNueva;
                switch (TipoForma)
                {
                case 0: NuevaEntrada.Forma = TEXT("Fila"); break;
                case 1: NuevaEntrada.Forma = TEXT("Columna"); break;
                case 2: NuevaEntrada.Forma = TEXT("L"); break;
                case 3: NuevaEntrada.Forma = TEXT("L_Invertida"); break;
                }

                TablaDeMuros.Add(NuevaEntrada);

                EstructurasCreadas++;
                UE_LOG(LogTemp, Warning, TEXT("Estructura #%d (Tipo %d) creada."), EstructurasCreadas, TipoForma);
            }
        }
    }

    //Imprimimos cuántos bloques hay en total en la tabla
    UE_LOG(LogTemp, Warning, TEXT("Generación completa. Total de Bloques en tabla: %d"), TablaDeMuros.Num());
}

