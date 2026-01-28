// Copyright 2026 CMVR Game Studios LLC. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "SpawnableData.generated.h"

USTRUCT(Blueprintable)
struct FSpawnableData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
    FString SoftClassRefrence;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
    FString Bounds;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
    FString Offset;

    FSpawnableData()
        : Name(TEXT("")), SoftClassRefrence(TEXT("")), Bounds()
    {
    }

    FSpawnableData(const FString& N, const FString& C, const FString& V, const FString& O)
        : Name(N)
        , SoftClassRefrence(C)
        , Bounds(V)
        , Offset(O)
    {
    }
};