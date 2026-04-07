// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesLAB01USFXGameMode.generated.h"

class AEnemigo;

UCLASS(MinimalAPI)
class ANavesLAB01USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesLAB01USFXGameMode();
	
protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tabla Objetos")
	TArray<AEnemigo*> AEnemigos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Muros")
	TArray<class AMuroBase*> ArrayMuros;

	FTimerHandle TimerFormacion;
	FTimerHandle TimerLiberacion;

	void FormarNavesFrentePawn();
	void LiberarNaves();

	UPROPERTY(EditAnywhere, Category = "Configuracion Formacion")
	float TiempoEnFormacion = 10.0f;// Tiempo que se quedan quietas

	UPROPERTY(EditAnywhere, Category = "Configuracion Formacion")
	float IntervaloFormacion = 10.0f;// Tiempo total entre formaciones

	UPROPERTY(EditAnyWhere, Category = "Configuracion Formacion")
	float EspaciadoVertical = 100.0f;

	APawn* PlayerPawn;  // Referencia al Pawn

	void ActivarEfectoOla();
};



