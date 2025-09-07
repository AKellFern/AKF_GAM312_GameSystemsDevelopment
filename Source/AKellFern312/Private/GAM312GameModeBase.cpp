// Fill out your copyright notice in the Description page of Project Settings.

#include "GAM312GameModeBase.h"
#include "PlayerChar.h" // custom player character

AGAM312GameModeBase::AGAM312GameModeBase()
{
	// Spawn our custom first-person character
	DefaultPawnClass = APlayerChar::StaticClass();
}

void AGAM312GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	// (No debug logging for Module One)
}
