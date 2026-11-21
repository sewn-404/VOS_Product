#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelScriptActor -FallbackName=LevelScriptActor
#include "VGLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AVGLevelScriptActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void onSubLevelLoaded();
    
};

