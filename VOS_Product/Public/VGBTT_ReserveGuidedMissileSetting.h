#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "VG_MissileTargetSetting.h"
#include "VGBTT_ReserveGuidedMissileSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_ReserveGuidedMissileSetting : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVG_MissileTargetSetting> m_missile_target_settings;
    
public:
    UVGBTT_ReserveGuidedMissileSetting();

};

