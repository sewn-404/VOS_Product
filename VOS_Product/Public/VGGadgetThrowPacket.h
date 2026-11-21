#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "VGGadgetThrowPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetThrowPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Direction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Delay;
    
    VOS_PRODUCT_API FVGGadgetThrowPacket();
};

