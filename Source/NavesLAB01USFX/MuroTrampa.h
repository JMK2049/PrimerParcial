// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MuroBase.h"
#include "MuroTrampa.generated.h"

/**
 * 
 */
UCLASS()
class NAVESLAB01USFX_API AMuroTrampa : public AMuroBase
{
	GENERATED_BODY()

public:
	AMuroTrampa();
	virtual void AplicarEfecto() override;

	UFUNCTION()
	void AlChocarConMuro(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
