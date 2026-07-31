#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

class AActor;

UINTERFACE(BlueprintType)
class INTERACTIONSYSTEM_API UInteractable : public UInterface
{
	GENERATED_BODY()
};

class INTERACTIONSYSTEM_API IInteractable
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void ExecuteInteraction(AActor* InteractingActor);
};