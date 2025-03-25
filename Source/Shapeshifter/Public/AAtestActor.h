// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AAtestActor.generated.h"

/**
 * 
 */
UCLASS()
class SHAPESHIFTER_API AAtestActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Hallo")
	float Hallo;

	UFUNCTION(BlueprintImplementableEvent)
	void WasGehtAb(TArray<float> Array);
};


