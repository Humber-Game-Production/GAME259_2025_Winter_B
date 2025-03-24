// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CanvasContainerWidget.generated.h"

class UCanvasPanel;
class UCameraWidget;
enum class ECMode : uint8;
/**
 * 
 */
UCLASS()
class BTEAMPROJECTTILDE_API UCanvasContainerWidget : public UUserWidget
{
	GENERATED_BODY()

 public:

    void SetMode(ECMode mode_);

    UFUNCTION()
    void AddCameraWidget(UCameraWidget* camWidget_);


    UFUNCTION()
    void ClearCameraWidgets();

    UFUNCTION()
    void UpdateLayout();

    UFUNCTION()
    void AddUIWidgetToContainer(UWidget* widget_, int Zorder_, int viewPort);

protected:

    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);

    void ResizeChildWidgets(FVector2D NewSize);

private:

    FVector2D LastSize;

    ECMode eMode;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* pCameraContainer;

    UPROPERTY()
    TArray<UCameraWidget*> ArrCameraWidgets;

    UFUNCTION()
    void AddCameraWidgetToLayout(UCameraWidget* CameraWidget, FVector2D Position, FVector2D Size);

};
