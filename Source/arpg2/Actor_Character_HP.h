// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_Character_HP.generated.h"

UCLASS()
class ARPG2_API AActor_Character_HP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_Character_HP();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerHPCur;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerHPMax;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
