// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

#include "Blueprint/UserWidget.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();
	CurrentWidget=CreateWidget(GetOwningPlayerController(),UserWidget);
	CurrentWidget->AddToViewport(0);

	
}

