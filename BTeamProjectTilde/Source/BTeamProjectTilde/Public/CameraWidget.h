// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CameraWidget.generated.h"
class UImage;
/**
 * 
 */
UCLASS()
class BTEAMPROJECTTILDE_API UCameraWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UImage* pRenderTargetImage;

	UPROPERTY()
	UMaterialInstanceDynamic* pRenderTargetMaterial;

	UPROPERTY()
	UTextureRenderTarget2D* pRenderTarget;
	
protected:
	virtual void NativeConstruct() override;

public:

	UFUNCTION()
	void SetRenderTarget(UTextureRenderTarget2D* renderTarget_);

	UFUNCTION()
	UTextureRenderTarget2D* GetRenderTarget();

	UFUNCTION()
	void SwitchRenderTarget(UTextureRenderTarget2D* newTarget);
};
