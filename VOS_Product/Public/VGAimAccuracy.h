#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGAimAccuracyAction.h"
#include "VGAimAccuracyState.h"
#include "VGAimAccuracy.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAimAccuracy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAimAccuracyAction> action_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAimAccuracyState> state_params;
    
    UVGAimAccuracy();

};

