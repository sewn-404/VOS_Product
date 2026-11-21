#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkComponent -FallbackName=NavLinkComponent
#include "VGDungeonBoxNavLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGDungeonBoxNavLinkComponent : public UNavLinkComponent {
    GENERATED_BODY()
public:
    UVGDungeonBoxNavLinkComponent(const FObjectInitializer& ObjectInitializer);

};

