#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGGameEventEntry.h"
#include "VGGameEventBlueprintBroker.generated.h"

UCLASS(Blueprintable)
class AVGGameEventBlueprintBroker : public AActor {
    GENERATED_BODY()
public:
    AVGGameEventBlueprintBroker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEventStart(const FVGGameEventEntry& Entry, bool IsExc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEventEnd(const FVGGameEventEntry& Entry, bool IsExc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorVisibilityChangeRequest(const FVGGameEventEntry& Entry, bool IsVisible);
    
};

