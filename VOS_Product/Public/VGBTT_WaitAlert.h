#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_Wait -FallbackName=BTTask_Wait
#include "VGBTT_WaitAlert.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_WaitAlert : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UVGBTT_WaitAlert();

};

