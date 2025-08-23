// Fill out your copyright notice in the Description page of Project Settings.


#include "Rendering/GFSPrimitiveComponent.h"
#include "Rendering/GFSPrimitiveSceneProxy.h"

FPrimitiveSceneProxy *UGFSPrimitiveComponent::CreateSceneProxy() { return new FGFSPrimitiveSceneProxy(this); }