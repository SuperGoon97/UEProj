// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProgramEngineICA2GameMode.h"
#include "ProgramEngineICA2Character.h"
#include "UObject/ConstructorHelpers.h"

AProgramEngineICA2GameMode::AProgramEngineICA2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
