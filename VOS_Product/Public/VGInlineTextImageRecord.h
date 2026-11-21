#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=InlineTextImageStyle -FallbackName=InlineTextImageStyle
#include "VGInlineTextImageRecord.generated.h"

USTRUCT(BlueprintType)
struct FVGInlineTextImageRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle style_ps4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle style_xb1;
    
    VOS_PRODUCT_API FVGInlineTextImageRecord();
};

