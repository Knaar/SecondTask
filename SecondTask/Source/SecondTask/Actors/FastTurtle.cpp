#include "FastTurtle.h"


	


void AFastTurtle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(GetMovePosition(DeltaTime), true);
	SetActorRotation(GetRotation());
}
