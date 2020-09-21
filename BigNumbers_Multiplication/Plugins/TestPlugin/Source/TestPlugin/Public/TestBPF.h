// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <vector>
#include "TestBPF.generated.h"

using namespace std;

/**
 * 
 */
UCLASS()
class TESTPLUGIN_API UTestBPF : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
		static FString Calc(FString InDataA, FString InDataB);

	static void CalcInVector(const std::vector<int> &va, const std::vector<int> &vb, std::vector<int> &result);	
};