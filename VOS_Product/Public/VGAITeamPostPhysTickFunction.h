#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGAITeamPostPhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGAITeamPostPhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGAITeamPostPhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGAITeamPostPhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGAITeamPostPhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

