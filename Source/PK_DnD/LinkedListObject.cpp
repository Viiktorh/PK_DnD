// Fill out your copyright notice in the Description page of Project Settings.


#include "LinkedListObject.h"

#include "CppNodeObject.h"


void UCppLinkedListObject::Append(FString Data)
{
	mData = Data;
	UCppNodeObject* NewNode = NewObject<UCppNodeObject>(GetTransientPackage());
	NewNode->Node(mData);

	if (IsValid(Head))
	{
		CurrentNode = Head;
		while (IsValid(CurrentNode->NextNode))
		{
			CurrentNode = CurrentNode->NextNode;
		}
		CurrentNode->NextNode = NewNode;
	}
	else
	{
		Head = NewNode;
	}
}

void UCppLinkedListObject::Prepend(FString Data)
{
	mData = Data;
	UCppNodeObject* NewNode = NewObject<UCppNodeObject>(GetTransientPackage());
	NewNode->Node(mData);

	if(IsValid(Head))
	{
		CurrentNode = Head;
	}
}

void UCppLinkedListObject::DeleteWithValue()
{
}

void UCppLinkedListObject::PrintList()
{
}

//
//FString ULinkedListObject::PrintList()
//{
//	return Data;
//}
