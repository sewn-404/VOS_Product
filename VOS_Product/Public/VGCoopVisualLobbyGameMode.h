#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringClassReference -FallbackName=StringClassReference
#include "VGVisualLobbyGameMode.h"
#include "VGCoopVisualLobbyGameMode.generated.h"

class ANavigationData;
class UBehaviorTree;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class AVGCoopVisualLobbyGameMode : public AVGVisualLobbyGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_pawn_class_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_pawn_class;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_behavior_tree_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_behavior_tree;
    
public:
    AVGCoopVisualLobbyGameMode(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void onNavigationGenerationFinished(ANavigationData* NavData);
    
};

