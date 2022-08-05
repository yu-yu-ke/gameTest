// Copyright Epic Games, Inc. All Rights Reserved.

#include "TXGameMode.h"
#include "TXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATXGameMode::ATXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
