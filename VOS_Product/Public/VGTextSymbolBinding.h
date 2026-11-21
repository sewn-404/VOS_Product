#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PropertyBinding -FallbackName=PropertyBinding
#include "VGTextSymbol.h"
#include "VGTextSymbolBinding.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTextSymbolBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UVGTextSymbolBinding();

    UFUNCTION(BlueprintCallable)
    FVGTextSymbol GetSymbolValue() const;
    
};

