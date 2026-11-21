#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "VGSaveError.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSaveError : public UUserWidget {
    GENERATED_BODY()
public:
    UVGSaveError();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSaveIconVisibility(bool b_is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSaveErrorVisibility(bool b_is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open(float seconds);
    
};

