// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FieldNotificationDeclaration.h"
#include "GameFramework/GameMode.h"
#include "BP_UC_GameMode.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EDirectionAxis
{
	X,
	Y,
	Z,
};

UCLASS()
class UDEMYCOURSE_API ABP_UC_GameMode : public AGameMode
{
	GENERATED_BODY()
	
	ABP_UC_GameMode();
	

	
	
};
