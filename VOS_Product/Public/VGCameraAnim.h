#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraAnim -FallbackName=CameraAnim
#include "VGCameraAnim.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCameraAnim : public UCameraAnim {
    GENERATED_BODY()
public:
    UVGCameraAnim();

};

