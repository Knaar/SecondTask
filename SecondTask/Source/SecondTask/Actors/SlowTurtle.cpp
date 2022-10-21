#include "SecondTask/Actors/SlowTurtle.h"

void ASlowTurtle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (BCanMove)
	{
		SetActorLocation(GetMovePosition(DeltaTime), true);
		SetActorRotation(GetRotation());
	}
}

void ASlowTurtle::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(Timer,this,&ASlowTurtle::Stop,1,false,1);
}

void ASlowTurtle::Go()
{
	BCanMove=true;
	GetWorld()->GetTimerManager().SetTimer(Timer,this,&ASlowTurtle::Stop,1.0f,false,1.0f);
}

void ASlowTurtle::Stop()
{
	BCanMove=false;
	GetWorld()->GetTimerManager().SetTimer(Timer,this,&ASlowTurtle::Go,0.5f,false,0.5f);
}




