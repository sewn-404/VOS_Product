#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EVGFixedPhraseListPageType.h"
#include "VGTextSymbol.h"
#include "VGFixedPhraseListItem.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGFixedPhraseListItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGFixedPhraseListPageType page_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    FVGFixedPhraseListItem();
};

