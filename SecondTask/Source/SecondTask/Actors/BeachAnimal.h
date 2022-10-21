#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BeachAnimal.generated.h"

class ATargetPoint;
class UStaticMeshComponent;
class UAudioComponent;
class UParticleSystemComponent;

UCLASS()
class SECONDTASK_API ABeachAnimal : public APawn
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	USceneComponent* SceneComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	UStaticMeshComponent* ShellMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	UAudioComponent* CrawlingSounds;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	UAudioComponent* DivingSounds;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	UParticleSystemComponent* EggShell;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Settings")
	UParticleSystemComponent* WaterSplash;

public:
	ABeachAnimal();

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	ATargetPoint* TargetPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float MoveSpeed = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float MinimalDistance = 1.0f;

	UFUNCTION()
	void SetTargetPoint(ATargetPoint* NewTargetPoint);

protected:
	FTimerHandle SoundTimerHandle;
	FVector GetMovePosition(float DeltaTime);
	FRotator GetRotation();

	void KeepYourDistance();
	void Diving();
	void DestroyActors();

	bool bTurtleAlive = true;
};
