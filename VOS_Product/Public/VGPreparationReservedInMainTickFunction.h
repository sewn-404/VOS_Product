#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGPreparationReservedInMainTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGPreparationReservedInMainTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGPreparationReservedInMainTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGPreparationReservedInMainTickFunction> : public TStructOpsTypeTraitsBase2<FVGPreparationReservedInMainTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

