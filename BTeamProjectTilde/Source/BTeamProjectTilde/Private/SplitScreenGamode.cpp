//// Fill out your copyright notice in the Description page of Project Settings.
//
//#include "SplitScreenGamode.h"
//#include "Blueprint/UserWidget.h"
//#include "BTeamProjectTilde/Public/ScreenManager.h"
//#include "BTeamProjectTilde/Public/ContainerWidget.h"
//#include "BTeamProjectTilde/Public/CamWidget.h"
//#include "BTeamProjectTilde/Public/ECMode.h"
//#include "Kismet/GameplayStatics.h"
//
//void ASplitScreenGamode::EndPlay(const EEndPlayReason::Type EndPlayReason)
//{
//	Super::EndPlay(EndPlayReason);
//	if (pScreenManager)
//	{
//		pScreenManager->CleanUp();
//		pScreenManager = nullptr;
//	}
//}
//
//ASplitScreenGamode::ASplitScreenGamode()
//{
//	pScreenManager = nullptr;
//	eCurrentmode = ECMode::OneCamera;
//}
//
//void ASplitScreenGamode::SetMode(ECMode mode)
//{
//	eCurrentmode = mode;
//}
//
//void ASplitScreenGamode::IniScreen()
//{
//	pScreenManager = NewObject<UScreenManager>(this, UScreenManager::StaticClass());
//	if (pScreenManager) {
//		pScreenManager->SetMode(eCurrentmode);
//		pScreenManager->IniScreenManager(cCamWidget, cContainerWidegt);
//		pScreenManager->UpdateLayout();
//	}
//	else {
//		UE_LOG(LogTemp, Warning, TEXT("Failed to Create the ScreenManager"));
//	}
//}
//
//void ASplitScreenGamode::AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort)
//{
//	pScreenManager->AddUIWidgetToScreen(widget_, Zorder, viewPort);
//
//}
//
//void ASplitScreenGamode::SwitchInCamera(AActor* Camera, int playerId)
//{
//    int viewPort = GetCameraViewport(playerId);
//    pScreenManager->SwitchInCamera(Camera, viewPort);
//}
//
//void ASplitScreenGamode::SwitchBackCamera(int playerId)
//{
//    int viewPort = GetCameraViewport(playerId);
//    pScreenManager->SwitchBackCamera(viewPort);
//}
//
//int ASplitScreenGamode::GetAssignedViewport(int PlayerID)
//{
//    if (PlayerID < 0) { return 0; }
//
//    switch (eCurrentmode) {
//    case ECMode::OneCamera:
//        return 0;
//        break;
//    case ECMode::TwoCameras:
//        return (PlayerID < 2) ? 1 : 2;
//        break;
//    case ECMode::FourCameras:
//        return PlayerID + 1;
//        break;
//    }
//    return 0;// default return
//}
//
//int ASplitScreenGamode::GetCameraViewport(int PlayerID)
//{
//
//    switch (eCurrentmode) {
//    case ECMode::OneCamera:
//        return 0;
//        break;
//    case ECMode::TwoCameras:
//        return (PlayerID < 2) ? 0 : 1;
//        break;
//    case ECMode::FourCameras:
//        return PlayerID;
//        break;
//    }
//    return 0;
//}
//
//
//
//void ASplitScreenGamode::UpdatePuzzlesAchieved()
//{
//    ++puzzlesAchieved;
//
//    if (totalNumberOfPuzzles == puzzlesAchieved)
//    {
//        LastPuzzleDone.Broadcast(); // Sending Delegate That We just did the last puzzle to open portal.
//    }
//}
