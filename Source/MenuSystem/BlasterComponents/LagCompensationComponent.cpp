// Fill out your copyright notice in the Description page of Project Settings.


#include "LagCompensationComponent.h"

ALagCompensationComponent::ALagCompensationComponent()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ALagCompensationComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALagCompensationComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

