#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGRoamHUDPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGRoamHUDPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGRoamHUDPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGRoamHUDPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGRoamHUDPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

