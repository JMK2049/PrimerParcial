// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroTrampa.h"
#include "MuroBase.h"

AMuroTrampa::AMuroTrampa()
{
}

void AMuroTrampa::AplicarEfecto()
{
	if (MallaMuro)
	{
		MallaMuro->SetHiddenInGame(true);
		MallaMuro->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
		MallaMuro->OnComponentHit.AddDynamic(this, &AMuroTrampa::AlChocarConMuro);
	}
}

void AMuroTrampa::AlChocarConMuro(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor->IsA(APawn::StaticClass()))
	{
		//Revelamos el muro
		if (MallaMuro)
		{
			MallaMuro->SetHiddenInGame(false);
		}
	}
}
