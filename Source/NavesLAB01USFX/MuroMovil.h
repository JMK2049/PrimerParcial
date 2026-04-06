// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MuroBase.h"
#include "MuroMovil.generated.h"

/**
 * 
 */
UCLASS()
class NAVESLAB01USFX_API AMuroMovil : public AMuroBase
{
	GENERATED_BODY()

public:
	AMuroMovil();
	virtual void Tick(float DeltaTime) override;
	virtual void AplicarEfecto() override;

	UFUNCTION()
	void AlSerEmpujado(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	FVector DireccionMovimiento;
	float Velocidad;
	bool bEstaEnMovimiento;
};