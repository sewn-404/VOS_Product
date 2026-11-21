#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_TwoBoneIK -FallbackName=AnimNode_TwoBoneIK
#include "EVGIKType.h"
#include "VGAnimNode_TwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAnimNode_TwoBoneIK : public FAnimNode_TwoBoneIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGIKType::Type> Type;
    
    FVGAnimNode_TwoBoneIK();
};

