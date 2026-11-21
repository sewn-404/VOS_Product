#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
#include "VGWorldSettings.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    AVGWorldSettings(const FObjectInitializer& ObjectInitializer);

};

