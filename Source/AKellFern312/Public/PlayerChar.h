// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Resource_M.h"
#include "Kismet/GameplayStatics.h"		// For gameplay-related static functions
#include "BuildingPart.h"
#include "PlayerWidget.h" // For player UI widget
#include "ObjectiveWidget.h" // For objective UI widget
#include "Components/InteractorComponent.h" // For InteractionSystem Plugin integration
#include "Logging/LogMacros.h" // For logging
#include "PlayerChar.generated.h"

// First-person survival player character: movement, stats, resources, building, and interaction
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

	// Interaction Widget 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		TSubclassOf<UUserWidget> InteractionPromptClass;

	// The created instance of InteractionPromptClass, shown/hidden based on what the player is looking at
	UPROPERTY()
		UUserWidget* InteractionPromptWidget;

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

	// Calls the interaction function from the InteractorComponent
	UFUNCTION()
		void CallInteraction();

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
		int Wood;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
		int Stone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resources")
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

	// Class type to spawn when building
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Building Supplies")
		TSubclassOf<ABuildingPart> BuildPartClass;

	// Reference to the player�s UI widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPlayerWidget* playerUI;

	// Reference to the objective UI widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UObjectiveWidget* objWidget;	

	// Objective items built tracking
	UPROPERTY()
		float objectsBuilt;

	// Objective materials collected tracking
	UPROPERTY()
		float matsCollected;

	// InteractionSystem Plugin integration
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
		TObjectPtr<UInteractorComponent> InteractorComponent;

	// Updates player�s health value
	UFUNCTION(BlueprintCallable)
		void SetHealth(float amount);

	// Updates player�s hunger value
	UFUNCTION(BlueprintCallable)
		void SetHunger(float amount);

	// Updates player�s stamina value
	UFUNCTION(BlueprintCallable)
		void SetStamina(float amount);

	// Gradually decreases stats over time
	UFUNCTION()
		void DecreaseStats();

	// Adds a specific resource type to player inventory
	UFUNCTION(BlueprintCallable)
		void GiveResource(int amount, FString resourceType);

	// Updates resource counts and building materials in UI
	UFUNCTION(BlueprintCallable)
		void UpdateResources(int woodAmount, int stoneAmount, FString buildingObject);

	// Spawns a building piece based on given ID, delegating placement to UBuildingSubsystem
	UFUNCTION(BlueprintCallable)
		void SpawnBuilding(int buildingID, bool& isSuccess);

	// Rotates the current building part before placing it
	UFUNCTION()
		void RotateBuilding();

private:
	// Helper to fetch the world's building subsystem
	class UBuildingSubsystem* GetBuildingSubsystem() const;

};
