// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BeccaUtil.generated.h"

/**
 * 
 */
UCLASS()
class CAVES_API UBeccaUtil : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MyFunctions")
	int HelloBlueprint();
	
};