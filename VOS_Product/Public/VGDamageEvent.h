#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "VGDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    FVGDamageEvent();
};

