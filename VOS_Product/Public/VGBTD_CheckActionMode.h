#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "VGBTD_CheckActionMode.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckActionMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_action_mode;
    
public:
    UVGBTD_CheckActionMode();

};

