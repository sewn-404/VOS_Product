#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGPreUpdateTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPreUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPreUpdateTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPreUpdateTickFunction> : public TStructOpsTypeTraitsBase2<FVGPreUpdateTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

