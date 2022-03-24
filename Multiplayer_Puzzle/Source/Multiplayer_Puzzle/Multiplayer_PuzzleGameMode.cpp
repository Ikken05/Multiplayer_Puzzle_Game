// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_PuzzleGameMode.h"
#include "Multiplayer_PuzzleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_PuzzleGameMode::AMultiplayer_PuzzleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
