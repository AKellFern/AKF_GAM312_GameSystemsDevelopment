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

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams)) 
	{
		AResource_M* HitResource = Cast<AResource_M>(HitResult.GetActor());

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

void APlayerChar::SetHealth(float amount)
{

	if (Health + amount < 100) {

		Health += amount;

	}
	
}

void APlayerChar::SetHunger(float amount)
{

	if (Hunger + amount < 100) {

		Hunger += amount;

	}
}

void APlayerChar::SetStamina(float amount)
{

	if (Stamina + amount < 100) {

		Stamina += amount;

	}
}

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

