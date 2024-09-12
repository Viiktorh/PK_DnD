// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CppStackInterface.h"
#include "UObject/NoExportTypes.h"
#include "CppStack.generated.h"

/**
 * 
 */
UCLASS()
class PK_DND_API UCppStack : public UObject, public ICppStackInterface
{
	GENERATED_BODY()

	virtual void Push_Implementation(const FString& Data) override;
	virtual FString Pop_Implementation() override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Queue")
	TArray<FString> StringBeholder;

	UFUNCTION(BlueprintCallable)
	void PrintStackBeholder();

};
