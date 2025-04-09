// Fill out your copyright notice in the Description page of Project Settings.


#include "SCManager.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "BTeamProjectTilde/Public/ECMode.h"
#include "BTeamProjectTilde/Public/CameraWidget.h"
#include "BTeamProjectTilde/Public/CanvasContainerWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Camera/CameraComponent.h"


USCManager::USCManager()
{
    pContainer = nullptr;
    Currentmode = ECMode::OneCamera;
}

void USCManager::SetMode(ECMode mode)
{
    Currentmode = mode;
}

void USCManager::IniScreenManager(TSubclassOf<UUserWidget> InWidgetBP, TSubclassOf<UCanvasContainerWidget> InWidgetBP2)
{
    cCameraTemplate = InWidgetBP;
    cContainterTemplate = InWidgetBP2;
    UE_LOG(LogTemp, Warning, TEXT("UScreenManager Start"));

    pContainer = CreateWidget<UCanvasContainerWidget>(GetWorld(), cContainterTemplate);
    if (pContainer) {
        UE_LOG(LogTemp, Warning, TEXT("UContainerWidget was Created"));

    }


    TArray<AActor*> ArrCameras;

    switch (Currentmode)
    {
    case ECMode::OneCamera:
    case ECMode::TwoCameras:
        UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), FName("StaticCam"), ArrCameras);
        for (auto actor : ArrCameras) {
            USceneCaptureComponent2D* SceneCapture = actor->FindComponentByClass<USceneCaptureComponent2D>();

            if (SceneCapture) {
                UTextureRenderTarget2D* target = NewObject<UTextureRenderTarget2D>(this);
                SceneCapture->TextureTarget = target;
                target->InitAutoFormat(1280,720);
                target->UpdateResource();
                CameraTargetMap.Add(actor, target); // add it to the map;

                UCameraWidget* CameraWidget = CreateWidget<UCameraWidget>(GetWorld(), cCameraTemplate);
                if (CameraWidget) {
                    CameraWidget->SetRenderTarget(target);

                    ArrCamerasArray.Add(CameraWidget);
                    ArrRenderTargets.Add(target);

                    pContainer->AddCameraWidget(CameraWidget);
                }
            }
        }
        break;
    case ECMode::FourCameras:

        UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), FName("Player"), ArrCameras);
        for (auto actor : ArrCameras) {
            
            UCameraComponent* CameraComp = actor->FindComponentByClass<UCameraComponent>();

            USceneCaptureComponent2D* SceneCapture = nullptr;

            for (USceneComponent* Child : CameraComp->GetAttachChildren())
            {
                SceneCapture = Cast<USceneCaptureComponent2D>(Child);
                if (SceneCapture)
                {
                    break;
                }
            }


            if (SceneCapture) {
                UTextureRenderTarget2D* target;
                if (CameraTargetMap.Contains(actor)) {
                    target = CameraTargetMap[actor];
                }
                else {
                    target = NewObject<UTextureRenderTarget2D>(this);
                    SceneCapture->TextureTarget = target;
                    target->InitAutoFormat(1280,720);
                    target->UpdateResource();
                    CameraTargetMap.Add(actor, target); // add it to the map;
                }
                UCameraWidget* CameraWidget = CreateWidget<UCameraWidget>(GetWorld(), cCameraTemplate);
                if (CameraWidget) {
                    CameraWidget->SetRenderTarget(target);

                    ArrCamerasArray.Add(CameraWidget);
                    ArrRenderTargets.Add(target);

                    pContainer->AddCameraWidget(CameraWidget);
                }
            }
        }
        break;

    }
    // initilize widget to player id mapping
    for (int i = 0; i < ArrCamerasArray.Num(); i++) {
        PlayerToWidgetMap.Add(i, ArrCamerasArray[i]);
    }

}


void USCManager::UpdateLayout()
{
    if (pContainer) {

        UE_LOG(LogTemp, Warning, TEXT("UContainerWidget adding to viewport"));

        pContainer->SetMode(Currentmode);
        pContainer->UpdateLayout();
        pContainer->AddToViewport();

    }
}

void USCManager::AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort)
{
    if (!widget_) {
        UE_LOG(LogTemp, Warning, TEXT("Widget was a null reference"));
        return;
    }
    if (Zorder <= 0) {
        UE_LOG(LogTemp, Warning, TEXT("NotValid Z value for this Widget"));
        return;
    }


    //maybe check here assuming there going to give me a player id?

    pContainer->AddUIWidgetToContainer(widget_, Zorder, viewPort);
}

void USCManager::CleanUp()
{
    ArrRenderTargets.Empty();

    for (int32 i = 0; i < ArrCamerasArray.Num(); ++i)
    {
        UCameraWidget* CameraWidget = ArrCamerasArray[i];
        if (CameraWidget)
        {
            CameraWidget->RemoveFromParent();  // Removes the widget from the UI
            ArrCamerasArray[i] = nullptr;  // Nullify the reference in the array for GC
        }
    }

    ArrCamerasArray.Empty();

    if (pContainer)
    {
        pContainer->RemoveFromParent();
        pContainer = nullptr;
    }
}

void USCManager::SwitchInCamera(AActor* Camera, int playerId)
{
    UTextureRenderTarget2D* newtarget = nullptr;
    if (CameraTargetMap.Contains(Camera)) {
        newtarget = CameraTargetMap[Camera];
    }
    else {
        USceneCaptureComponent2D* SceneCapture = Camera->FindComponentByClass<USceneCaptureComponent2D>();

        if (SceneCapture) {
            newtarget = NewObject<UTextureRenderTarget2D>(this);
            SceneCapture->TextureTarget = newtarget;
            newtarget->InitAutoFormat(1012, 1012);
            newtarget->UpdateResource();
            CameraTargetMap.Add(Camera, newtarget);
        }
    }

    if (!PreviousTargets.Contains(playerId))
    {
        PreviousTargets.Add(playerId, PlayerToWidgetMap[playerId]->GetRenderTarget());
    }
    PlayerToWidgetMap[playerId]->SwitchRenderTarget(newtarget);

}

void USCManager::SwitchBackCamera(int playerId)
{
    if (PreviousTargets.Contains(playerId)) {
        PlayerToWidgetMap[playerId]->SwitchRenderTarget(PreviousTargets[playerId]);
        PreviousTargets.Remove(playerId);
    }
}