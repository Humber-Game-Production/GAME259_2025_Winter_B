// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterAI.generated.h"

UCLASS()
class BTEAMPROJECTTILDE_API ACharacterAI : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	mutable UStaticMeshComponent* headMesh = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	mutable FRotator headRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	mutable double headAngle = 0.0;

	UFUNCTION(BlueprintCallable, Category = "Math")
	float GetMidpoint(float AngleA, float AngleB);
	// Sets default values for this character's properties
	ACharacterAI();

	virtual void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
