#include "VGEQT_CheckFrustum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQT_CheckFrustum::UVGEQT_CheckFrustum() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->m_camera_actor = UEnvQueryContext_Querier::StaticClass();
    this->m_self_actor = UEnvQueryContext_Querier::StaticClass();
}


