#include "VGEQG_ProjectedHex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQG_ProjectedHex::UVGEQG_ProjectedHex() {
    this->QuerierContext = NULL;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->AddClosestPoint = false;
}


