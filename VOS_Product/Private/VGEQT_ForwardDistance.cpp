#include "VGEQT_ForwardDistance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_ForwardDistance::UVGEQT_ForwardDistance() {
    this->m_distance_from = UEnvQueryContext_Querier::StaticClass();
    this->m_target_to = NULL;
}


