// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

UCLASS()
class CALDERAS_API AGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:

	UPROPERTY(EditorAnywhere)
		class USceneComponent* Root;

	TSubclassOf<class Card> HtmCard;
	TSubclassOf<class Card> JscCard;
	TSubclassOf<class Card> MegCard;
	TSubclassOf<class Card> UnrCard;
	
	
};
