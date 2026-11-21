#include "VGEQT_DistanceDifference.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_DistanceDifference::UVGEQT_DistanceDifference() {
    this->m_distance_from = UEnvQueryContext_Querier::StaticClass();
    this->m_filter = UVGEQT_DistanceDifferenceFilter::Off;
}


