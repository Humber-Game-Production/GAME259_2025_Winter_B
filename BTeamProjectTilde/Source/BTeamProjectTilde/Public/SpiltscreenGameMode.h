#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpiltscreenGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLastPuzzleDone);// Delegate To for Last puzzle of level is done

enum class ECMode : uint8;
class USCManager;
class UCameraWidget;
class UCanvasContainerWidget;
class UWidget;
/**
 *
 */
UCLASS(Blueprintable)
class BTEAMPROJECTTILDE_API ASplitScreenGamode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY()
	USCManager* pScreenManager;

protected:
	void EndPlay(const EEndPlayReason::Type EndPlayReason)override;

public:

	ASplitScreenGamode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spilt Screen")
	TSubclassOf<UCameraWidget> cCamWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spilt Screen")
	TSubclassOf<UCanvasContainerWidget> cContainerWidegt;

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

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FLastPuzzleDone LastPuzzleDone;

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
