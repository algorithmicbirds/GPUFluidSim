#pragma once

#include "PrimitiveSceneProxy.h"

class FGFSPrimitiveSceneProxy : public FPrimitiveSceneProxy
{
public:
    FGFSPrimitiveSceneProxy(const UPrimitiveComponent *Component);
    virtual void GetDynamicMeshElements(
        const TArray<const FSceneView *> &Views,
        const FSceneViewFamily &ViewFamily,
        uint32 VisibilityMap,
        class FMeshElementCollector &Collector
    ) const override;

    virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView *View) const override;
    virtual SIZE_T GetTypeHash() const override;
    virtual uint32 GetMemoryFootprint(void) const override;
};