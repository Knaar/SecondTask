#pragma once
#include "CoreMinimal.h"
#include "BeachAnimal.h"
#include "StupidTurtle.generated.h"

UCLASS()
class SECONDTASK_API AStupidTurtle : public ABeachAnimal
{
	GENERATED_BODY()

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;
	
	FTimerHandle Timer;

	bool bRightDirection=true;

	void GoToRightDirection();
	void GoToWrongDirection();
	
};
