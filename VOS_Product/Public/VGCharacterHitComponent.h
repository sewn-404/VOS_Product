#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "VGCharacterHitComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGCharacterHitComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UVGCharacterHitComponent(const FObjectInitializer& ObjectInitializer);

};

