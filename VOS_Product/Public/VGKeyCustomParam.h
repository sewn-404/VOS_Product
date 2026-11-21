#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EVGPadKey.h"
#include "VGTextSymbol.h"
#include "VGKeyCustomParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGKeyCustomParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol controll_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> game_key;
    
    FVGKeyCustomParam();
};

