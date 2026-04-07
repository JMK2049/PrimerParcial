// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroBase.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMuroBase::AMuroBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
	RootComponent = MallaMuro;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (CuboMesh.Succeeded())
	{
		MallaMuro->SetStaticMesh(CuboMesh.Object);
	}

	if (MallaMuro)
	{
		MallaMuro->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		// Esto hace que el muro "exista" para el radar de visibilidad
		MallaMuro->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
		MallaMuro->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
	}
}

void AMuroBase::AplicarEfecto()
{
}

// Called when the game starts or when spawned
void AMuroBase::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AMuroBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bHacerOla) {
		TiempoAcumulado += DeltaTime;

		float Amplitud = 50.0f;
		float Frecuencia = 2.0f;
		float Offset = GetActorLocation().X * 0.01f;

		float NuevoZ = PosicionInicial.Z + (Amplitud * FMath::Sin(TiempoAcumulado * Frecuencia + Offset));

		FVector NuevaPosicion = GetActorLocation();
		NuevaPosicion.Z = NuevoZ;
		SetActorLocation(NuevaPosicion);
	}
}

