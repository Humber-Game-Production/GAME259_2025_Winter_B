// Fill out your copyright notice in the Description page of Project Settings.

#include "RobotAIController.h"
#include "BTeamProjectTilde.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/NavMovementComponent.h"
#include "Engine/Engine.h"

ARobotAIController::ARobotAIController()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARobotAIController::BeginPlay()
{
    Super::BeginPlay();

    // Disable automatic movement
    bIsMovementDisabled = true;
    //GetPawn()->SetActorTickEnabled(false);
}

FVector ARobotAIController::GetDesiredMovementDirection() const
{
    if (!GetPawn())
        return FVector::ZeroVector;

    // Calculate intended movement direction without actually moving
    const FVector CurrentLocation = GetPawn()->GetActorLocation();
    const FVector TargetLocation = GetPathFollowingComponent()->GetCurrentTargetLocation();

    return (TargetLocation - CurrentLocation).GetSafeNormal();
}

FRotator ARobotAIController::GetDesiredRotation()
{
    const FVector Direction = GetDesiredMovementDirection();
    if (Direction.IsNearlyZero()) {
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("Direction is zero"));

    }
    if (forwardFacingMeshObj == nullptr) {
		
        GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Red, FString::Printf(TEXT("wheelHubMesh is nullptr %d"), i));
        i++;
    }
    if (forwardFacingMeshObj == nullptr || Direction.IsNearlyZero())   return FRotator::ZeroRotator;
    //CurrentWorldRotation = wheelHubMesh->GetComponentRotation();
	//FVector::DotProduct(Direction, wheelHubMesh->GetForwardVector());
    // 
    //double temp = FMath::Acos(FVector::DotProduct(Direction, forwardFacingMeshObj->GetForwardVector()) / 180 * PI) * 180 / PI;

    // Project vectors onto X-Z plane by setting Y to 0
    FVector ForwardProjected = forwardFacingMeshObj->GetForwardVector();
    ForwardProjected.Y = 0;
    ForwardProjected.Normalize();

    FVector DirectionProjected = Direction;
    DirectionProjected.Y = 0;
    DirectionProjected.Normalize();

    // Calculate yaw angle using atan2
    float DeltaX = DirectionProjected.X - ForwardProjected.X;
    float DeltaZ = DirectionProjected.Z - ForwardProjected.Z;
    float YawAngleDegrees = FMath::Atan2(DeltaZ, DeltaX) * (180.f / PI);
    float NormalizedAngle = FMath::Fmod(YawAngleDegrees, 360.f);
	return FRotator(NormalizedAngle, NormalizedAngle, NormalizedAngle);
    //return FRotationMatrix::MakeFromZ(Direction).Rotator();
}

void ARobotAIController::SetMovementEnabled(bool bEnable)
{
    bIsMovementDisabled = !bEnable;

    if (!GetPawn())
        return;

    //GetPawn()->SetActorTickEnabled(bEnable);

    // Notify Blueprint graph of movement intent changes
    OnCalculateMovementIntent(
        GetDesiredMovementDirection(),
        GetDesiredRotation()
    );
}
