// Copyright Epic Games, Inc. All Rights Reserved.

#include "IncubatorGameMode.h"
#include "IncubatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIncubatorGameMode::AIncubatorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
