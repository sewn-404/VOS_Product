#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VGGimmickBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGimmickBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGGimmickBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void WarpTeamNPC(UObject* Context, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnTeam(UObject* Context, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void RecoveryTeam(UObject* Context, const FName& Name);
    
};

