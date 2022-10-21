#pragma once
#include "CoreMinimal.h"
#include "SecondTask/Actors/BeachAnimal.h"
#include "SlowTurtle.generated.h"

UCLASS()
class SECONDTASK_API ASlowTurtle : public ABeachAnimal
{
	GENERATED_BODY()
	
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;
	
	FTimerHandle Timer;
	
	bool BCanMove=true;

	void Go();
	void Stop();
	
};
