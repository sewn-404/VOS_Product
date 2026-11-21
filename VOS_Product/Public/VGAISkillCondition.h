#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGAISkillSpec.h"
#include "VGAISkillCondition.generated.h"

class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAISkillCondition : public UObject {
    GENERATED_BODY()
public:
    UVGAISkillCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckExecutableToTarget(bool& executable, const UVGAIUnit* unit, const FVGAISkillSpec& spec, const UVGAIUnit* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckExecutable(bool& executable, const UVGAIUnit* unit, const FVGAISkillSpec& spec, int32& priority_offset);
    
};

