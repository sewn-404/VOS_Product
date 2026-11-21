#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DonNavigationHelper.generated.h"

class ADonNavigationManager;
class UObject;

UCLASS(Blueprintable)
class DONAINAVIGATION_API UDonNavigationHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDonNavigationHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADonNavigationManager* DonNavigationManager(UObject* WorldContextObject);
    
};

