#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "EVGBTMovementRule.h"
#include "VGBTD_CheckMovementRule.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckMovementRule : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTMovementRule> m_rule;
    
public:
    UVGBTD_CheckMovementRule();

};

