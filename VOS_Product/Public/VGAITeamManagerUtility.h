#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGAITeamManagerUtility.generated.h"

class AVGAISpawner;
class AVGAITeam;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAITeamManagerUtility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGAITeam*> m_add_team_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGAISpawner*> m_add_spawner_list;
    
public:
    UVGAITeamManagerUtility();

};

