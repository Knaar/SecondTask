#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SecondTask/Wigdets/MainButtonWidget.h"
#include "Nest.generated.h"

class UArrowComponent;
class ATargetPoint;
class UAudioComponent;
class UParticleSystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMainDelegate);

UCLASS()
class SECONDTASK_API ANest : public AActor
{
	GENERATED_BODY()
	
public:	

	ANest();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* NestMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* TurtleSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	ATargetPoint *TargetToTurtleMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioTurtleBirthComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<class ABeachAnimal> SpawnTurtleClass;
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	float SpawnTurtleRate=10.0f;
	
	FTimerHandle SpawnTimer;

	FMainDelegate Delegate;
public:	

	UFUNCTION()
	void GiveBirth();

	

};
