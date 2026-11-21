#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENetSocketEventID.h"
#include "NetSocketEvent.generated.h"

class UNetMessage;
class UNetSocketEvent;

UCLASS(Blueprintable)
class UNetSocketEvent : public UObject {
    GENERATED_BODY()
public:
    UNetSocketEvent();

    UFUNCTION(BlueprintCallable)
    ENetSocketEventID GetEventId();
    
    UFUNCTION(BlueprintCallable)
    UNetMessage* GetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNetSocketEvent* Create(UObject* WorldContextObject);
    
};

