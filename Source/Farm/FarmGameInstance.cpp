// Fill out your copyright notice in the Description page of Project Settings.

#include "FarmGameInstance.h"

#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

UFarmGameInstance::UFarmGameInstance(const FObjectInitializer & ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/MenuSystem/WBP_MainMenu"));
	if (MenuBPClass.Class != NULL)
	{
		MenuClass = MenuBPClass.Class;
	}
}

void UFarmGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Found class %s"), *MenuClass->GetName());
}

void UFarmGameInstance::LoadMenu()
{
	if (!ensure(MenuClass != nullptr)) return;

	UUserWidget* Menu = CreateWidget<UUserWidget>(this, MenuClass);

	if (!ensure(Menu != nullptr)) return;

	Menu->AddToViewport();
}


