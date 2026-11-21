#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGTutorialScript.generated.h"

class UWorld;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTutorialScript : public UObject {
    GENERATED_BODY()
public:
    UVGTutorialScript();

protected:
    UFUNCTION(BlueprintCallable)
    void Step(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
    UFUNCTION(BlueprintCallable)
    void EndScriptPostQuote();
    
    UFUNCTION(BlueprintCallable)
    void EndScript();
    
protected:
    UFUNCTION(BlueprintCallable)
    void End();
    
};

