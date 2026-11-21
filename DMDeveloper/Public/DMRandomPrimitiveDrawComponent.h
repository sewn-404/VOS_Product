#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "DMRandomPrimitiveDrawComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DMDEVELOPER_API UDMRandomPrimitiveDrawComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDMRandomPrimitiveDrawComponent(const FObjectInitializer& ObjectInitializer);

};

