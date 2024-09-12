// Fill out your copyright notice in the Description page of Project Settings.


#include "CppStack.h"

void UCppStack::Push_Implementation(const FString& Data)
{
	StringBeholder.Emplace(Data);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Pushed: %s"), *Data));
}

FString UCppStack::Pop_Implementation()
{
	FString PopData = "";
	if(!StringBeholder.IsEmpty())
	{
		PopData = StringBeholder.Last();
		StringBeholder.Pop();
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Popped: %s"), *PopData));
	}
	return PopData;
}

void UCppStack::PrintStackBeholder()
{
	for(auto& Data : StringBeholder)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString(Data));
	}
}
