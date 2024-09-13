// Fill out your copyright notice in the Description page of Project Settings.


#include "CppNodeObject.h"

UCppNodeObject* UCppNodeObject::Node(FString Data)
{
	mData = Data;
	return this;
}
