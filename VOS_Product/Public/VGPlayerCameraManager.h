#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "VGPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AVGPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

