#include "Rendering/GFSPrimitiveSceneProxy.h"

FGFSPrimitiveSceneProxy::FGFSPrimitiveSceneProxy(const UPrimitiveComponent *Component)
    : FPrimitiveSceneProxy(Component)
{
}

void FGFSPrimitiveSceneProxy::GetDynamicMeshElements(
    const TArray<const FSceneView *> &Views,
    const FSceneViewFamily &ViewFamily,
    uint32 VisibilityMap,
    FMeshElementCollector &Collector
) const
{
}

FPrimitiveViewRelevance FGFSPrimitiveSceneProxy::GetViewRelevance(const FSceneView *View) const
{
    return FPrimitiveViewRelevance();
}

SIZE_T FGFSPrimitiveSceneProxy::GetTypeHash() const
{
    static size_t TypeHash = PointerHash(TEXT("FGFSPrimitiveSceneProxy"));
    return TypeHash;
}

uint32 FGFSPrimitiveSceneProxy::GetMemoryFootprint(void) const { return uint32(); }
