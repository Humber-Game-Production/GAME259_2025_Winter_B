// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraWidget.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/Image.h"

void UCameraWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (!pRenderTargetImage || !pRenderTarget) {
		UE_LOG(LogTemp, Warning, TEXT("Early exit did not finish loading the camera widget"));
		return;
	}

	if (!pRenderTargetMaterial) {//creating a material that updates as the renderTarget changes

		//Todo find a better way to spawn Material with out a Path

		UMaterialInterface* MatInterface = LoadObject<UMaterialInterface>(nullptr,
			TEXT("/Game/BTeamCONTENTfolder/Levels/GameModes/M_CamRenderTarget"));

		if (MatInterface) {
			pRenderTargetMaterial = UMaterialInstanceDynamic::Create(MatInterface, this);
			UE_LOG(LogTemp, Warning, TEXT("renderTargetMaterial worked"));
		}

	}

	if (pRenderTargetMaterial && pRenderTarget) {//Set the material to the renderTaget

		pRenderTargetMaterial->SetTextureParameterValue(FName("RenderTargetTexture"), pRenderTarget);
		UE_LOG(LogTemp, Warning, TEXT("Set the material to the renderTaget"));
	}

	if (pRenderTargetImage && pRenderTargetMaterial)//Set the Material to the Widget image
	{
		pRenderTargetImage->SetBrushFromMaterial(pRenderTargetMaterial);
		UE_LOG(LogTemp, Warning, TEXT("Set the Material to the Widget image"));

	}
}

void UCameraWidget::SetRenderTarget(UTextureRenderTarget2D* renderTarget_)
{
	if (!renderTarget_) {

		UE_LOG(LogTemp, Warning, TEXT("Widget renderTarget Failed to be set"));
		return;
	}
	pRenderTarget = renderTarget_;
}

UTextureRenderTarget2D* UCameraWidget::GetRenderTarget()
{
	return pRenderTarget;
}

void UCameraWidget::SwitchRenderTarget(UTextureRenderTarget2D* newTarget)
{
	pRenderTarget = newTarget;

	if (pRenderTargetMaterial && pRenderTarget) {

		pRenderTargetMaterial->SetTextureParameterValue(FName("RenderTargetTexture"), pRenderTarget);
		UE_LOG(LogTemp, Warning, TEXT("Switched the the material to the renderTaget"));
	}
}
