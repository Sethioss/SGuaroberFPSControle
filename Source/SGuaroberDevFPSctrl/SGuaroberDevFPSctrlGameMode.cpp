// Copyright Epic Games, Inc. All Rights Reserved.

#include "SGuaroberDevFPSctrlGameMode.h"
#include "SGuaroberDevFPSctrlCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASGuaroberDevFPSctrlGameMode::ASGuaroberDevFPSctrlGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
