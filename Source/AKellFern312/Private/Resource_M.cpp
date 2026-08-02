// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource_M.h"


// Sets default values
AResource_M::AResource_M()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Mesh is the root since this actor has no separate pivot component
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	RootComponent = Mesh;

	// Add the InteractionSystem plugin's component so the player can interact with this actor
	InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));

}

// Called when the game starts or when spawned
void AResource_M::BeginPlay()
{
	Super::BeginPlay();

	// Keep the cached FText in sync with the resource's name
	tempText = tempText.FromString(resourceName);

}

// Called every frame
void AResource_M::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

