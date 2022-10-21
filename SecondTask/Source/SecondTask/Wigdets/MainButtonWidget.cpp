#include "MainButtonWidget.h"
#include "Components/Button.h"
#include "SecondTask/Actors/Nest.h"

void UMainButtonWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if(!Button1&&!Button2&&!Button3)return;
	
	Button1->OnPressed.AddDynamic(this,&UMainButtonWidget::Button1Clicked);
	Button2->OnPressed.AddDynamic(this,&UMainButtonWidget::Button2Clicked);
	Button3->OnPressed.AddDynamic(this,&UMainButtonWidget::Button3Clicked);
}

void UMainButtonWidget::NativeDestruct()
{
	Super::NativeDestruct();
	if(!Button1&&!Button2&&!Button3)return;

	Button1->OnPressed.RemoveAll(this);
	Button2->OnPressed.RemoveAll(this);
	Button3->OnPressed.RemoveAll(this);
}

void UMainButtonWidget::Button1Clicked()
{
	if(!Nest1)return;
	Nest1->GiveBirth();
}

void UMainButtonWidget::Button2Clicked()
{
	if(!Nest2)return;
	Nest2->GiveBirth();
}

void UMainButtonWidget::Button3Clicked()
{
	if(!Nest3)return;
	Nest3->GiveBirth();
}
