#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseEvent -FallbackName=AISenseEvent
#include "VGAIOpticalEvent.h"
#include "VGAISenseEvent_Optical.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGAISenseEvent_Optical : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAIOpticalEvent Event;
    
public:
    UVGAISenseEvent_Optical();

};

