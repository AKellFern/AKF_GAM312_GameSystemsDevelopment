#include "Components/InteractableComponent.h"

#include "Interfaces/Interactable.h"
#include "InteractionSystem.h"

UInteractableComponent::UInteractableComponent()
{
	// This component does not require a per-frame update.
	PrimaryComponentTick.bCanEverTick = false;

	// Default interaction settings.
	bCanInteract = true;
	InteractionText = FText::FromString(TEXT("Interact"));
}

void UInteractableComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UInteractableComponent::ConfirmInteract(AActor* InteractingActor)
{
	// Ignore interaction requests if this component has been disabled.
	if (!bCanInteract)
	{
		return;
	}

	AActor* Owner = GetOwner();

	if (!Owner)
	{
		return;
	}

	// Verify the owning actor implements the interaction interface before
	// attempting to execute it.
	if (Owner->Implements<UInteractable>())
	{
		IInteractable::Execute_ExecuteInteraction(Owner, InteractingActor);
	}
#if !UE_BUILD_SHIPPING
	else
	{
		UE_LOG(
			LogInteractionSystem,
			Warning,
			TEXT("InteractableComponent: '%s' does not implement IInteractable."),
			*GetNameSafe(Owner));
	}
#endif
}