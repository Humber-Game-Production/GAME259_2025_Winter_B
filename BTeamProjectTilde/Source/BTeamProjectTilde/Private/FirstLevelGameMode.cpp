// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstLevelGameMode.h"
#include "BTeamProjectTilde/BTeamProjectTildeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

void AFirstLevelGameMode::BeginPlay()
{
	Super::BeginPlay();

	//// Get the player character and bind the event
	//ABTeamProjectTildeCharacter* PlayerCharacter = Cast<ABTeamProjectTildeCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	//if (PlayerCharacter)
	//{
	//	PlayerCharacter->RestartLevel.AddDynamic(this, &AFirstLevelGameMode::RestartLevel);
	//	PlayerCharacter->OnPuzzleFinished.AddDynamic(this, &AFirstLevelGameMode::UpdatePuzzlesAchieved);
	//}


}

AFirstLevelGameMode::AFirstLevelGameMode() 
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AFirstLevelGameMode::RestartLevel() 
{
	UWorld* World = GetWorld();
	if (World)
	{
		FName CurrentLevel = *UGameplayStatics::GetCurrentLevelName(this);
		UGameplayStatics::OpenLevel(World, CurrentLevel);
	}
}

