// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BeachAnimal.h"
#include "FastTurtle.generated.h"

/**
 * 
 */
UCLASS()
class SECONDTASK_API AFastTurtle : public ABeachAnimal
{
	GENERATED_BODY()

	virtual void Tick(float DeltaTime) override;
};
