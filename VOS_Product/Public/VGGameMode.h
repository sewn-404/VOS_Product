#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "VGTransitionRequest.h"
#include "VGGameMode.generated.h"

class UWorld;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGGameMode : public AGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWorld*> m_exclusive_sublevels;
    
public:
    AVGGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestToTransit(const FVGTransitionRequest& Request);
    
};

