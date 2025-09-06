// Fill out your copyright notice in the Description page of Project Settings.

#include "GAM312GameModeBase.h"
#include "PlayerChar.h" // include custom player character
#include "Kismet/GameplayStatics.h" // for easy gameplay helpers
#include "Engine/Engine.h" // for GEngine->AddOnScreenDebugMessage

AGAM312GameModeBase::AGAM312GameModeBase()
{
    // Initialize score to zero
    PlayerScore = 0;

    //Set default pawn class to created PlayerChar
	DefaultPawnClass = APlayerChar::StaticClass();
}

void AGAM312GameModeBase::BeginPlay()
{
    Super::BeginPlay();

    // Log to output window
    UE_LOG(LogTemp, Warning, TEXT("GAM312 Game Mode has started!"));

    // Optional: Debug print to screen so you can *see it* when testing
    if (GEngine) {
        GEngine->AddOnScreenDebugMessage(
            -1,                  // key (-1 = new message every time)
            5.f,                 // duration (seconds)
            FColor::Green,       // color
            TEXT("GAM312 Game Mode Started")
        );
    }
}

void AGAM312GameModeBase::AddScore(int32 Amount)
{
    PlayerScore += Amount;

    // Log updated score
    UE_LOG(LogTemp, Warning, TEXT("Player Score updated: %d"), PlayerScore);

    // Optional: Debug print to screen
    if (GEngine) {
        GEngine->AddOnScreenDebugMessage(
            -1,
            3.f,
            FColor::Yellow,
            FString::Printf(TEXT("Score: %d"), PlayerScore)
        );
    }
}
