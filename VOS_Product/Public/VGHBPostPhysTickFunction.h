#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGHBPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGHBPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGHBPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGHBPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGHBPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

