#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "VGBTD_CheckPlayable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckPlayable : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckPlayable();

};

