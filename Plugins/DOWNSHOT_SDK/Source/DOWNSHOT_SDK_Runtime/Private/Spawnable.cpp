// Copyright 2024 CMVR Game Studios LLC. All rights reserved.


#include "Spawnable.h"

// Sets default values
ASpawnable::ASpawnable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnable::BeginPlay()
{
	Super::BeginPlay();
	
}

int ASpawnable::GetClosestMatch(FString Name)
{
	for (int i = 0; i < Items.Num(); i++)
	{
		if (Items[i].Name.StartsWith(Name)) return i;
	}

	return -1;
}

FSpawnableData ASpawnable::GetItem(int Index)
{
	return Items[Index];
}

// Called every frame
void ASpawnable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

