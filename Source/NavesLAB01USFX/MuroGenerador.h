// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOF.h"
#include "MuroGenerador.generated.h"

class AMuroBase;

USTRUCT(BlueprintType)
struct FDatosMuro
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMuroBase* MuroReferencia;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Forma;

	FDatosMuro()
	{
		MuroReferencia = nullptr;
		Forma = "";
	}

	FDatosMuro(AMuroBase* InMuro, FString InForma)
	{
		MuroReferencia = InMuro;
		Forma = InForma;
	}
};


UCLASS()
class NAVESLAB01USFX_API AMuroGenerador : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMuroGenerador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "Tabla")
	TArray<FDatosMuro> TablaDeMuros;

	void GenerarMurosAleatorios();//Funcion principal para generar el nivel
	AMuroBase* SpawnPatron(FVector Origen, int32 TipoPatron, TSubclassOf<AMuroBase> Clase); //Funcion para crear patrones de muros
};