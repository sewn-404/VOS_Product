#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VGWireInteractionInterface.generated.h"

UINTERFACE(Blueprintable)
class VOS_PRODUCT_API UVGWireInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class VOS_PRODUCT_API IVGWireInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWireHit();
    
};

