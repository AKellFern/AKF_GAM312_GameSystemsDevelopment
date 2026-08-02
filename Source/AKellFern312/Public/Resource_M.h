// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InteractableComponent.h" // For InteractionSystem Plugin integration
#include "Resource_M.generated.h"

// A gatherable resource actor (wood, stone, berry, etc.) that the player can interact with
UCLASS()
class AKELLFERN312_API AResource_M : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AResource_M();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Which resource type this actor represents (matches PlayerChar's ResourcesNameArray entries)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString resourceName = "Wood";

	// How much of the resource is given to the player per interaction
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int resourceAmount = 5;

	// Total amount of this resource available before it's depleted
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int totalResource = 100;

	// Cached FText conversion of resourceName
	UPROPERTY()
		FText tempText;

	// Visual mesh for this resource
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;

	// Mesh asset reference used when picking/assigning this resource's visual
	UPROPERTY(EditAnywhere)
		UStaticMesh* resourceMesh;

	// InteractionSystem Plugin integration: makes this actor interactable by the player
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
		TObjectPtr<UInteractableComponent> InteractableComponent;
};