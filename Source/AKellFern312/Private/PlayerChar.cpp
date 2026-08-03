// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChar.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"   // Controller, GetControlRotation()
#include "Math/RotationMatrix.h"   // FRotationMatrix
#include "../AKellFern312.h"
#include "BuildingSubsystem.h"


// Sets default values
APlayerChar::APlayerChar()
{
 	//Implement Player Character based on UE documentation for smoother control.
	PrimaryActorTick.bCanEverTick = true; // Set this character to call Tick() every frame.

	PlayerCamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCam")); // Create a CameraComponent
	PlayerCamComp->SetupAttachment(GetCapsuleComponent()); // Attach the camera to the capsule component
	PlayerCamComp->bUsePawnControlRotation = true; //Rotate the camera based on the controller
	PlayerCamComp->SetRelativeLocation(FVector(20.0f, 0.0f, 74.0f)); // Position the camera about eye-level 

	//FPS feel: let controller handle rotation, not the character
	bUseControllerRotationYaw= true;
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = false;
	if (auto* Move = GetCharacterMovement()) {

		Move->bOrientRotationToMovement = false; // Character moves in the direction of input...	
		
	}

	BuildingArray.SetNum(3);
	ResourcesArray.SetNum(3);
	ResourcesNameArray.Add(TEXT("Wood"));
	ResourcesNameArray.Add(TEXT("Stone"));
	ResourcesNameArray.Add(TEXT("Berry"));

	// InteractionSystem Plugin integration
	InteractorComponent = CreateDefaultSubobject<UInteractorComponent>(TEXT("InteractorComponent"));

}

// Called when the game starts or when spawned
void APlayerChar::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle StatsTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(StatsTimerHandle, this, &APlayerChar::DecreaseStats, 2.0f, true);
	
	// Initialize the player objectives
	if (objWidget) {

		objWidget->UpdatebuildOBJ(0.0f);
		objWidget->UpdatematOBJ(0.0f);
	}

	// Create the interaction prompt widget once and keep it hidden until something interactable is targeted
	if (InteractionPromptClass)
	{
		InteractionPromptWidget = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), InteractionPromptClass);

		if (InteractionPromptWidget)
		{
			InteractionPromptWidget->AddToViewport();
			InteractionPromptWidget->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			UE_LOG(LogInteractionSystem, Error, TEXT("Failed to create Interaction Prompt Widget from class %s"), *GetNameSafe(InteractionPromptClass));
		}
		
	}

	InteractorComponent->SetTraceOrigin(PlayerCamComp);

}

// Called every frame
void APlayerChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update HUD bars every frame
	playerUI->UpdateBars(Health, Hunger, Stamina);


	// If in build mode, keep the ghost part floating in front of the player
	if (UBuildingSubsystem* BuildingSubsystem = GetBuildingSubsystem())
	{
		if (BuildingSubsystem->IsBuilding())
		{
			FVector StartLocation = PlayerCamComp->GetComponentLocation();
			FVector Direction = PlayerCamComp->GetForwardVector() * 400.0f;
			FVector EndLocation = StartLocation + Direction;
			BuildingSubsystem->UpdateBuildingPosition(EndLocation);
		}
	}

	// Debug logging of whatever the InteractorComponent's trace is currently targeting
	if (InteractorComponent)
	{
		if (InteractorComponent->GetCurrentInteractableActor())
		{
			UE_LOG(LogInteractionSystem, Warning, TEXT("Interactor found: %s"),
				*InteractorComponent->GetCurrentInteractableActor()->GetName());
		}
		else
		{
			UE_LOG(LogInteractionSystem, Warning, TEXT("Interactor found nothing"));
		}
	}

	// Show the interaction prompt only while a valid interactable is targeted
	const bool bHasInteractable = IsValid(InteractorComponent->GetCurrentInteractableActor());

	if (InteractionPromptWidget)
	{
		InteractionPromptWidget->SetVisibility(
			bHasInteractable
			? ESlateVisibility::Visible
			: ESlateVisibility::Hidden);
	}
}


// Called to bind functionality to input
void APlayerChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerChar::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerChar::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerChar::AddControllerYawInput);
	PlayerInputComponent->BindAction("JumpEvent", IE_Pressed, this, &APlayerChar::StartJump);
	PlayerInputComponent->BindAction("JumpEvent", IE_Released, this, &APlayerChar::StopJump);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerChar::CallInteraction);
	PlayerInputComponent->BindAction("RotPart", IE_Pressed, this, &APlayerChar::RotateBuilding);
	PlayerInputComponent->BindAction("PlaceBuilding", IE_Pressed, this, &APlayerChar::ConfirmBuilding);


}

//Allows the Player to move forward and backward
void APlayerChar::MoveForward(float axisValue) {

	if (Controller && axisValue != 0.f) {

		const FRotator YawRot(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Dir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		AddMovementInput(Dir, axisValue);
	}
}

//Allows the Player to move right and left
void APlayerChar::MoveRight(float axisValue) {

	if (Controller && axisValue != 0.f) {

		const FRotator YawRot(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Dir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
		AddMovementInput(Dir, axisValue);
	}
}

//Allows the Player to jump
void APlayerChar::StartJump() {

	bPressedJump = true;
}

//Allows the Player to stop jumping
void APlayerChar::StopJump() {

	bPressedJump = false;
}

//Calls the interaction function from the InteractorComponent
void APlayerChar::CallInteraction()
{
	if (InteractorComponent)
	{
		InteractorComponent->Interact();
	}
}

/*After research due to my own eat berry button not functioning correctly,
I have decided to use clamp math as this will keep the values between 0 and 100*/

// Function to set the Player's Health 
void APlayerChar::SetHealth(float amount)
{

	Health = FMath::Clamp(Health + amount, 0.0f, 100.0f);
	
}

// Function to set the Player's Hunger
void APlayerChar::SetHunger(float amount)
{

	Hunger = FMath::Clamp(Hunger + amount, 0.0f, 100.0f);
}

// Function to set the Player's Stamina
void APlayerChar::SetStamina(float amount)
{

	Stamina = FMath::Clamp(Stamina + amount, 0.0f, 100.0f);
}

// Function to gradually decrease player stats over time
void APlayerChar::DecreaseStats()
{
	if (Hunger > 0) {

		SetHunger(-1.0f);
		
	}

	SetStamina(10.0f);

	if (Hunger <= 0.0f) 
	{

		SetHealth(-3.0f);

	}
}

// Adds the given amount to the matching slot in ResourcesArray based on resourceType
void APlayerChar::GiveResource(int amount, FString resourceType)
{
	if (resourceType == "Wood") 
	{
		ResourcesArray[0] += amount;
	}

	if (resourceType == "Stone") 
	{
		ResourcesArray[1] += amount;
	}

	if (resourceType == "Berry")
	{
		ResourcesArray[2] += amount;
	}
}

// Spends wood/stone from ResourcesArray and adds one to the matching BuildingArray slot, if affordable
void APlayerChar::UpdateResources(int woodAmount, int stoneAmount, FString buildingObject)
{
	if (woodAmount <= ResourcesArray[0]) {

		if (stoneAmount <= ResourcesArray[1]) {

			ResourcesArray[0] = ResourcesArray[0] - woodAmount;
			ResourcesArray[1] = ResourcesArray[1] - stoneAmount;

			if (buildingObject == "Wall") {

				BuildingArray[0] += 1;

			}

			if (buildingObject == "Floor") {

				BuildingArray[1] += 1;

			}

			if (buildingObject == "Ceiling") {

				BuildingArray[2] += 1;

			}
		}
	}
}

// Checks inventory for the requested piece, then asks UBuildingSubsystem to spawn it in front of the camera
void APlayerChar::SpawnBuilding(int buildingID, bool& isSuccess)
{
	isSuccess = false;

	UBuildingSubsystem* BuildingSubsystem = GetBuildingSubsystem();

	if (!BuildingSubsystem || BuildingSubsystem->IsBuilding())
	{
		return;
	}

	if (BuildingArray[buildingID] >= 1)
	{
		FVector StartLocation = PlayerCamComp->GetComponentLocation();
		FVector Direction = PlayerCamComp->GetForwardVector() * 400.0f;
		FVector EndLocation = StartLocation + Direction;
		FRotator myRot(0, 0, 0);

		isSuccess = BuildingSubsystem->SpawnBuilding(BuildPartClass, EndLocation, myRot);

		if (isSuccess)
		{
			BuildingArray[buildingID] -= 1;
		}
	}
}

// Forwards the rotate-building input to UBuildingSubsystem
void APlayerChar::RotateBuilding()
{
	if (UBuildingSubsystem* BuildingSubsystem = GetBuildingSubsystem())
	{
		BuildingSubsystem->RotateBuilding();
	}
}

// Forwards the confirm-placement input to UBuildingSubsystem
void APlayerChar::ConfirmBuilding()
{
	if (UBuildingSubsystem* BuildingSubsystem = GetBuildingSubsystem())
	{
		BuildingSubsystem->ConfirmPlacement();
	}
}

// Looks up the current world's building subsystem instance
UBuildingSubsystem* APlayerChar::GetBuildingSubsystem() const
{
	return GetWorld() ? GetWorld()->GetSubsystem<UBuildingSubsystem>() : nullptr;
}
