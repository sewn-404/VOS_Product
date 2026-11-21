#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGAfasysAICustomizeBattleStyle.h"
#include "VGAfasysAICustomizeRecovery.h"
#include "VGAfasysAICustomizeRescue.h"
#include "VGAfasysAIType.h"
#include "VGAfasysMenuAICustomize.h"
#include "VGAfasysAICustomizeAsset.generated.h"

UCLASS(Blueprintable)
class UVGAfasysAICustomizeAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysAIType> ai_types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysAICustomizeBattleStyle> battle_styles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysAICustomizeRecovery> recoverys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysAICustomizeRescue> rescues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuAICustomize> customizes;
    
    UVGAfasysAICustomizeAsset();

};

