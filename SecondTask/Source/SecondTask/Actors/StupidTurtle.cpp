#include "StupidTurtle.h"

void AStupidTurtle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector CurrentLocation = GetActorLocation();
	FVector ForwardVector;
	bRightDirection ? ForwardVector = GetActorForwardVector() : ForwardVector = -GetActorForwardVector();

	const FVector MovePosition = CurrentLocation + (ForwardVector * MoveSpeed * DeltaTime);

	SetActorLocation(MovePosition, true);
	SetActorRotation(GetRotation());
}

void AStupidTurtle::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(Timer, this, &AStupidTurtle::GoToWrongDirection, 1, false, 1);
}

void AStupidTurtle::GoToRightDirection()
{
	bRightDirection = true;
	GetWorld()->GetTimerManager().SetTimer(Timer, this, &AStupidTurtle::GoToWrongDirection, 1, false, 1);
}

void AStupidTurtle::GoToWrongDirection()
{
	bRightDirection = false;
	GetWorld()->GetTimerManager().SetTimer(Timer, this, &AStupidTurtle::GoToRightDirection, 0.5f, false, 0.5f);
}
