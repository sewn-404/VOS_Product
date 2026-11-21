#include "VGEQT_CheckLineOfFire.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_CheckLineOfFire::UVGEQT_CheckLineOfFire() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_check_target_to_self = false;
    this->m_self_target = UEnvQueryContext_Querier::StaticClass();
    this->m_check_target = UEnvQueryContext_Querier::StaticClass();
    this->m_time_slice_max_trace = 100;
    this->m_time_slice_num = 2;
}


