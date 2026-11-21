#include "VGVfxSignalActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VGVfxComponent.h"

AVGVfxSignalActor::AVGVfxSignalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_root_component = (USceneComponent*)RootComponent;
    this->m_vfx_component = CreateDefaultSubobject<UVGVfxComponent>(TEXT("vfx"));
    this->m_signal_asset = NULL;
    this->m_target_actor = NULL;
    this->m_figure_target_actor = NULL;
}


