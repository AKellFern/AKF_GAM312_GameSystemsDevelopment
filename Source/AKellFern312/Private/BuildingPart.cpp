// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingPart.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABuildingPart::ABuildingPart()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PivotArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("PivotArrow"));
	SetRootComponent(PivotArrow);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void ABuildingPart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildingPart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

