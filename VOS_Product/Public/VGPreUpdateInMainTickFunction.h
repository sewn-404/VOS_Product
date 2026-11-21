#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGPreUpdateInMainTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPreUpdateInMainTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPreUpdateInMainTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPreUpdateInMainTickFunction> : public TStructOpsTypeTraitsBase2<FVGPreUpdateInMainTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

