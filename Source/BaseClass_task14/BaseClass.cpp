// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClass.h"
#include "MyAmmoConfig.h"

class UMyAmmoConfig;

ABaseClass::ABaseClass()
{
	PrimaryActorTick.bCanEverTick = true;
	AmmoObject = AmmoTSubClass;
}

void ABaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseClass::PrintSomeFloatParam()
{
	UE_LOG(LogTemp, Warning, TEXT("This is the FLOAT : %f"), SomeFloatParam);
}
