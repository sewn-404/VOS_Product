#include "VGEnemyGrenade.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVGEnemyGrenade::AVGEnemyGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_physical_material = NULL;
    this->m_mesh_component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->m_restitution = 0.00f;
    this->m_end_hitbox_class = NULL;
    this->m_mesh_component->SetupAttachment(RootComponent);
}


