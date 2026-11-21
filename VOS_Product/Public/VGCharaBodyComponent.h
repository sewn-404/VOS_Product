#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "VGCharaBodyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGCharaBodyComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UVGCharaBodyComponent(const FObjectInitializer& ObjectInitializer);

};

