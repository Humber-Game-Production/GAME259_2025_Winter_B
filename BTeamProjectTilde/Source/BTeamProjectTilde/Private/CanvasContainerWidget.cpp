// Fill out your copyright notice in the Description page of Project Settings.


#include "CanvasContainerWidget.h"
#include "BTeamProjectTilde/Public/ECMode.h"
#include "BTeamProjectTilde/Public/CameraWidget.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

void UCanvasContainerWidget::SetMode(ECMode mode_)
{
	eMode = mode_;
}

void UCanvasContainerWidget::AddCameraWidget(UCameraWidget* camWidget_)
{
    if (camWidget_) {
        UE_LOG(LogTemp, Warning, TEXT("CameraWidgets added to UContainerWidget"));
        ArrCameraWidgets.Add(camWidget_);

    }
}

void UCanvasContainerWidget::ClearCameraWidgets()
{
    if (pCameraContainer) {
        for (auto cam : ArrCameraWidgets) {

            if (cam)
                cam->RemoveFromParent();
        }
    }
}

void UCanvasContainerWidget::UpdateLayout()
{

    if (ArrCameraWidgets.Num() <= 0) {
        UE_LOG(LogTemp, Warning, TEXT("No camera widgets to process, returning early."));
        return;
    }
    if (!pCameraContainer) {
        UE_LOG(LogTemp, Warning, TEXT("CameraContainer null in Updatelayout"));
        return;
    }

    //Current work around to delay for one game tick so the parent's widegt geometry chache updates
    FTimerHandle TimerHandle;
    ECMode temp = eMode;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, temp]()
        {
            LastSize = GetCachedGeometry().GetLocalSize();
            UE_LOG(LogTemp, Warning, TEXT("Adding  Cam widgets to layout"));
            switch (temp) {
            case ECMode::OneCamera:
                // First Vector determiens the position, the second Vector determines the size. the values are nomalized
                AddCameraWidgetToLayout(ArrCameraWidgets[0], FVector2D(0.0f, 0.0f), FVector2D(1.0f, 1.0f));
                break;
            case ECMode::TwoCameras:
                AddCameraWidgetToLayout(ArrCameraWidgets[0], FVector2D(0.0f, 0.0f), FVector2D(0.5f, 1.0f));
                AddCameraWidgetToLayout(ArrCameraWidgets[1], FVector2D(0.5f, 0.0f), FVector2D(0.5f, 1.0f));
                break;
            case ECMode::FourCameras:
                AddCameraWidgetToLayout(ArrCameraWidgets[0], FVector2D(0.0f, 0.0f), FVector2D(0.5f, 0.5f));
                AddCameraWidgetToLayout(ArrCameraWidgets[1], FVector2D(0.5f, 0.0f), FVector2D(0.5f, 0.5f));
                AddCameraWidgetToLayout(ArrCameraWidgets[2], FVector2D(0.0f, 0.5f), FVector2D(0.5f, 0.5f));
                AddCameraWidgetToLayout(ArrCameraWidgets[3], FVector2D(0.5f, 0.5f), FVector2D(0.5f, 0.5f));
                break;
            }


        }, 0.01f, false);
}

void UCanvasContainerWidget::AddUIWidgetToContainer(UWidget* widget_, int Zorder_, int viewPort)
{
    if (!pCameraContainer) {
        UE_LOG(LogTemp, Warning, TEXT("Container was a null reference"));
        return;
    }

    UCanvasPanelSlot* CanvasSlot = pCameraContainer->AddChildToCanvas(widget_);
    if (!CanvasSlot) {
        UE_LOG(LogTemp, Warning, TEXT("Failed to AddChildToCanvas "));
        return;
    }
    CanvasSlot->SetZOrder(Zorder_); // set the z layer order

    switch (eMode)
    {
    case ECMode::OneCamera:
        CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
        CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize());
        break;

    case ECMode::TwoCameras:
        switch (viewPort) {
        case 0:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize());
            break;
        case 1:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 1.0f));
            break;
        case 2:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 1.0f));
            break;
        }
        break;

    case ECMode::FourCameras:
        switch (viewPort) {
        case 0:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize());
            break;
        case 1:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        case 2:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        case 3:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.0f, 0.5f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        case 4:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        }
        break;
    }
}

void UCanvasContainerWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (!IsValid(pCameraContainer))
    {
        UE_LOG(LogTemp, Error, TEXT("CameraContainer is not valid!"));
        return;
    }

}

void UCanvasContainerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);
    FVector2D NewSize = MyGeometry.GetLocalSize();

    if (!NewSize.Equals(LastSize, 1.0f))
    {
        ResizeChildWidgets(NewSize);
    }
}

void UCanvasContainerWidget::ResizeChildWidgets(FVector2D NewSize)
{
    if (LastSize.IsZero()) return;

    UPanelWidget* RootPanel = Cast<UPanelWidget>(GetRootWidget());
    if (!RootPanel) return;


    FVector2D ScaleFactor = NewSize / LastSize;

    for (int32 i = 0; i < RootPanel->GetChildrenCount(); i++)
    {
        UWidget* Child = RootPanel->GetChildAt(i);
        if (UCanvasPanelSlot* CanvasSlot = Cast<UCanvasPanelSlot>(Child->Slot))
        {

            FVector2D NewChildSize = CanvasSlot->GetSize() * ScaleFactor;
            CanvasSlot->SetSize(NewChildSize);


            FVector2D NewChildPosition = CanvasSlot->GetPosition() * ScaleFactor;
            CanvasSlot->SetPosition(NewChildPosition);
        }
    }


    LastSize = NewSize;
}

void UCanvasContainerWidget::AddCameraWidgetToLayout(UCameraWidget* CameraWidget, FVector2D Position, FVector2D Size)
{
    if (!pCameraContainer) {
        UE_LOG(LogTemp, Warning, TEXT("CameraContainer null in Updatelayout"));
        return;
    }
    //CameraContainer->AddChild(CameraWidget);
    UCanvasPanelSlot* CanvasSlot = pCameraContainer->AddChildToCanvas(CameraWidget);

    if (CanvasSlot)
    {
        //CameraContainer->get
        CanvasSlot->SetPosition(Position * LastSize);
        CanvasSlot->SetSize(Size * LastSize);
        CanvasSlot->SetZOrder(-1);


    }
}
