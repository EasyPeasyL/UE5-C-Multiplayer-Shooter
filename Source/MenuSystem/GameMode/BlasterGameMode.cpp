// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameMode.h"
#include "MenuSystem/Character/BlasterCharacter.h"
#include "MenuSystem/PlayerController/BlasterPlayerController.h"

void ABlasterGameMode::PlayerEliminated(class ABlasterCharacter* ElimmedCharacter, class ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Elim();
	}
}