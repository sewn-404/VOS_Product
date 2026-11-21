#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EVGHeroSelectableCharacter.h"
#include "VGHeroMissionUtil.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGHeroMissionUtil : public UObject {
    GENERATED_BODY()
public:
    UVGHeroMissionUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroMissionPartyReleased(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertHeroSelectableIdToTextureIndex(EVGHeroSelectableCharacter hero_id);
    
};

