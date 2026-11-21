#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "VGBreakableObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class VOS_PRODUCT_API UVGBreakableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class VOS_PRODUCT_API IVGBreakableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamaged(float Damage);
    
};

