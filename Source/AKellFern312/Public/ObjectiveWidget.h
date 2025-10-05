// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

/**
 * 
 */
UCLASS()
class AKELLFERN312_API UObjectiveWidget : public UUserWidget
{
	GENERATED_BODY()

public:


	// Materials Collected Objective
	UFUNCTION(BlueprintImplementableEvent)
		void UpdatematOBJ(float matsCollected);

	// Objects Built Objective
	UFUNCTION(BlueprintImplementableEvent)
		void UpdatebuildOBJ(float objectsBuilt);
	
	
	
	
};
