// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FarmGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FARM_API UFarmGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UFarmGameInstance(const FObjectInitializer & ObjectInitializer);

	virtual void Init();

	UFUNCTION(BlueprintCallable)
		void LoadMenu();
	
private:
	TSubclassOf<class UUserWidget> MenuClass;
};
