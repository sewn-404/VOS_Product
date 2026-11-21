#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "VGGadgetPacket.h"
#include "VGGadgetKnifeRemovePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetKnifeRemovePacket : public FVGGadgetPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    VOS_PRODUCT_API FVGGadgetKnifeRemovePacket();
};

