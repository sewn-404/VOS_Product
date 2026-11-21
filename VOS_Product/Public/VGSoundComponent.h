#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EVGSoundAttribute.h"
#include "VGSoundComponent.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> CueSheetsSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> CueSheetsVoice;
    
public:
    UVGSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(TEnumAsByte<EVGSoundAttribute::Type> Type, const FString& SelectorName, const FString& LabelName);
    
    UFUNCTION(BlueprintCallable)
    void SetCueSheet(TEnumAsByte<EVGSoundAttribute::Type> Type, USoundAtomCueSheet* InCueSheet, int32 CueSheetIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentVolume(TEnumAsByte<EVGSoundAttribute::Type> Type, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActionOwner();
    
    UFUNCTION(BlueprintCallable)
    int32 AddCueSheet(TEnumAsByte<EVGSoundAttribute::Type> Type, USoundAtomCueSheet* InCueSheet);
    
};

