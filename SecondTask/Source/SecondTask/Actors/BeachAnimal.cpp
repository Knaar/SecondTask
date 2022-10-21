#include "BeachAnimal.h"
#include "Components/AudioComponent.h"
#include "Engine/TargetPoint.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"


ABeachAnimal::ABeachAnimal()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent=CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);
	
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>("BodyMesh");
	BodyMesh->SetupAttachment(SceneComponent);

	ShellMesh=CreateDefaultSubobject<UStaticMeshComponent>("ShellMesh");
	ShellMesh->SetupAttachment(SceneComponent);

	CrawlingSounds=CreateDefaultSubobject<UAudioComponent>("CrawlingSounds");
	CrawlingSounds->SetupAttachment(SceneComponent);

	DivingSounds=CreateDefaultSubobject<UAudioComponent>("DivingSounds");
	DivingSounds->SetupAttachment(SceneComponent);
	DivingSounds->SetAutoActivate(false);

	EggShell=CreateDefaultSubobject<UParticleSystemComponent>("EggShell");
	EggShell->SetupAttachment(SceneComponent);
	EggShell->SetAutoActivate(false);

	WaterSplash=CreateDefaultSubobject<UParticleSystemComponent>("WaterSplash");
	WaterSplash->SetupAttachment(SceneComponent);
	WaterSplash->SetAutoActivate(false);
}

void ABeachAnimal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	KeepYourDistance();
}

inline void ABeachAnimal::BeginPlay()
{
	Super::BeginPlay();
	EggShell->Activate();
}

void ABeachAnimal::SetTargetPoint(ATargetPoint* NewTargetPoint)
{
	TargetPoint = NewTargetPoint;
}


FVector ABeachAnimal::GetMovePosition(float DeltaTime)
{
	return GetActorLocation() + (GetActorForwardVector() * MoveSpeed * DeltaTime);
}

FRotator ABeachAnimal::GetRotation()
{
	return UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPoint->GetActorLocation());
}

void ABeachAnimal::KeepYourDistance()
{
	if(FVector::Distance(GetActorLocation(),TargetPoint->GetActorLocation())<=MinimalDistance)
	{
		CrawlingSounds->Deactivate();
		WaterSplash->Activate();
		Diving();
	}
}

void ABeachAnimal::Diving()
{
	if(!bTurtleAlive)return;
	
	if (DivingSounds)
	{
		bTurtleAlive=false;
		DivingSounds->Activate();
		GetWorld()->GetTimerManager().SetTimer(SoundTimerHandle,this,&ABeachAnimal::DestroyActors,1.0f,false,1.0f);
	}
}

void ABeachAnimal::DestroyActors()
{
	Destroy();
}
