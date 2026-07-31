#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "InteractorComponent.generated.h"

class AActor;
class USceneComponent;
class UInteractableComponent;

/**
 * Component responsible for detecting and initiating interactions.
 *
 * Add this component to any actor that should be able to interact with
 * actors containing an InteractableComponent.
 */
UCLASS(ClassGroup = (Interaction), meta = (BlueprintSpawnableComponent))
class INTERACTIONSYSTEM_API UInteractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractorComponent();

	/**
	 * Performs an interaction with the currently detected target.
	 */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Interact();

	/**
	 * Immediately performs a trace to update the current interaction target.
	 */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void UpdateInteractionTarget();

	/**
	 * Sets the scene component used as the interaction trace origin.
	 *
	 * This can be a camera, spring arm, weapon component, or another
	 * scene component chosen by the owning actor.
	 *
	 * @param NewTraceOrigin Component from which the trace should begin.
	 */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetTraceOrigin(USceneComponent* NewTraceOrigin);

	/**
	 * Returns the interactable component currently being targeted.
	 */
	UFUNCTION(BlueprintPure, Category = "Interaction")
	UInteractableComponent* GetCurrentInteractable() const;

	/**
	 * Returns the actor currently being targeted.
	 */
	UFUNCTION(BlueprintPure, Category = "Interaction")
	AActor* GetCurrentInteractableActor() const;

	/**
	 * Returns the interaction text supplied by the current target.
	 */
	UFUNCTION(BlueprintPure, Category = "Interaction")
	FText GetCurrentInteractionText() const;

	/** Maximum distance used when searching for an interactable actor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Trace", meta = (ClampMin = "0.0"))
	float InteractionTraceDistance = 500.0f;

	/** Collision channel used by the interaction trace. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Trace")
	TEnumAsByte<ECollisionChannel> InteractionTraceChannel = ECC_Visibility;

	/** Whether interaction tracing should update automatically every frame. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Trace")
	bool bAutoUpdateTarget = true;

protected:
	virtual void BeginPlay() override;

	virtual void TickComponent(
		float DeltaTime,
		ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;

private:
	/**
	 * Optional component used as the trace origin.
	 *
	 * When this is not assigned, the component uses the owning actor's
	 * viewpoint instead.
	 */
	UPROPERTY()
	TObjectPtr<USceneComponent> TraceOriginComponent;

	/** Interactable component found by the most recent successful trace. */
	UPROPERTY()
	TObjectPtr<UInteractableComponent> CurrentInteractable;
};