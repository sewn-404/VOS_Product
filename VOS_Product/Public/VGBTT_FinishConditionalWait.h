#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "VGBTT_FinishConditionalWait.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_FinishConditionalWait : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_specific_finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_id;
    
public:
    UVGBTT_FinishConditionalWait();

};

