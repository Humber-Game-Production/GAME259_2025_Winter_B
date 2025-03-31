// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstLevelGameMode.generated.h"


//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLastPuzzleDone); // Delegate To Restart

UCLASS(minimalapi)
class AFirstLevelGameMode : public AGameModeBase
{
	GENERATED_BODY()

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AFirstLevelGameMode();

	//UPROPERTY()
	//FLastPuzzleDone LastPuzzleDone;//Sending Delegate To Whoever Portal To Let me in to next Level

private:
	int puzzlesAchieved = 0;

	int totalNumberOfPuzzles = 0;

	UFUNCTION()
	void RestartLevel(); // Self-Explanitory

	UFUNCTION()
	void UpdatePuzzlesAchieved();


};
