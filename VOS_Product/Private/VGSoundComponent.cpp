#include "VGSoundComponent.h"

UVGSoundComponent::UVGSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UVGSoundComponent::SetSelectorLabel(TEnumAsByte<EVGSoundAttribute::Type> Type, const FString& SelectorName, const FString& LabelName) {
}

void UVGSoundComponent::SetCueSheet(TEnumAsByte<EVGSoundAttribute::Type> Type, USoundAtomCueSheet* InCueSheet, int32 CueSheetIndex) {
}

void UVGSoundComponent::SetComponentVolume(TEnumAsByte<EVGSoundAttribute::Type> Type, float Volume) {
}

void UVGSoundComponent::OnChangeActionOwner() {
}

int32 UVGSoundComponent::AddCueSheet(TEnumAsByte<EVGSoundAttribute::Type> Type, USoundAtomCueSheet* InCueSheet) {
    return 0;
}


