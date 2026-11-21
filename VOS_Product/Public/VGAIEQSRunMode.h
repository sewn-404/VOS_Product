#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvQueryRunMode -FallbackName=EEnvQueryRunMode
#include "EVGAIEQSCategory.h"
#include "VGAIEQSRunMode.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIEQSRunMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAIEQSCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> run_mode;
    
    FVGAIEQSRunMode();
};

