// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Resource_M.h"
#include "Kismet/GameplayStatics.h"		// For gameplay-related static functions
#include "BuildingPart.h"
#include "PlayerWidget.h" // For player UI widget
#include "PlayerChar.generated.h"

UCLASS()
class AKELLFERN312_API APlayerChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles forward and backward movement
	UFUNCTION()
		void MoveForward(float axisValue);

	// Handles left and right movement
	UFUNCTION()
		void MoveRight(float axisValue);

	// Called when the player starts jumping
	UFUNCTION()
		void StartJump();

	// Called when the player stops jumping
	UFUNCTION()
		void StopJump();

	// Finds objects the player can interact with
	UFUNCTION()
		void FindObject();

	// Camera component for first-person view
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* PlayerCamComp;

	// Player stats
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float Health = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float Hunger = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float Stamina = 100.0f;

	// Resource counts
	UPROPERTY(EditAnywhere, Category = "Resources")
		int Wood;

	UPROPERTY(EditAnywhere, Category = "Resources")
		int Stone;

	UPROPERTY(EditAnywhere, Category = "Resources")
		int Berry;

	// Array to hold current resource amounts
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
		TArray<int> ResourcesArray;

	// Array to hold resource names (Wood, Stone, Berry, etc.)
	UPROPERTY(EditAnywhere, Category = "Resources")
		TArray<FString> ResourcesNameArray;

	// Material for hit marker decal when hitting something
	UPROPERTY(EditAnywhere, Category = "HitMarker")
		UMaterialInterface* hitDecal;

	// Array for tracking building materials
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Building Supplies")
		TArray<int> BuildingArray;

	// Whether player is currently in build mode
	UPROPERTY()
		bool isBuilding;

	// Class type to spawn when building
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TSubclassOf<ABuildingPart> BuildPartClass;

	// Reference to the currently spawned building part
	UPROPERTY()
		ABuildingPart* spawnedPart;

	// Reference to the player’s UI widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPlayerWidget* playerUI;

	// Updates player’s health value
	UFUNCTION(BlueprintCallable)
		void SetHealth(float amount);

	// Updates player’s hunger value
	UFUNCTION(BlueprintCallable)
		void SetHunger(float amount);

	// Updates player’s stamina value
	UFUNCTION(BlueprintCallable)
		void SetStamina(float amount);

	// Gradually decreases stats over time
	UFUNCTION()
		void DecreaseStats();

	// Adds a specific resource type to player inventory
	UFUNCTION()
		void GiveResource(float amount, FString resourceType);

	// Updates resource counts and building materials in UI
	UFUNCTION(BlueprintCallable)
		void UpdateResources(float woodAmount, float stoneAmount, FString buildingObject);

	// Spawns a building piece based on given ID
	UFUNCTION(BlueprintCallable)
		void SpawnBuilding(int buildingID, bool& isSuccess);

	// Rotates the current building part before placing it
	UFUNCTION()
		void RotateBuilding();
};
