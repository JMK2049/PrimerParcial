// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MuroBase.h"
#include "MuroFantasma.generated.h"

/**
 * 
 */
UCLASS()
class NAVESLAB01USFX_API AMuroFantasma : public AMuroBase
{
	GENERATED_BODY()

public:
	AMuroFantasma();
	virtual void AplicarEfecto() override;

	UFUNCTION()
	void AlEntrarEnMuro(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResut);
};

