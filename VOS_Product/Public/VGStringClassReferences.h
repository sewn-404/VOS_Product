#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringClassReference -FallbackName=StringClassReference
#include "VGStringClassReferences.generated.h"

USTRUCT(BlueprintType)
struct FVGStringClassReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStringClassReference> references;
    
    VOS_PRODUCT_API FVGStringClassReferences();
};

