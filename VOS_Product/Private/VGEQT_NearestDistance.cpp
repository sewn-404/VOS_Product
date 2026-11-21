#include "VGEQT_NearestDistance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_NearestDistance::UVGEQT_NearestDistance() {
    this->m_move_from = UEnvQueryContext_Querier::StaticClass();
    this->m_distance_to = UEnvQueryContext_Querier::StaticClass();
    this->m_self_radius = false;
    this->m_target_radius = false;
}


