#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGSkillFlag.h"
#include "VGSkillParam.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGSkillParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillFlag> m_skill_flags;
    
public:
    UVGSkillParam();

};

