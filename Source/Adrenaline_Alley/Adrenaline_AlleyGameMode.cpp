// Copyright Epic Games, Inc. All Rights Reserved.

#include "Adrenaline_AlleyGameMode.h"
#include "Adrenaline_AlleyCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"

void AAdrenaline_AlleyGameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("WORKING!"));

}

void AAdrenaline_AlleyGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

