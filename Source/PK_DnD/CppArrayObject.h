// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CppQueueInterface.h"
#include "CppStackInterface.h"
#include "UObject/NoExportTypes.h"
#include "CppArrayObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class PK_DND_API UCPPArrayObject : public UObject, public ICppQueueInterface, public ICppStackInterface
{
	GENERATED_BODY()

	// Start Interface
	virtual void Enqueue_Implementation(int32 Data) override;
	virtual int32 Dequeue_Implementation() override;
	virtual void IntPush_Implementation(const int32 Data) override;
	virtual int32 IntPop_Implementation() override;
	// End Interface

public:

	UFUNCTION(BlueprintCallable)
	void Print();

	UFUNCTION(BlueprintCallable)
	int32 FibNumber(int n);

	/*
	 * Variables
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> IntArray;
};
