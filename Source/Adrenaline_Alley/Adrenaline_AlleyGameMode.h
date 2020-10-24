// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Adrenaline_AlleyGameMode.generated.h"

UCLASS(minimalapi)
class AAdrenaline_AlleyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};



