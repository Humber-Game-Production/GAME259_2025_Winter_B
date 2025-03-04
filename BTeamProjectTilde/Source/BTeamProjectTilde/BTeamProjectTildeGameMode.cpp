// Copyright Epic Games, Inc. All Rights Reserved.

#include "BTeamProjectTildeGameMode.h"
#include "BTeamProjectTildeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABTeamProjectTildeGameMode::ABTeamProjectTildeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/BTeamCONTENTfolder/Blueprints/Characters_BP/BP_PlayerController"));
	if (PlayerControllerBPClass.Class != NULL) {
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
