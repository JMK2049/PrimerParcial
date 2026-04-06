// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaTerrestre(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	if (MallaTerrestre.Succeeded() && MallaEnemigo)
	{
		MallaEnemigo->SetStaticMesh(MallaTerrestre.Object);
	}
	VelocidadMovimiento = 600.0f;
}

void AEnemigoTerrestre::BeginPlay()
{
	Super::BeginPlay();

	bMovimientoAutonomo = false; //Activar Movimiento
	float DelayInicial = FMath::RandRange(0.0f, 2.0f);//Calculamos un retraso aleatorio

	FTimerHandle TimerRetraso;
	GetWorldTimerManager().SetTimer(TimerRetraso, this, &AEnemigoTerrestre::ActivarMovimiento, DelayInicial, false);
}

void AEnemigoTerrestre::CargarRuta()
{
	PuntosRuta.Empty();
	FVector PosInicial = GetActorLocation();

	float DistanciaPatrulla = FMath::RandRange(800.0f, 1500.0f);

	//Van de ida y vuelta
	PuntosRuta.Add(PosInicial + FVector(DistanciaPatrulla, 0.0f, 0.0f));
	PuntosRuta.Add(PosInicial);

	IndicePuntoRutaActual = 0;
	UE_LOG(LogTemp, Warning, TEXT("Enemigo Terrestre: Patrulla lineal configurada."));
}

void AEnemigoTerrestre::ActivarMovimiento()
{
	CargarRuta();
	bMovimientoAutonomo = true;
}



