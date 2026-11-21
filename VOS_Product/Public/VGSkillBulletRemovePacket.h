#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "VGBulletPacket.h"
#include "VGSkillBulletRemovePacket.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillBulletRemovePacket : public FVGBulletPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Location;
    
    VOS_PRODUCT_API FVGSkillBulletRemovePacket();
};

