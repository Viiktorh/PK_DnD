// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LinkedListObject.generated.h"

class UCppNodeObject;
/**
 * 
 */
UCLASS()
class PK_DND_API UCppLinkedListObject : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category ="LinkedList")
	void Append(FString Data);

	UFUNCTION(BlueprintCallable, Category = "LinkedList")
	void Prepend(FString Data);

	UFUNCTION(BlueprintCallable, Category = "LinkedList")
	void DeleteWithValue();

	UFUNCTION(BlueprintCallable, Category = "LinkedList")
	void PrintList();

	/*
	 * Variables
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LinkedList")
	TObjectPtr<UCppNodeObject> Head;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LinkedList")
	FString mData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LinkedList")
	TObjectPtr<UCppNodeObject> CurrentNode;
};
