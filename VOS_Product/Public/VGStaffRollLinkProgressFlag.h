#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VGStaffRollLinkProgressFlag.generated.h"

USTRUCT(BlueprintType)
struct FVGStaffRollLinkProgressFlag : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 check_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 enable_flag;
    
    VOS_PRODUCT_API FVGStaffRollLinkProgressFlag();
};

