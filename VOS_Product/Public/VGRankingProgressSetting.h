#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VGRankingProgressSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGRankingProgressSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_flag_index;
    
    VOS_PRODUCT_API FVGRankingProgressSetting();
};

