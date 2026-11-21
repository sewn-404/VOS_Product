#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGAITeamPrePhysTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGAITeamPrePhysTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGAITeamPrePhysTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGAITeamPrePhysTickFunction> : public TStructOpsTypeTraitsBase2<FVGAITeamPrePhysTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

