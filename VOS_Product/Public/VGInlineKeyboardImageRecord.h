#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=InlineTextImageStyle -FallbackName=InlineTextImageStyle
#include "VGInlineKeyboardImageRecord.generated.h"

USTRUCT(BlueprintType)
struct FVGInlineKeyboardImageRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInlineTextImageStyle Style;
    
    VOS_PRODUCT_API FVGInlineKeyboardImageRecord();
};

