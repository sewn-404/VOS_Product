#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "VGBTT_ChangeActionMode.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_ChangeActionMode : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_action_mode;
    
public:
    UVGBTT_ChangeActionMode();

};

