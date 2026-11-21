#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "VGGameplayData.h"
#include "VGCharacterData.generated.h"

class UVGCharacterParam;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGCharacterData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_setup_assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGCharacterParam*> m_character_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGCharacterParam*> m_abyss_dungeon_character_params;
    
public:
    UVGCharacterData();

};

