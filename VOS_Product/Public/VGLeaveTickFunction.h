#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGLeaveTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGLeaveTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGLeaveTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGLeaveTickFunction> : public TStructOpsTypeTraitsBase2<FVGLeaveTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

