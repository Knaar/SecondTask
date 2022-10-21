#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SecondTask/Wigdets/MainButtonWidget.h"
#include "Nest.generated.h"

class UArrowComponent;
class ATargetPoint;
class UAudioComponent;

UCLASS()
class SECONDTASK_API ANest : public AActor
{
	GENERATED_BODY()

public:
	ANest();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* NestMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UArrowComponent* TurtleSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	ATargetPoint* TargetToTurtleMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioTurtleBirthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TSubclassOf<class ABeachAnimal> SpawnTurtleClass;

public:
	UFUNCTION()
	void GiveBirth();
};
