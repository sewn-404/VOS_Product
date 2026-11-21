#include "VGEQG_PathingGrid3d.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point

UVGEQG_PathingGrid3d::UVGEQG_PathingGrid3d() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


