#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "VGAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UVGAnimNotify();

};

