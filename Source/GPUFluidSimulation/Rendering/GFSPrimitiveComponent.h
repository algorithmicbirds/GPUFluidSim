// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "GFSPrimitiveComponent.generated.h"

/**
 *
 */
UCLASS()
class GPUFLUIDSIMULATION_API UGFSPrimitiveComponent : public UPrimitiveComponent
{
    GENERATED_BODY()

public:
    virtual FPrimitiveSceneProxy *CreateSceneProxy() override;
};
