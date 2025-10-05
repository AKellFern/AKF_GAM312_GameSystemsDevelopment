// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChar.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"   // Controller, GetControlRotation()
#include "Math/RotationMatrix.h"        // FRotationMatrix


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

}

// Called when the game starts or when spawned
void APlayerChar::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle StatsTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(StatsTimerHandle, this, &APlayerChar::DecreaseStats, 2.0f, true);
	
}

// Called every frame
void APlayerChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Update HUD bars every frame
	playerUI->UpdateBars(Health, Hunger, Stamina);


	// If in build mode, keep the ghost part floating in front of the player
	if (isBuilding) {
		if (spawnedPart) {

			FVector StartLocation = PlayerCamComp->GetComponentLocation();
			FVector Direction = PlayerCamComp->GetForwardVector() * 400.0f;
			FVector EndLocation = StartLocation + Direction;
			spawnedPart->SetActorLocation(EndLocation);
		}
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
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerChar::FindObject);
	PlayerInputComponent->BindAction("RotPart", IE_Pressed, this, &APlayerChar::RotateBuilding);


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

//Placeholder function for Module Two
void APlayerChar::FindObject()
{
	FHitResult HitResult;
	FVector StartLocation = PlayerCamComp->GetComponentLocation();
	FVector Direction = PlayerCamComp->GetForwardVector() * 800.0f;
	FVector EndLocation = StartLocation + Direction;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;
	QueryParams.bReturnFaceIndex = true;

	if (!isBuilding) {

		if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams))
		{
			AResource_M* HitResource = Cast<AResource_M>(HitResult.GetActor());

			if (Stamina > 5.0f)
			{
				if (HitResource)
				{
					FString hitName = HitResource->resourceName;
					int resourceValue = HitResource->resourceAmount;

					HitResource->totalResource -= resourceValue;

					if (HitResource->totalResource > resourceValue)
					{
						GiveResource(resourceValue, hitName);

						check(GEngine != nullptr);
						GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Resource Collected"));

						UGameplayStatics::SpawnDecalAtLocation(GetWorld(), hitDecal, FVector(10.0f, 10.0f, 10.0f), HitResult.Location, FRotator(-90, 0, 0), 2.0f);

						SetStamina(-5.0f);
					}

					else
					{
						HitResource->Destroy();
						check(GEngine != nullptr);
						GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Resource Depleted"));
					}
				}
			}

		}

	}

	else {

		isBuilding = false;
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

void APlayerChar::GiveResource(float amount, FString resourceType)
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

void APlayerChar::UpdateResources(float woodAmount, float stoneAmount, FString buildingObject)
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

void APlayerChar::SpawnBuilding(int buildingID, bool& isSuccess)
{
	if (!isBuilding){

		if (BuildingArray[buildingID] >= 1){

			isBuilding = true;
			FActorSpawnParameters SpawnParams;
			FVector StartLocation = PlayerCamComp->GetComponentLocation();
			FVector Direction = PlayerCamComp->GetForwardVector() * 400.0f;
			FVector EndLocation = StartLocation + Direction;
			FRotator myRot(0, 0, 0);

			BuildingArray[buildingID] -= 1;

			spawnedPart = GetWorld()->SpawnActor<ABuildingPart>(BuildPartClass, EndLocation, myRot, SpawnParams);

			isSuccess = true;

		}

		isSuccess = false;

	}
}

void APlayerChar::RotateBuilding()
{

	if (isBuilding)
	{

		spawnedPart->AddActorWorldRotation(FRotator(0, 90, 0));
	}
}
