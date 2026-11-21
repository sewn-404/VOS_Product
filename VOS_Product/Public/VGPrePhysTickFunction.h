#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGPrePhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPrePhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPrePhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPrePhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGPrePhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

