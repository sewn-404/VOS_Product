#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "VGGameplayData.h"
#include "VGPlatformOptionSettingData.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGPlatformOptionSettingData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_quality_assets;
    
public:
    UVGPlatformOptionSettingData();

};

