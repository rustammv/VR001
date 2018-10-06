// Fill out your copyright notice in the Description page of Project Settings.

#include "ReadWriteFile.h"

#include "Core.h"



bool UReadWriteFile::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UReadWriteFile::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}


