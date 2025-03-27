// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ECMode.generated.h"  

UENUM(BlueprintType)  // Enables use in Blueprints
enum class ECMode : uint8
{
    OneCamera   UMETA(DisplayName = "One Camera"),
    TwoCameras  UMETA(DisplayName = "Two Cameras"),
    FourCameras UMETA(DisplayName = "Four Cameras")
};