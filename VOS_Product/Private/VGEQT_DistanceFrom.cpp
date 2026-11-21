#include "VGEQT_DistanceFrom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_DistanceFrom::UVGEQT_DistanceFrom() {
    this->m_distance_from = UEnvQueryContext_Querier::StaticClass();
    this->m_only_explorer = false;
}


