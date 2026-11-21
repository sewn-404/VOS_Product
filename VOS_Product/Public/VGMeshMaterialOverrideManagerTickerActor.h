#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGMeshMaterialOverrideManagerTickerActor.generated.h"

class UVGMeshMaterialOverrideManagerTicker;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMeshMaterialOverrideManagerTickerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGMeshMaterialOverrideManagerTicker* m_ticker;
    
public:
    AVGMeshMaterialOverrideManagerTickerActor(const FObjectInitializer& ObjectInitializer);

};

