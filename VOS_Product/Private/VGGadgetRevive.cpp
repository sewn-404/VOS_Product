#include "VGGadgetRevive.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AVGGadgetRevive::AVGGadgetRevive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_area_component = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Area"));
    this->m_begin_vfx = NULL;
    this->m_end_vfx = NULL;
}


