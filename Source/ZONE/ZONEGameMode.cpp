// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZONEGameMode.h"
#include "ZONECharacter.h"
#include "UObject/ConstructorHelpers.h"

AZONEGameMode::AZONEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
