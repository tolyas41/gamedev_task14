// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClass.h"
#include "MyAmmoConfig.h"

class UMyAmmoConfig;

// Sets default values
ABaseClass::ABaseClass()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AmmoObject = CreateDefaultSubobject<UMyAmmoConfig>("UMyAmmoConfig");
}

// Called when the game starts or when spawned
void ABaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseClass::PrintSomeFloatParam()
{
	UE_LOG(LogTemp, Warning, TEXT("This is the FLOAT : %f"), SomeFloatParam);
}
