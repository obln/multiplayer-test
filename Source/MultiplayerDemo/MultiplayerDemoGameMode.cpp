// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerDemoGameMode.h"
#include "MultiplayerDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerDemoGameMode::AMultiplayerDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
