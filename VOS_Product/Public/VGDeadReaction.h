#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGDeadReactionData.h"
#include "VGDeadReaction.generated.h"

UCLASS(Blueprintable)
class UVGDeadReaction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDeadReactionData> m_reaction;
    
public:
    UVGDeadReaction();

};

