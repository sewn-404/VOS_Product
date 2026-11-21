#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "VGBTD_AfasysEmotionWait.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_AfasysEmotionWait : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float threshold_time;
    
public:
    UVGBTD_AfasysEmotionWait();

};

