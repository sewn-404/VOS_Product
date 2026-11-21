#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringClassReference -FallbackName=StringClassReference
#include "VGGameEventBase.h"
#include "VGAfasysStepSequenceEvent.generated.h"

class AVGAfasysProposalAgent;
class UVGGameEventStepSequence;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAfasysStepSequenceEvent : public UVGGameEventBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_afasys_menu_step_sequence_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGGameEventStepSequence* m_afasys_menu_step_sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_afasys_step_sequence_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGGameEventStepSequence* m_afasys_step_sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_afasys_proposal_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysProposalAgent* m_afasys_proposal;
    
public:
    UVGAfasysStepSequenceEvent();

};

