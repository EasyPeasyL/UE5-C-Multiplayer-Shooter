// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LagCompensationComponent.generated.h"

UCLASS()
class MENUSYSTEM_API ALagCompensationComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	ALagCompensationComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
