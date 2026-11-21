#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "VGGadgetPacket.h"
#include "VGGadgetKnifeSpawnPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetKnifeSpawnPacket : public FVGGadgetPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Direction;
    
    VOS_PRODUCT_API FVGGadgetKnifeSpawnPacket();
};

