//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface VCPProtoAssetAnalysis : PBCodable <NSCopying>
{
    double _assetModificationDate;
    double _date;
    double _quality;
    unsigned long long _statsFlags;
    NSString *_assetAdjustedFingerprint;
    NSString *_assetIdentifier;
    NSString *_assetMasterFingerprint;
    unsigned int _flags;
    NSMutableArray *_imageBlurResults;
    NSMutableArray *_imageCompositionResults;
    NSMutableArray *_imageExposureResults;
    NSMutableArray *_imageFaceResults;
    NSMutableArray *_imageFeatureResults;
    NSMutableArray *_imageHumanPoseResults;
    NSMutableArray *_imageJunkResults;
    NSMutableArray *_imagePetsFaceResults;
    NSMutableArray *_imagePetsResults;
    NSMutableArray *_imageSaliencyResults;
    NSMutableArray *_imageSceneprintResults;
    NSMutableArray *_imageShotTypeResults;
    NSMutableArray *_livePhotoEffectsResults;
    NSMutableArray *_livePhotoKeyFrameResults;
    NSMutableArray *_livePhotoKeyFrameStillResults;
    NSMutableArray *_livePhotoRecommendationResults;
    NSMutableArray *_livePhotoSharpnessResults;
    NSMutableArray *_movieActivityLevelResults;
    NSMutableArray *_movieApplauseResults;
    NSMutableArray *_movieBabbleResults;
    NSMutableArray *_movieCameraMotionResults;
    NSMutableArray *_movieCheeringResults;
    NSMutableArray *_movieClassificationResults;
    NSMutableArray *_movieFaceResults;
    NSMutableArray *_movieFaceprintResults;
    NSMutableArray *_movieFeatureResults;
    NSMutableArray *_movieFineSubjectMotionResults;
    NSMutableArray *_movieHighlightResults;
    NSMutableArray *_movieHumanActionResults;
    NSMutableArray *_movieHumanPoseResults;
    NSMutableArray *_movieInterestingnessResults;
    NSMutableArray *_movieLaughterResults;
    NSMutableArray *_movieLoudnessResults;
    NSMutableArray *_movieMovingObjectResults;
    NSMutableArray *_movieMusicResults;
    NSMutableArray *_movieObstructionResults;
    NSMutableArray *_movieOrientationResults;
    NSMutableArray *_moviePetsFaceResults;
    NSMutableArray *_moviePetsResults;
    NSMutableArray *_moviePreEncodeResults;
    NSMutableArray *_movieQualityResults;
    NSMutableArray *_movieSaliencyResults;
    NSMutableArray *_movieSceneResults;
    NSMutableArray *_movieSceneprintResults;
    NSMutableArray *_movieSubjectMotionResults;
    NSMutableArray *_movieSubtleMotionResults;
    NSMutableArray *_movieSummaryResults;
    NSMutableArray *_movieUtteranceResults;
    NSMutableArray *_movieVoiceResults;
    unsigned int _types;
    unsigned int _version;
    struct {
        unsigned int quality:1;
        unsigned int statsFlags:1;
    } _has;
}

+ (Class)moviePetsFaceResultsType;
+ (Class)moviePetsResultsType;
+ (Class)movieLoudnessResultsType;
+ (Class)movieHumanActionResultsType;
+ (Class)movieLaughterResultsType;
+ (Class)movieCheeringResultsType;
+ (Class)movieBabbleResultsType;
+ (Class)movieApplauseResultsType;
+ (Class)movieHumanPoseResultsType;
+ (Class)imageHumanPoseResultsType;
+ (Class)imageExposureResultsType;
+ (Class)movieHighlightResultsType;
+ (Class)movieSummaryResultsType;
+ (Class)movieVoiceResultsType;
+ (Class)movieUtteranceResultsType;
+ (Class)movieSubtleMotionResultsType;
+ (Class)movieSubjectMotionResultsType;
+ (Class)movieSceneprintResultsType;
+ (Class)movieSceneResultsType;
+ (Class)movieSaliencyResultsType;
+ (Class)movieQualityResultsType;
+ (Class)moviePreEncodeResultsType;
+ (Class)movieOrientationResultsType;
+ (Class)movieObstructionResultsType;
+ (Class)movieMusicResultsType;
+ (Class)movieMovingObjectResultsType;
+ (Class)movieInterestingnessResultsType;
+ (Class)movieFineSubjectMotionResultsType;
+ (Class)movieFeatureResultsType;
+ (Class)movieFaceprintResultsType;
+ (Class)movieFaceResultsType;
+ (Class)movieClassificationResultsType;
+ (Class)movieCameraMotionResultsType;
+ (Class)movieActivityLevelResultsType;
+ (Class)livePhotoKeyFrameStillResultsType;
+ (Class)livePhotoKeyFrameResultsType;
+ (Class)livePhotoSharpnessResultsType;
+ (Class)livePhotoRecommendationResultsType;
+ (Class)livePhotoEffectsResultsType;
+ (Class)imageSceneprintResultsType;
+ (Class)imagePetsFaceResultsType;
+ (Class)imagePetsResultsType;
+ (Class)imageShotTypeResultsType;
+ (Class)imageSaliencyResultsType;
+ (Class)imageJunkResultsType;
+ (Class)imageFeatureResultsType;
+ (Class)imageFaceResultsType;
+ (Class)imageCompositionResultsType;
+ (Class)imageBlurResultsType;
+ (id)movieAnalysisFromLegacyDictionary:(id)arg1;
+ (id)imageAnalysisFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *moviePetsFaceResults; // @synthesize moviePetsFaceResults=_moviePetsFaceResults;
@property(retain, nonatomic) NSMutableArray *moviePetsResults; // @synthesize moviePetsResults=_moviePetsResults;
@property(retain, nonatomic) NSMutableArray *movieLoudnessResults; // @synthesize movieLoudnessResults=_movieLoudnessResults;
@property(retain, nonatomic) NSMutableArray *movieHumanActionResults; // @synthesize movieHumanActionResults=_movieHumanActionResults;
@property(retain, nonatomic) NSMutableArray *movieLaughterResults; // @synthesize movieLaughterResults=_movieLaughterResults;
@property(retain, nonatomic) NSMutableArray *movieCheeringResults; // @synthesize movieCheeringResults=_movieCheeringResults;
@property(retain, nonatomic) NSMutableArray *movieBabbleResults; // @synthesize movieBabbleResults=_movieBabbleResults;
@property(retain, nonatomic) NSMutableArray *movieApplauseResults; // @synthesize movieApplauseResults=_movieApplauseResults;
@property(retain, nonatomic) NSMutableArray *movieHumanPoseResults; // @synthesize movieHumanPoseResults=_movieHumanPoseResults;
@property(retain, nonatomic) NSMutableArray *imageHumanPoseResults; // @synthesize imageHumanPoseResults=_imageHumanPoseResults;
@property(retain, nonatomic) NSMutableArray *imageExposureResults; // @synthesize imageExposureResults=_imageExposureResults;
@property(retain, nonatomic) NSMutableArray *movieHighlightResults; // @synthesize movieHighlightResults=_movieHighlightResults;
@property(retain, nonatomic) NSMutableArray *movieSummaryResults; // @synthesize movieSummaryResults=_movieSummaryResults;
@property(retain, nonatomic) NSMutableArray *movieVoiceResults; // @synthesize movieVoiceResults=_movieVoiceResults;
@property(retain, nonatomic) NSMutableArray *movieUtteranceResults; // @synthesize movieUtteranceResults=_movieUtteranceResults;
@property(retain, nonatomic) NSMutableArray *movieSubtleMotionResults; // @synthesize movieSubtleMotionResults=_movieSubtleMotionResults;
@property(retain, nonatomic) NSMutableArray *movieSubjectMotionResults; // @synthesize movieSubjectMotionResults=_movieSubjectMotionResults;
@property(retain, nonatomic) NSMutableArray *movieSceneprintResults; // @synthesize movieSceneprintResults=_movieSceneprintResults;
@property(retain, nonatomic) NSMutableArray *movieSceneResults; // @synthesize movieSceneResults=_movieSceneResults;
@property(retain, nonatomic) NSMutableArray *movieSaliencyResults; // @synthesize movieSaliencyResults=_movieSaliencyResults;
@property(retain, nonatomic) NSMutableArray *movieQualityResults; // @synthesize movieQualityResults=_movieQualityResults;
@property(retain, nonatomic) NSMutableArray *moviePreEncodeResults; // @synthesize moviePreEncodeResults=_moviePreEncodeResults;
@property(retain, nonatomic) NSMutableArray *movieOrientationResults; // @synthesize movieOrientationResults=_movieOrientationResults;
@property(retain, nonatomic) NSMutableArray *movieObstructionResults; // @synthesize movieObstructionResults=_movieObstructionResults;
@property(retain, nonatomic) NSMutableArray *movieMusicResults; // @synthesize movieMusicResults=_movieMusicResults;
@property(retain, nonatomic) NSMutableArray *movieMovingObjectResults; // @synthesize movieMovingObjectResults=_movieMovingObjectResults;
@property(retain, nonatomic) NSMutableArray *movieInterestingnessResults; // @synthesize movieInterestingnessResults=_movieInterestingnessResults;
@property(retain, nonatomic) NSMutableArray *movieFineSubjectMotionResults; // @synthesize movieFineSubjectMotionResults=_movieFineSubjectMotionResults;
@property(retain, nonatomic) NSMutableArray *movieFeatureResults; // @synthesize movieFeatureResults=_movieFeatureResults;
@property(retain, nonatomic) NSMutableArray *movieFaceprintResults; // @synthesize movieFaceprintResults=_movieFaceprintResults;
@property(retain, nonatomic) NSMutableArray *movieFaceResults; // @synthesize movieFaceResults=_movieFaceResults;
@property(retain, nonatomic) NSMutableArray *movieClassificationResults; // @synthesize movieClassificationResults=_movieClassificationResults;
@property(retain, nonatomic) NSMutableArray *movieCameraMotionResults; // @synthesize movieCameraMotionResults=_movieCameraMotionResults;
@property(retain, nonatomic) NSMutableArray *movieActivityLevelResults; // @synthesize movieActivityLevelResults=_movieActivityLevelResults;
@property(retain, nonatomic) NSMutableArray *livePhotoKeyFrameStillResults; // @synthesize livePhotoKeyFrameStillResults=_livePhotoKeyFrameStillResults;
@property(retain, nonatomic) NSMutableArray *livePhotoKeyFrameResults; // @synthesize livePhotoKeyFrameResults=_livePhotoKeyFrameResults;
@property(retain, nonatomic) NSMutableArray *livePhotoSharpnessResults; // @synthesize livePhotoSharpnessResults=_livePhotoSharpnessResults;
@property(retain, nonatomic) NSMutableArray *livePhotoRecommendationResults; // @synthesize livePhotoRecommendationResults=_livePhotoRecommendationResults;
@property(retain, nonatomic) NSMutableArray *livePhotoEffectsResults; // @synthesize livePhotoEffectsResults=_livePhotoEffectsResults;
@property(retain, nonatomic) NSMutableArray *imageSceneprintResults; // @synthesize imageSceneprintResults=_imageSceneprintResults;
@property(retain, nonatomic) NSMutableArray *imagePetsFaceResults; // @synthesize imagePetsFaceResults=_imagePetsFaceResults;
@property(retain, nonatomic) NSMutableArray *imagePetsResults; // @synthesize imagePetsResults=_imagePetsResults;
@property(retain, nonatomic) NSMutableArray *imageShotTypeResults; // @synthesize imageShotTypeResults=_imageShotTypeResults;
@property(retain, nonatomic) NSMutableArray *imageSaliencyResults; // @synthesize imageSaliencyResults=_imageSaliencyResults;
@property(retain, nonatomic) NSMutableArray *imageJunkResults; // @synthesize imageJunkResults=_imageJunkResults;
@property(retain, nonatomic) NSMutableArray *imageFeatureResults; // @synthesize imageFeatureResults=_imageFeatureResults;
@property(retain, nonatomic) NSMutableArray *imageFaceResults; // @synthesize imageFaceResults=_imageFaceResults;
@property(retain, nonatomic) NSMutableArray *imageCompositionResults; // @synthesize imageCompositionResults=_imageCompositionResults;
@property(retain, nonatomic) NSMutableArray *imageBlurResults; // @synthesize imageBlurResults=_imageBlurResults;
@property(retain, nonatomic) NSString *assetAdjustedFingerprint; // @synthesize assetAdjustedFingerprint=_assetAdjustedFingerprint;
@property(retain, nonatomic) NSString *assetMasterFingerprint; // @synthesize assetMasterFingerprint=_assetMasterFingerprint;
@property(nonatomic) double assetModificationDate; // @synthesize assetModificationDate=_assetModificationDate;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(nonatomic) unsigned long long statsFlags; // @synthesize statsFlags=_statsFlags;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int types; // @synthesize types=_types;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)moviePetsFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePetsFaceResultsCount;
- (void)addMoviePetsFaceResults:(id)arg1;
- (void)clearMoviePetsFaceResults;
- (id)moviePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePetsResultsCount;
- (void)addMoviePetsResults:(id)arg1;
- (void)clearMoviePetsResults;
- (id)movieLoudnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieLoudnessResultsCount;
- (void)addMovieLoudnessResults:(id)arg1;
- (void)clearMovieLoudnessResults;
- (id)movieHumanActionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanActionResultsCount;
- (void)addMovieHumanActionResults:(id)arg1;
- (void)clearMovieHumanActionResults;
- (id)movieLaughterResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieLaughterResultsCount;
- (void)addMovieLaughterResults:(id)arg1;
- (void)clearMovieLaughterResults;
- (id)movieCheeringResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCheeringResultsCount;
- (void)addMovieCheeringResults:(id)arg1;
- (void)clearMovieCheeringResults;
- (id)movieBabbleResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieBabbleResultsCount;
- (void)addMovieBabbleResults:(id)arg1;
- (void)clearMovieBabbleResults;
- (id)movieApplauseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieApplauseResultsCount;
- (void)addMovieApplauseResults:(id)arg1;
- (void)clearMovieApplauseResults;
- (id)movieHumanPoseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHumanPoseResultsCount;
- (void)addMovieHumanPoseResults:(id)arg1;
- (void)clearMovieHumanPoseResults;
- (id)imageHumanPoseResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageHumanPoseResultsCount;
- (void)addImageHumanPoseResults:(id)arg1;
- (void)clearImageHumanPoseResults;
- (id)imageExposureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageExposureResultsCount;
- (void)addImageExposureResults:(id)arg1;
- (void)clearImageExposureResults;
- (id)movieHighlightResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieHighlightResultsCount;
- (void)addMovieHighlightResults:(id)arg1;
- (void)clearMovieHighlightResults;
- (id)movieSummaryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSummaryResultsCount;
- (void)addMovieSummaryResults:(id)arg1;
- (void)clearMovieSummaryResults;
- (id)movieVoiceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieVoiceResultsCount;
- (void)addMovieVoiceResults:(id)arg1;
- (void)clearMovieVoiceResults;
- (id)movieUtteranceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieUtteranceResultsCount;
- (void)addMovieUtteranceResults:(id)arg1;
- (void)clearMovieUtteranceResults;
- (id)movieSubtleMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubtleMotionResultsCount;
- (void)addMovieSubtleMotionResults:(id)arg1;
- (void)clearMovieSubtleMotionResults;
- (id)movieSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSubjectMotionResultsCount;
- (void)addMovieSubjectMotionResults:(id)arg1;
- (void)clearMovieSubjectMotionResults;
- (id)movieSceneprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneprintResultsCount;
- (void)addMovieSceneprintResults:(id)arg1;
- (void)clearMovieSceneprintResults;
- (id)movieSceneResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSceneResultsCount;
- (void)addMovieSceneResults:(id)arg1;
- (void)clearMovieSceneResults;
- (id)movieSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieSaliencyResultsCount;
- (void)addMovieSaliencyResults:(id)arg1;
- (void)clearMovieSaliencyResults;
- (id)movieQualityResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieQualityResultsCount;
- (void)addMovieQualityResults:(id)arg1;
- (void)clearMovieQualityResults;
- (id)moviePreEncodeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moviePreEncodeResultsCount;
- (void)addMoviePreEncodeResults:(id)arg1;
- (void)clearMoviePreEncodeResults;
- (id)movieOrientationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieOrientationResultsCount;
- (void)addMovieOrientationResults:(id)arg1;
- (void)clearMovieOrientationResults;
- (id)movieObstructionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieObstructionResultsCount;
- (void)addMovieObstructionResults:(id)arg1;
- (void)clearMovieObstructionResults;
- (id)movieMusicResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMusicResultsCount;
- (void)addMovieMusicResults:(id)arg1;
- (void)clearMovieMusicResults;
- (id)movieMovingObjectResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieMovingObjectResultsCount;
- (void)addMovieMovingObjectResults:(id)arg1;
- (void)clearMovieMovingObjectResults;
- (id)movieInterestingnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieInterestingnessResultsCount;
- (void)addMovieInterestingnessResults:(id)arg1;
- (void)clearMovieInterestingnessResults;
- (id)movieFineSubjectMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFineSubjectMotionResultsCount;
- (void)addMovieFineSubjectMotionResults:(id)arg1;
- (void)clearMovieFineSubjectMotionResults;
- (id)movieFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFeatureResultsCount;
- (void)addMovieFeatureResults:(id)arg1;
- (void)clearMovieFeatureResults;
- (id)movieFaceprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceprintResultsCount;
- (void)addMovieFaceprintResults:(id)arg1;
- (void)clearMovieFaceprintResults;
- (id)movieFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieFaceResultsCount;
- (void)addMovieFaceResults:(id)arg1;
- (void)clearMovieFaceResults;
- (id)movieClassificationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieClassificationResultsCount;
- (void)addMovieClassificationResults:(id)arg1;
- (void)clearMovieClassificationResults;
- (id)movieCameraMotionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieCameraMotionResultsCount;
- (void)addMovieCameraMotionResults:(id)arg1;
- (void)clearMovieCameraMotionResults;
- (id)movieActivityLevelResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)movieActivityLevelResultsCount;
- (void)addMovieActivityLevelResults:(id)arg1;
- (void)clearMovieActivityLevelResults;
- (id)livePhotoKeyFrameStillResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoKeyFrameStillResultsCount;
- (void)addLivePhotoKeyFrameStillResults:(id)arg1;
- (void)clearLivePhotoKeyFrameStillResults;
- (id)livePhotoKeyFrameResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoKeyFrameResultsCount;
- (void)addLivePhotoKeyFrameResults:(id)arg1;
- (void)clearLivePhotoKeyFrameResults;
- (id)livePhotoSharpnessResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoSharpnessResultsCount;
- (void)addLivePhotoSharpnessResults:(id)arg1;
- (void)clearLivePhotoSharpnessResults;
- (id)livePhotoRecommendationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoRecommendationResultsCount;
- (void)addLivePhotoRecommendationResults:(id)arg1;
- (void)clearLivePhotoRecommendationResults;
- (id)livePhotoEffectsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)livePhotoEffectsResultsCount;
- (void)addLivePhotoEffectsResults:(id)arg1;
- (void)clearLivePhotoEffectsResults;
- (id)imageSceneprintResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSceneprintResultsCount;
- (void)addImageSceneprintResults:(id)arg1;
- (void)clearImageSceneprintResults;
- (id)imagePetsFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsFaceResultsCount;
- (void)addImagePetsFaceResults:(id)arg1;
- (void)clearImagePetsFaceResults;
- (id)imagePetsResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imagePetsResultsCount;
- (void)addImagePetsResults:(id)arg1;
- (void)clearImagePetsResults;
- (id)imageShotTypeResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageShotTypeResultsCount;
- (void)addImageShotTypeResults:(id)arg1;
- (void)clearImageShotTypeResults;
- (id)imageSaliencyResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageSaliencyResultsCount;
- (void)addImageSaliencyResults:(id)arg1;
- (void)clearImageSaliencyResults;
- (id)imageJunkResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageJunkResultsCount;
- (void)addImageJunkResults:(id)arg1;
- (void)clearImageJunkResults;
- (id)imageFeatureResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFeatureResultsCount;
- (void)addImageFeatureResults:(id)arg1;
- (void)clearImageFeatureResults;
- (id)imageFaceResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageFaceResultsCount;
- (void)addImageFaceResults:(id)arg1;
- (void)clearImageFaceResults;
- (id)imageCompositionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageCompositionResultsCount;
- (void)addImageCompositionResults:(id)arg1;
- (void)clearImageCompositionResults;
- (id)imageBlurResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageBlurResultsCount;
- (void)addImageBlurResults:(id)arg1;
- (void)clearImageBlurResults;
@property(readonly, nonatomic) BOOL hasAssetAdjustedFingerprint;
@property(nonatomic) BOOL hasStatsFlags;
@property(nonatomic) BOOL hasQuality;
- (id)exportToLegacyDictionary;
- (BOOL)exportResultsWithPropertyKey:(id)arg1 toLegacyDictionary:(id)arg2 withKey:(id)arg3;
- (BOOL)setResults:(id)arg1 withClass:(Class)arg2 forPropertyKey:(id)arg3;
- (BOOL)setAttributesFromLegacyDictionary:(id)arg1;

@end

