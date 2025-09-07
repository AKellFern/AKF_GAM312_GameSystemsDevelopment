// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GAM312GameModeBase.generated.h"

UCLASS()
class AKELLFERN312_API AGAM312GameModeBase : public AGameModeBase {
	GENERATED_BODY()

public:
	AGAM312GameModeBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
