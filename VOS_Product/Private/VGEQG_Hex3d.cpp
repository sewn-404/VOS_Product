#include "VGEQG_Hex3d.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point

UVGEQG_Hex3d::UVGEQG_Hex3d() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->QuerierContext = NULL;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


