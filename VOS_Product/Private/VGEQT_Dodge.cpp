#include "VGEQT_Dodge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_Dodge::UVGEQT_Dodge() {
    this->m_dodge_from = UEnvQueryContext_Querier::StaticClass();
    this->m_self_actor = NULL;
}


