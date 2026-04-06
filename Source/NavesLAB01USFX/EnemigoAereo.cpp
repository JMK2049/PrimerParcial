// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAereo::AEnemigoAereo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAerea(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MallaAerea.Succeeded() && MallaEnemigo)
	{
		MallaEnemigo->SetStaticMesh(MallaAerea.Object);
	}
	VelocidadMovimiento = 600.0f;
}

void AEnemigoAereo::BeginPlay()
{
	Super::BeginPlay();

	bMovimientoAutonomo = false;//Desactivamos el movimiento un momento
	float DelayInicial = FMath::RandRange(0.0f, 1.5f);

	FTimerHandle TimerRetraso;
	GetWorldTimerManager().SetTimer(TimerRetraso, this, &AEnemigoAereo::ActivarMovimiento, DelayInicial, false);
}

void AEnemigoAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoAereo::CargarRuta()
{
    PuntosRuta.Empty();
	FVector PosicionActual = GetActorLocation();
	
	float DistanciaTramo = FMath::RandRange(100.0f, 400.0f); // Quet tan lejos va cada tramo del zigzag
	float AmplitudZigZag = FMath::RandRange(300.0f, 600.0f); // Amplitud del zigzag en el eje Y
	float DireccionInicial = (FMath::RandBool()) ? 1.0f : -1.0f;

	//Generar 6 puntos en forma de Z hacia adelante (Eje X)
	for (int32 i = 1; i <= 6; i++)
	{
		//Alternamos usando la direccion inicial aleatoria
		float FactorLado = (i % 2 == 0) ? 1.0f : -1.0f;
		float DesplazamientoY = FactorLado * AmplitudZigZag * DireccionInicial;

		FVector SiguientePunto = PosicionActual + FVector(i * DistanciaTramo, DesplazamientoY, 0);
		PuntosRuta.Add(SiguientePunto);
	}

	//Empezamos desde el primer punto generado
    IndicePuntoRutaActual = 0;
	UE_LOG(LogTemp, Warning, TEXT("Enemigo Aereo: Generada ruta en ZigZag de %d puntos"), PuntosRuta.Num());
}

void AEnemigoAereo::ActivarMovimiento()
{
	CargarRuta();
	bMovimientoAutonomo = true;
}
