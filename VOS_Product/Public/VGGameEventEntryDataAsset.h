#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGGameEventEntry.h"
#include "VGGameEventEntryDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGameEventEntryDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventEntry> event_entries;
    
    UVGGameEventEntryDataAsset();

};

