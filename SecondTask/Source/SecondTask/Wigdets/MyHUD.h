#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"


class ANest;
UCLASS()
class SECONDTASK_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	virtual void BeginPlay() override;
protected:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	TSubclassOf<UUserWidget> UserWidget;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	UUserWidget* CurrentWidget;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	ANest* Nest;
};
