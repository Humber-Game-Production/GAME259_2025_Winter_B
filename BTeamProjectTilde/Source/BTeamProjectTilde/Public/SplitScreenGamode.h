// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SplitScreenGamode.generated.h"

enum class ECMode : uint8;
class UScreenManager;
class UCamWidget;
class UContainerWidget;
class UWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLastPuzzleIsDone); // Delegate To for Last puzzle of level is done
/**
 *
 */
UCLASS(Blueprintable)
class BTEAMPROJECTTILDE_API ASplitScreenGamode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY()
	UScreenManager* pScreenManager;

protected:
	void EndPlay(const EEndPlayReason::Type EndPlayReason)override;

public:

	ASplitScreenGamode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spilt Screen")
	TSubclassOf<UCamWidget> cCamWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spilt Screen")
	TSubclassOf<UContainerWidget> cContainerWidegt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Split Screen")
	ECMode eCurrentmode;

	//Setter for to change current mode
	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void SetMode(ECMode mode);

	//Initilizing function for the ScreenManager
	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void IniScreen();

	//Wrapper Function to add a UI Widget to the screen
	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort);

	//Wrapper Function to Switch a Camera Widget to the screen
	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void SwitchInCamera(AActor* Camera, int playerId);

	//Wrapper Function to Switch Back Widget to the screen
	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void SwitchBackCamera(int playerId);

	UPROPERTY()
	FLastPuzzleIsDone LastPuzzleDone;

private:

	UFUNCTION()
	int GetAssignedViewport(int PlayerID);

	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	int GetCameraViewport(int PlayerID);
	

	//Andy Puzzle logic
	UPROPERTY()
	int puzzlesAchieved = 0;

	UPROPERTY()
	int totalNumberOfPuzzles = 0;

	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void RestartLevel(); // Self-Explanitory

	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void UpdatePuzzlesAchieved();

};
