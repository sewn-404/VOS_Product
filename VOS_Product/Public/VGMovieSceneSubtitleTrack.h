#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "VGMovieSceneSubtitleTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMovieSceneSubtitleTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> subtitle_sections;
    
public:
    UVGMovieSceneSubtitleTrack();

};

