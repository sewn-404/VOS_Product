#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VGHeroStruggleSkillSetting.h"
#include "VGHeroStruggleSkillInfoSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleSkillInfoSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSkillSetting main_weapon_skill_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSkillSetting sub_weapon_skill_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSkillSetting gadget_skill_setting;
    
    VOS_PRODUCT_API FVGHeroStruggleSkillInfoSetting();
};

