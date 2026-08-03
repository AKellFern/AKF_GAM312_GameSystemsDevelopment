// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BuildingSubsystem.generated.h"

class ABuildingPart;

// Owns the mechanics of placing and adjusting a building part in the world.
// Callers (e.g. PlayerChar) are responsible for their own inventory checks
// and for computing where a new part should be placed.
UCLASS()
class AKELLFERN312_API UBuildingSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	// Spawns a building part at the given transform. Fails (returns false) if
	// a part is already being placed, or if spawning the actor fails.
	UFUNCTION(BlueprintCallable, Category = "Building")
		bool SpawnBuilding(TSubclassOf<ABuildingPart> PartClass, FVector Location, FRotator Rotation);

	// Rotates the currently spawned building part by 90 degrees around Yaw.
	UFUNCTION(BlueprintCallable, Category = "Building")
		void RotateBuilding();

	// Moves the currently spawned building part to a new location, e.g. to
	// keep it following the player's camera while placement is in progress.
	UFUNCTION(BlueprintCallable, Category = "Building")
		void UpdateBuildingPosition(FVector Location);

	// Whether a building part is currently being placed.
	UFUNCTION(BlueprintPure, Category = "Building")
		bool IsBuilding() const { return bIsBuilding; }

	// Finalizes placement, leaving the spawned part where it currently is and
	// ending build mode so it stops following the caller's location updates.
	UFUNCTION(BlueprintCallable, Category = "Building")
		void ConfirmPlacement();

protected:
	// Whether a building part is currently being placed
	UPROPERTY()
		bool bIsBuilding = false;

	// The building part actor currently being placed, if any
	UPROPERTY()
		TObjectPtr<ABuildingPart> SpawnedPart;
};
