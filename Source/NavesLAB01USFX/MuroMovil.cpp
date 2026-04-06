// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroMovil.h"
#include "MuroBase.h"

AMuroMovil::AMuroMovil()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Velocidad = 500.0f;
	bEstaEnMovimiento = false;
	DireccionMovimiento = FVector::ZeroVector;

}

void AMuroMovil::AplicarEfecto()
{
	if (MallaMuro)
	{
		MallaMuro->OnComponentHit.AddDynamic(this, &AMuroMovil::AlSerEmpujado);// Registramos el evento de Hit físico
	}
}

void AMuroMovil::AlSerEmpujado(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor->IsA(APawn::StaticClass()) && !bEstaEnMovimiento)
	{
		DireccionMovimiento = Hit.ImpactNormal * -1.0f;
		DireccionMovimiento.Z = 0.0f;
		bEstaEnMovimiento = true;
		//AddActorWorldOffset(DireccionMovimiento * 5.0f);
	}
}

void AMuroMovil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bEstaEnMovimiento)
	{
		FVector Desplazamiento = DireccionMovimiento * Velocidad * DeltaTime;

		//Si encuentra la nave en su camino la empujara fisicamente
		FHitResult HitSweep;
		AddActorWorldOffset(Desplazamiento, true, &HitSweep);

		//Si el muro choca contra otro muro que se detenga
		if (HitSweep.bBlockingHit && HitSweep.GetActor() != nullptr && !HitSweep.GetActor()->IsA(APawn::StaticClass()))
		{
			bEstaEnMovimiento = false;
		}
	}
}
