#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawnMovement -FallbackName=SpectatorPawnMovement
#include "VGSpectatorMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSpectatorMovementComponent : public USpectatorPawnMovement {
    GENERATED_BODY()
public:
    UVGSpectatorMovementComponent(const FObjectInitializer& ObjectInitializer);

};

