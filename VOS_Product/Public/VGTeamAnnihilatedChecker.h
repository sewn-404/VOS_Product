#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGTeamAnnihilatedChecker.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTeamAnnihilatedChecker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_annihilated_team_name;
    
public:
    AVGTeamAnnihilatedChecker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamAnnihilatedEvent(const FName& Name);
    
};

