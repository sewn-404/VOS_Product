#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "VGDungeonRoomTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGDungeonRoomTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    VOS_PRODUCT_API FVGDungeonRoomTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVGDungeonRoomTickFunction> : public TStructOpsTypeTraitsBase2<FVGDungeonRoomTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

