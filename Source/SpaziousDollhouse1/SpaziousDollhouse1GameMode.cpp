// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaziousDollhouse1GameMode.h"
#include "SpaziousDollhouse1Character.h"
#include "UObject/ConstructorHelpers.h"

ASpaziousDollhouse1GameMode::ASpaziousDollhouse1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
