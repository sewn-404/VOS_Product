#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "VGSoundPlayerVoiceData.h"
#include "VGTextSymbol.h"
#include "VGVoicePlayerTabData.generated.h"

USTRUCT(BlueprintType)
struct FVGVoicePlayerTabData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol tab_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool battle_member_only;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundPlayerVoiceData> voice_list;
    
    VOS_PRODUCT_API FVGVoicePlayerTabData();
};

