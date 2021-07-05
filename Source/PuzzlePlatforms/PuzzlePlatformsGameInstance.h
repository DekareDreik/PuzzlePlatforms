// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MainInterface.h"
#include "PuzzlePlatformsGameInstance.generated.h"


UCLASS()
class PUZZLEPLATFORMS_API UPuzzlePlatformsGameInstance : public UGameInstance, public IMainInterface
{
	GENERATED_BODY()

public:
	UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();	

	UFUNCTION(Exec)
	void Host();

	UFUNCTION(Exec)
	void Connect(const FString& Adress);

	UFUNCTION(BlueprintCallable)
	void LoadMenu();

private:
	TSubclassOf <class UUserWidget> MenuClass;
};
