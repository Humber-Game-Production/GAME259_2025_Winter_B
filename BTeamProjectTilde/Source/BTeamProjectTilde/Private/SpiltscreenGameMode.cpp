// Fill out your copyright notice in the Description page of Project Settings.

#include "SpiltscreenGameMode.h"
#include "Blueprint/UserWidget.h"
#include "BTeamProjectTilde/Public/SCManager.h"
#include "BTeamProjectTilde/Public/CanvasContainerWidget.h"
#include "BTeamProjectTilde/Public/CameraWidget.h"
#include "BTeamProjectTilde/Public/ECMode.h"
#include "Kismet/GameplayStatics.h"

void ASplitScreenGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	    if (pScreenManager)
	    {
	        pScreenManager->CleanUp();
	        pScreenManager = nullptr;
	    }
}

ASplitScreenGameMode::ASplitScreenGameMode()
{
	pScreenManager = nullptr;
   eCurrentmode = ECMode::OneCamera;
}

void ASplitScreenGameMode::SetMode(ECMode mode)
{
	eCurrentmode = mode;
}

void ASplitScreenGameMode::IniScreen()
{
	pScreenManager = NewObject<USCManager>(this, USCManager::StaticClass());
	    if (pScreenManager) {
	        pScreenManager->SetMode(eCurrentmode);
	        pScreenManager->IniScreenManager(cCamWidget, cContainerWidegt);
	        pScreenManager->UpdateLayout();
	    }
	    else {
	        UE_LOG(LogTemp, Warning, TEXT("Failed to Create the ScreenManager"));
	    }
}

void ASplitScreenGameMode::AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort)
{
	pScreenManager->AddUIWidgetToScreen(widget_, Zorder, viewPort);
}

void ASplitScreenGameMode::SwitchInCamera(AActor* Camera, int playerId)
{
	int viewPort = GetCameraViewport(playerId);
	pScreenManager->SwitchInCamera(Camera, viewPort);
	
}

void ASplitScreenGameMode::SwitchBackCamera(int playerId)
{
	int viewPort = GetCameraViewport(playerId);
   pScreenManager->SwitchBackCamera(viewPort);
}

int ASplitScreenGameMode::GetAssignedViewport(int PlayerID)
{
	if (PlayerID < 0) { return 0; }
	
	    switch (eCurrentmode) {
	    case ECMode::OneCamera:
	        return 0;
	        break;
	    case ECMode::TwoCameras:
	        return (PlayerID < 2) ? 1 : 2;
	        break;
	    case ECMode::FourCameras:
	        return PlayerID + 1;
	        break;
	    }
	    return 0;// default return
}

int ASplitScreenGameMode::GetCameraViewport(int PlayerID)
{
	switch (eCurrentmode) {
		    case ECMode::OneCamera:
		        return 0;
		        break;
		    case ECMode::TwoCameras:
		        return (PlayerID < 2) ? 0 : 1;
		        break;
		    case ECMode::FourCameras:
		        return PlayerID;
		        break;
	 }
    return 0;
}

void ASplitScreenGameMode::RestartLevel()
{
	 UWorld * World = GetWorld();
	    if (World)
	    {
	        FName CurrentLevel = *UGameplayStatics::GetCurrentLevelName(this);
	        UGameplayStatics::OpenLevel(World, CurrentLevel);
	    }
}

void ASplitScreenGameMode::UpdatePuzzlesAchieved()
{
	++puzzlesAchieved;
	
	    if (totalNumberOfPuzzles == puzzlesAchieved)
	    {
	       // LastPuzzleDone.Broadcast(); // Sending Delegate That We just did the last puzzle to open portal.
	    }
}
