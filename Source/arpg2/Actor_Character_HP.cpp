// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_Character_HP.h"

// Sets default values
AActor_Character_HP::AActor_Character_HP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_Character_HP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActor_Character_HP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

