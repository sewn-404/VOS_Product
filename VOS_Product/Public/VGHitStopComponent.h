#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VGHitStopComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVGHitStopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVGHitStopComponent(const FObjectInitializer& ObjectInitializer);

};

