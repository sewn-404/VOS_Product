#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGGPPreparationReservedInMainTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGGPPreparationReservedInMainTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGGPPreparationReservedInMainTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGGPPreparationReservedInMainTickFunction> : public TStructOpsTypeTraitsBase2<FVGGPPreparationReservedInMainTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

