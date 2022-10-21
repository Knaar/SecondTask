#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainButtonWidget.generated.h"

class ANest;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMainButtonDelegate);

class UButton;

UCLASS()
class SECONDTASK_API UMainButtonWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	ANest* Nest1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	ANest* Nest2;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Settings")
	ANest* Nest3;
	
	UPROPERTY(meta=(BindWidget))
	UButton* Button1;

	UPROPERTY(meta=(BindWidget))
	UButton* Button2;

	UPROPERTY(meta=(BindWidget))
	UButton* Button3;

	UPROPERTY(BlueprintAssignable)
	FMainButtonDelegate MainButtonDelegate;

	UFUNCTION()
	void Button1Clicked();
	
	UFUNCTION()
	void Button2Clicked();

	UFUNCTION()
	void Button3Clicked();
	
};
