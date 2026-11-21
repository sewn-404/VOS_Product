#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EVGPadKey.h"
#include "VGPadUtil.generated.h"

class UObject;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGPadUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGPadUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasInputKeyJustReleased(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasInputKeyJustPressed(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputKeyDown(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetInputVectorKeyState(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInputAnalogKeyState(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index);
    
};

