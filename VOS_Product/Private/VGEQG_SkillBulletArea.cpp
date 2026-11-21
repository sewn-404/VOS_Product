#include "VGEQG_SkillBulletArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Actor -FallbackName=EnvQueryItemType_Actor

UVGEQG_SkillBulletArea::UVGEQG_SkillBulletArea() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->m_search_recovery = true;
    this->m_search_buff = true;
}


