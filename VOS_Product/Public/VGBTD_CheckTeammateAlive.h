#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "VGBTD_CheckTeammateAlive.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckTeammateAlive : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckTeammateAlive();

};

