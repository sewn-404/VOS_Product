#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VGEmotionComponent.generated.h"

class UVGQuestRecord;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGEmotionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UVGEmotionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteRegister(UVGQuestRecord* quest);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteQuest(const UVGQuestRecord* quest);
    
};

