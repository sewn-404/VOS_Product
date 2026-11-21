#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGSkillSlot.h"
#include "VGSkillLayer.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSkillLayer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGSkillSlot> m_layer;
    
public:
    UVGSkillLayer();

};

