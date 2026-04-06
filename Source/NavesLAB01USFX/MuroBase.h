// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MuroBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class NAVESLAB01USFX_API AMuroBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMuroBase();

	UPROPERTY(EditAnywhere, Category = "Muro")
	UStaticMeshComponent* MallaMuro;

	virtual void AplicarEfecto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};