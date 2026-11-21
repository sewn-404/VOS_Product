#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGPreparationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPreparationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPreparationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPreparationTickFunction> : public TStructOpsTypeTraitsBase2<FVGPreparationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

