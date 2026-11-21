#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VGImageTagItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGImageTagItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InlineImageID;
    
    FVGImageTagItem();
};

