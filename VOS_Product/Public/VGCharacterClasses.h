#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringClassReference -FallbackName=StringClassReference
#include "VGCharacterClasses.generated.h"

USTRUCT(BlueprintType)
struct FVGCharacterClasses {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FStringClassReference> m_reference_map;
    
public:
    VOS_PRODUCT_API FVGCharacterClasses();
};

