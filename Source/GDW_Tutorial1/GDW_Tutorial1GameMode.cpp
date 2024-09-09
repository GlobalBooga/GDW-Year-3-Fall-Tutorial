// Copyright Epic Games, Inc. All Rights Reserved.

#include "GDW_Tutorial1GameMode.h"
#include "GDW_Tutorial1Character.h"
#include "UObject/ConstructorHelpers.h"

AGDW_Tutorial1GameMode::AGDW_Tutorial1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
