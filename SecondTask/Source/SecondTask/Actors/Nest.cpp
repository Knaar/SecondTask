#include "Nest.h"
#include "BeachAnimal.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SecondTask/Wigdets/MainButtonWidget.h"

ANest::ANest()
{
	PrimaryActorTick.bCanEverTick = false;

	NestMesh = CreateDefaultSubobject<UStaticMeshComponent>("Nest Mesh");
	SetRootComponent(NestMesh);

	TurtleSpawnPoint = CreateDefaultSubobject<UArrowComponent>("TurtleSpawnPoint");
	TurtleSpawnPoint->SetupAttachment(NestMesh);

	AudioTurtleBirthComponent = CreateDefaultSubobject<UAudioComponent>("AudioTurtleBirthComponent");
	AudioTurtleBirthComponent->SetAutoActivate(false);
	AudioTurtleBirthComponent->SetupAttachment(NestMesh);
}

void ANest::GiveBirth()
{
	if (!TargetToTurtleMovement)return;
	if (AudioTurtleBirthComponent)
	{
		AudioTurtleBirthComponent->Play();
	}

	UE_LOG(LogTemp, Warning, TEXT("Button1 Pressed"));
	const FTransform SpawnPlace(TurtleSpawnPoint->GetComponentRotation(), TurtleSpawnPoint->GetComponentLocation(),
	                            FVector(1));

	ABeachAnimal* newAnimal = GetWorld()->SpawnActorDeferred<ABeachAnimal>(
		SpawnTurtleClass, SpawnPlace, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	newAnimal->SetTargetPoint(TargetToTurtleMovement);
	UGameplayStatics::FinishSpawningActor(newAnimal, SpawnPlace);
}
