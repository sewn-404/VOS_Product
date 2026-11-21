#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGCharacterManagerBlueprintBroker.generated.h"

class AVGCharacter;

UCLASS(Blueprintable)
class AVGCharacterManagerBlueprintBroker : public AActor {
    GENERATED_BODY()
public:
    AVGCharacterManagerBlueprintBroker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterRemoved(AVGCharacter* Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterAdded(AVGCharacter* Chara);
    
};

