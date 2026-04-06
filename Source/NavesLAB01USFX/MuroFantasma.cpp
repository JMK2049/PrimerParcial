// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroFantasma.h"
#include "MuroBase.h"
#include "Components/StaticMeshComponent.h"

AMuroFantasma::AMuroFantasma()
{
}

void AMuroFantasma::AplicarEfecto()
{
	if (MallaMuro)
	{
		MallaMuro->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); //Dejamos de ser un obstáculo sólido
		MallaMuro->OnComponentBeginOverlap.AddDynamic(this, &AMuroFantasma::AlEntrarEnMuro); //Cuando pase un Overlap, ejecuta AlEntrarEnMuro
	}
}

void AMuroFantasma::AlEntrarEnMuro(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(APawn::StaticClass()))
	{
		Destroy();
	}
}
