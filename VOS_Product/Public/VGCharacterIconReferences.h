#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "VGCharacterIconReferences.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterIconReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> references;
    
    FVGCharacterIconReferences();
};

