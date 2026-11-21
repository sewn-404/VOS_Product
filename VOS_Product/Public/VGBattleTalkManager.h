#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGBattleTalkItem.h"
#include "VGBattleTalkManager.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleTalkManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkItem> m_buffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGBattleCharacter*> m_speakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_last_speaker;
    
public:
    UVGBattleTalkManager();

};

