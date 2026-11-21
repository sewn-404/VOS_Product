#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

