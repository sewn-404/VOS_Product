#include "VGEQG_SimpleHex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UVGEQG_SimpleHex::UVGEQG_SimpleHex() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->AddClosestPoint = false;
}


