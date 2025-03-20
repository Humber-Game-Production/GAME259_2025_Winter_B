// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAI.h"

// Sets default values
ACharacterAI::ACharacterAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACharacterAI::GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const
{

    TArray<UActorComponent*> Components;
    GetComponents<UActorComponent>(Components);

    //UE_LOG(LogTemp, Display, TEXT("Number of Components: %d"), Components.Num());
    if (headMesh == nullptr) {
        for (UActorComponent* Component : Components)
        {
            if (Component->GetName().Contains(TEXT("SM_LightVillanHead_KSJH1")))
            {
                //UE_LOG(LogTemp, Display, TEXT("Found Cube component"));

                // Cast to UStaticMeshComponent and get location
                UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>(Component);
                headMesh = MeshComp;
            }
        }
    }
    //for (UActorComponent* Component : Components)
    //{
    //    if (Component->GetName().Contains(TEXT("Cube")))
    //    {
    //        //UE_LOG(LogTemp, Display, TEXT("Found Cube component"));

    //        // Cast to UStaticMeshComponent and get location
    //        UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>(Component);
            if (headMesh)
            {
                FVector Location = headMesh->GetComponentLocation();
                //UE_LOG(LogTemp, Display, TEXT("Cube component location: X=%f Y=%f Z=%f"), Location.X, Location.Y, Location.Z);
                //headRotation.Roll = headAngle;
                OutLocation = Location;
                //OutRotation = headRotation;//headMesh->GetComponentRotation();

                //headMesh->SetRelativeRotation(FQuat(0.0, 0.0, 1.0, headAngle));
                //headMesh->SetWorldRotation(FQuat(0.0, 0.0, 1.0, headAngle));
                //headMesh->AddLocalRotation(FQuat(0.0, 0.0, 1.0, 0.00000000001));
                //OutRotation = GetActorQuat().Rotator();
                OutRotation = headMesh->GetComponentRotation();
                OutRotation.Yaw = OutRotation.Yaw - 90;
                //break;
            }
        //}
    //}
    //OutRotation = GetMesh()->GetSocketRotation("HeadSocket");
    //UE_LOG(LogTemp, Display, TEXT("OutRotation X=%f Y=%f Z=%f"), OutRotation.Pitch, OutRotation.Yaw, OutRotation.Roll);
    //OutRotation X=-5.433539 Y=1.604771 Z=-1.463423

    /*FVector test = FVector(0.0, 0.0, 0.0);
    test.*/
}

// Called when the game starts or when spawned
void ACharacterAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//phind (ai) helped solve this
float ACharacterAI::GetMidpoint(float AngleA, float AngleB) {
    // Normalize angles to [-180, 180] range
    float NormA = FMath::UnwindDegrees(AngleA);
    float NormB = FMath::UnwindDegrees(AngleB);

    // Calculate the shortest path between angles
    float Delta = NormB - NormA;
    if (Delta > 180.f)
    {
        NormB -= 360.f;
    }
    else if (Delta < -180.f)
    {
        NormB += 360.f;
    }

    // Calculate midpoint
    float Result = (NormA + NormB) / 2.f;

    // Normalize result to [-180, 180] range
    return FMath::UnwindDegrees(Result);
}