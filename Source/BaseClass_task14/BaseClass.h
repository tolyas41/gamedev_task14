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
	// Sets default values for this actor's properties
	ABaseClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UMyAmmoConfig* InstantiateObject;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "SomeFloat")
	float SomeFloatParam;

	UFUNCTION()
	void PrintSomeFloatParam();

	UPROPERTY(EditAnywhere, Category = "SubClass")
	TSubclassOf<UMyAmmoConfig> AmmoTSubClass;

	UPROPERTY(VisibleAnywhere, Category = "SubClass")
	UObject* AmmoObject;
};
