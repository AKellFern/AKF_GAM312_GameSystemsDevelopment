// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingPart.generated.h"

class UStaticMeshComponent;
class UArrowComponent;

// A placeable building piece (wall, floor, ceiling, etc.) spawned by the building system
UCLASS()
class AKELLFERN312_API ABuildingPart : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuildingPart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Visual mesh for this building piece
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;

	// Root component defining the piece's pivot/snap point
	UPROPERTY(EditAnywhere)
		UArrowComponent* PivotArrow;
};