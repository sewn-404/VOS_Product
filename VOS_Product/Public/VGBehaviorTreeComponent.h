#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BehaviorTreeComponent -FallbackName=BehaviorTreeComponent
#include "VGBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UVGBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

};

