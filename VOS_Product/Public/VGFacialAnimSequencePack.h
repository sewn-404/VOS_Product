#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGFacialExpressionPatternEntry.h"
#include "VGFacialAnimSequencePack.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGFacialAnimSequencePack : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGFacialExpressionPatternEntry> expression_pattern_entries;
    
    UVGFacialAnimSequencePack();

};

