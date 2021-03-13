// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FarmGameMode.h"
#include "FarmPlayerController.h"
#include "FarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFarmGameMode::AFarmGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFarmPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}