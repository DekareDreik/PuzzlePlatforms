// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainInterface.h"
#include "MainMenu.generated.h"


UCLASS()
class PUZZLEPLATFORMS_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetMenuInterface(IMainInterface* MenuInter);


protected:

	virtual bool Initialize() override;

private:

	UPROPERTY(meta = (BindWidget))
	class UButton* Host;

	UPROPERTY(meta = (BindWidget))
	class UButton* Connect;

	UFUNCTION()
	void HostServer();

	IMainInterface* MenuInterface;
};
