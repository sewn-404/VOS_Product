#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "VGCameraActor.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AVGCameraActor(const FObjectInitializer& ObjectInitializer);

};

