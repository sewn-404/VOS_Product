#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VGAfasysEmotionSetTable.generated.h"

class UVGAfasysEmotionSetAsset;

USTRUCT(BlueprintType)
struct FVGAfasysEmotionSetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysEmotionSetAsset* emotion_set;
    
    VOS_PRODUCT_API FVGAfasysEmotionSetTable();
};

