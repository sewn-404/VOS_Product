#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VGBattleRuleComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UVGBattleRuleComponentBase(const FObjectInitializer& ObjectInitializer);

};

