// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingSubsystem.h"
#include "BuildingPart.h"

// Spawns a new building part if one isn't already being placed
bool UBuildingSubsystem::SpawnBuilding(TSubclassOf<ABuildingPart> PartClass, FVector Location, FRotator Rotation)
{
	if (bIsBuilding)
	{
		return false;
	}

	FActorSpawnParameters SpawnParams;
	SpawnedPart = GetWorld()->SpawnActor<ABuildingPart>(PartClass, Location, Rotation, SpawnParams);

	if (!SpawnedPart)
	{
		return false;
	}

	bIsBuilding = true;
	return true;
}

// Rotates the in-progress building part by 90 degrees
void UBuildingSubsystem::RotateBuilding()
{
	if (bIsBuilding && SpawnedPart)
	{
		SpawnedPart->AddActorWorldRotation(FRotator(0.0f, 90.0f, 0.0f));
	}
}

// Moves the in-progress building part to follow the caller's chosen location
void UBuildingSubsystem::UpdateBuildingPosition(FVector Location)
{
	if (bIsBuilding && SpawnedPart)
	{
		SpawnedPart->SetActorLocation(Location);
	}
}
