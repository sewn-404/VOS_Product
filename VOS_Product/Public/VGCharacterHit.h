#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGCharacterHitParam.h"
#include "VGCharacterHit.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterHit : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterHitParam> hit_params;
    
    UVGCharacterHit();

};

