// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseClass.generated.h"

class UMyAmmoConfig;
UCLASS()
class BASECLASS_TASK14_API ABaseClass : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseClass();

protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "SomeFloat")
	float SomeFloatParam;

	UFUNCTION()
	void PrintSomeFloatParam();

	UPROPERTY(EditAnywhere, Category = "SubClass")
	TSubclassOf<UMyAmmoConfig> AmmoTSubClass;

	UPROPERTY(EditAnywhere, Category = "SubClass")
	UObject* AmmoObject;
};
