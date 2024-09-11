// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multi2_Par1_ShooterGameMode.h"
#include "Multi2_Par1_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMulti2_Par1_ShooterGameMode::AMulti2_Par1_ShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
