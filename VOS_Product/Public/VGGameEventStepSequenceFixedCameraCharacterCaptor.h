#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCapture2D -FallbackName=SceneCapture2D
#include "VGGameEventStepSequenceFixedCameraCharacterCaptor.generated.h"

class AActor;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventStepSequenceFixedCameraCharacterCaptor : public ASceneCapture2D {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_target;
    
public:
    AVGGameEventStepSequenceFixedCameraCharacterCaptor(const FObjectInitializer& ObjectInitializer);

};

