// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "RobotAIController.generated.h"

// Forward declarations
class UPathFollowingComponent;
class UNavMovementComponent;

UCLASS()
class BTEAMPROJECTTILDE_API ARobotAIController : public AAIController
{
    GENERATED_BODY()

private:
    bool bIsMovementDisabled;
    FRotator CurrentWorldRotation;
    int i = 0;
protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    mutable UStaticMeshComponent* forwardFacingMeshObj = nullptr;

    ARobotAIController();

    // Movement intention functions
    UFUNCTION(BlueprintPure, Category = "Robot Movement")
    FVector GetDesiredMovementDirection() const;

    //UFUNCTION(BlueprintPure, Category = "Robot Movement")
    FRotator GetDesiredRotation();

    UFUNCTION(BlueprintCallable, Category = "Robot Control")
    void SetMovementEnabled(bool bEnable);



    //UFUNCTION(BlueprintCallable, Category = "Robot Events")
    //void BroadcastMovementIntent(FVector Direction, FRotator Rotation);
    // Custom event for Blueprint graph
    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Robot Events", meta = (DisplayName = "On Calculate Movement Intent"))
    void OnCalculateMovementIntent(FVector Direction, FRotator Rotation);

    /*DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDynamicDelegateTypeName, FVector, fvDirection, FRotator, frRotation);

    UPROPERTY(BlueprintAssignable)
    FDynamicDelegateTypeName CalculateEventDispatcher;*/

};