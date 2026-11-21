#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VGDetectLossConnectionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGDetectLossConnectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVGDetectLossConnectionComponent(const FObjectInitializer& ObjectInitializer);

};

