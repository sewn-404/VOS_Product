#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "VGItemSpecialEffectUtility.generated.h"

class UVGItemSpecialEffectTable;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGItemSpecialEffectUtility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_special_effect_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGItemSpecialEffectTable* m_special_effect;
    
public:
    UVGItemSpecialEffectUtility();

};

