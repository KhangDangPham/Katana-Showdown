// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "KatanaShowdownGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class KATANASHOWDOWN_API AKatanaShowdownGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
};
