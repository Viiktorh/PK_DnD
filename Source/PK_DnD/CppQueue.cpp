// Fill out your copyright notice in the Description page of Project Settings.


#include "CppQueue.h"

#include <deque>

#include "Engine/Engine.h"

void UCppQueue::Enqueue_Implementation(int32 Data)
{
	IntBeholder.Emplace(Data);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Emerald, FString::Printf(TEXT("Enqueued: %d"), Data));

}

int32 UCppQueue::Dequeue_Implementation()
{
	int32 DequeueData = 0;
	if(!IntBeholder.IsEmpty())
	{
		DequeueData = IntBeholder[0];
		IntBeholder.RemoveAt(0);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Emerald, FString::Printf(TEXT("Dequeue: %d"), DequeueData));
	}

	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Emerald, FString::Printf(TEXT("IntBeholder is Empty")));
	return DequeueData;
}

void UCppQueue::PrintIntBeholder()
{
	for (auto& Data : IntBeholder)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Emerald, FString::Printf(TEXT("%d"), Data));

	}
}

