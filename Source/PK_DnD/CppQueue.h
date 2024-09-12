// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CppQueueInterface.h"
#include "UObject/NoExportTypes.h"
#include "CppQueue.generated.h"

/**
 * 
 */
UCLASS()
class PK_DND_API UCppQueue : public UObject, public ICppQueueInterface
{
	GENERATED_BODY()


public:

	//CppQueueInterface Begin
	virtual void Enqueue_Implementation(int32 Data) override;

	virtual int32 Dequeue_Implementation() override;
	//CppQueueInterface End

	/*
	 * Variable
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Queue")
	TArray<int32> IntBeholder;

	UFUNCTION(BlueprintCallable)
	void PrintIntBeholder();
};
