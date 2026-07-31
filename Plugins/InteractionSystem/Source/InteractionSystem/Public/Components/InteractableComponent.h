#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableComponent.generated.h"

class AActor;

UCLASS(ClassGroup = (Interaction), meta = (BlueprintSpawnableComponent))
class INTERACTIONSYSTEM_API UInteractableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractableComponent();

	/** Whether this component currently allows interaction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bCanInteract = true;

	/** Text displayed to the interacting player, such as "Open Door." */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	FText InteractionText;

	/**
	 * Confirms the interaction and passes along the actor performing it.
	 *
	 * @param InteractingActor Actor attempting the interaction.
	 */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ConfirmInteract(AActor* InteractingActor);

protected:
	virtual void BeginPlay() override;
};