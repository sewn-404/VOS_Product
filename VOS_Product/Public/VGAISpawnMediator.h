#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGAISpawnMediator.generated.h"

class AVGCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAISpawnMediator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_owner;
    
public:
    AVGAISpawnMediator(const FObjectInitializer& ObjectInitializer);

};

