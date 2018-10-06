// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadWriteFile.generated.h"

/**
 * 
 */
UCLASS()
class VR001_API UReadWriteFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, Category = "save", meta = (KeyWords = "FileSaveString"))
			static bool FileSaveString(FString SaveTextB, FString FileNameB);

		UFUNCTION(BlueprintPure, Category = "save", meta = (KeyWords = "FileLoadString"))
			static bool FileLoadString(FString FileNameA, FString& SaveTextA);
	
	
};
