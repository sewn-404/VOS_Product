#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "VGGameEventCollisionCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGGameEventCollisionCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UVGGameEventCollisionCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

