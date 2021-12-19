// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

UCLASS()
class ARPG2_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float BaseTurnRate;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float BaseLookUpdate;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float HPMax;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float HPCur;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float MPCur;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		float MPMax;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool IsA;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool IsDodge;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool Invincible;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool IsMove;


	UFUNCTION(BlueprintCallable)
		void TestFun();
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
