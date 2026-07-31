#include "Components/InteractorComponent.h"

#include "Components/InteractableComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "InteractionSystem.h"

UInteractorComponent::UInteractorComponent()
{
	// Automatic tracing requires this component to update each frame.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;

	InteractionTraceDistance = 500.0f;
	InteractionTraceChannel = ECC_Visibility;
	bAutoUpdateTarget = true;
}

void UInteractorComponent::BeginPlay()
{
	Super::BeginPlay();

	UpdateInteractionTarget();
}

void UInteractorComponent::TickComponent(
	float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bAutoUpdateTarget)
	{
		UpdateInteractionTarget();
	}
}

void UInteractorComponent::Interact()
{
	UE_LOG(LogInteractionSystem, Warning, TEXT("Interact() called"));

	if (!CurrentInteractable)
	{
		return;
	}

	AActor* InteractingActor = GetOwner();

	if (!InteractingActor)
	{
		return;
	}

	CurrentInteractable->ConfirmInteract(InteractingActor);
}

void UInteractorComponent::UpdateInteractionTarget()
{
	CurrentInteractable = nullptr;

	AActor* Owner = GetOwner();
	UWorld* World = GetWorld();

	if (!Owner || !World)
	{
		return;
	}

	FVector TraceStart;
	FVector TraceDirection;

	if (TraceOriginComponent)
	{
		TraceStart = TraceOriginComponent->GetComponentLocation();
		TraceDirection = TraceOriginComponent->GetForwardVector();
	}
	else
	{
		FRotator ViewRotation;
		Owner->GetActorEyesViewPoint(TraceStart, ViewRotation);
		TraceDirection = ViewRotation.Vector();
	}

	const FVector TraceEnd =
		TraceStart + (TraceDirection * InteractionTraceDistance);

	FHitResult HitResult;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Owner);

	const bool bHit = World->LineTraceSingleByChannel(
		HitResult,
		TraceStart,
		TraceEnd,
		InteractionTraceChannel,
		QueryParams);

	if (!bHit)
	{
		return;
	}

	AActor* HitActor = HitResult.GetActor();

	if (!HitActor)
	{
		return;
	}

	UInteractableComponent* FoundInteractable =
		HitActor->FindComponentByClass<UInteractableComponent>();

	if (!FoundInteractable || !FoundInteractable->bCanInteract)
	{
		return;
	}

	CurrentInteractable = FoundInteractable;
}

void UInteractorComponent::SetTraceOrigin(USceneComponent* NewTraceOrigin)
{
	TraceOriginComponent = NewTraceOrigin;
}

UInteractableComponent* UInteractorComponent::GetCurrentInteractable() const
{
	return CurrentInteractable;
}

AActor* UInteractorComponent::GetCurrentInteractableActor() const
{
	return CurrentInteractable
		? CurrentInteractable->GetOwner()
		: nullptr;
}

FText UInteractorComponent::GetCurrentInteractionText() const
{
	return CurrentInteractable
		? CurrentInteractable->InteractionText
		: FText::GetEmpty();
}

