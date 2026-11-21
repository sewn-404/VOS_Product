#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VGPassiveSkillComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGPassiveSkillComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UVGPassiveSkillComponent(const FObjectInitializer& ObjectInitializer);

};

