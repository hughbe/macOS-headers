/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem> {
    double  _clsAestheticScore;
    double  _clsAutoplaySuggestionScore;
    bool  _clsAvoidIfPossibleForKeyItem;
    double  _clsContentScore;
    double  _clsDuration;
    double  _clsExposureScore;
    double  _clsFaceScore;
    bool  _clsHasCustomPlaybackVariation;
    bool  _clsHasInterestingAudioClassification;
    bool  _clsHasInterestingScenes;
    bool  _clsHasPoorResolution;
    double  _clsHighlightVisibilityScore;
    NSString * _clsIdentifier;
    bool  _clsIsAestheticallyPrettyGood;
    bool  _clsIsAnInterestingHDR;
    bool  _clsIsAnInterestingPanorama;
    bool  _clsIsAnInterestingPhoto;
    bool  _clsIsAnInterestingSDOF;
    bool  _clsIsAnInterestingVideo;
    bool  _clsIsBlurry;
    bool  _clsIsInhabited;
    bool  _clsIsInterestingReframe;
    bool  _clsIsLongExposure;
    bool  _clsIsLoopOrBounce;
    bool  _clsIsNonMemorable;
    bool  _clsIsScreenshotOrScreenRecording;
    bool  _clsIsUtility;
    CLLocation * _clsLocation;
    NSArray * _clsPeopleNames;
    long long  _clsPlayCount;
    NSSet * _clsSceneClassifications;
    VNSceneprint * _clsSceneprint;
    long long  _clsShareCount;
    double  _clsSharpnessScore;
    double  _clsSquareCropScore;
    NSArray * _clsUnprefetchedPeopleNames;
    long long  _clsViewCount;
    NSDate * _cls_universalDate;
    bool  _isFavorite;
    bool  _isVideo;
}

@property (nonatomic, readonly) double clsAestheticScore;
@property (nonatomic, readonly) double clsAutoplaySuggestionScore;
@property (readonly) bool clsAvoidIfPossibleForKeyItem;
@property (nonatomic) double clsContentScore;
@property (nonatomic, readonly) double clsDuration;
@property (nonatomic, readonly) double clsExposureScore;
@property (nonatomic, readonly) double clsFaceScore;
@property (nonatomic, readonly) bool clsHasCustomPlaybackVariation;
@property (nonatomic, readonly) bool clsHasInterestingAudioClassification;
@property (readonly) bool clsHasInterestingScenes;
@property (readonly) bool clsHasPoorResolution;
@property (nonatomic, readonly) double clsHighlightVisibilityScore;
@property (nonatomic, readonly) NSString *clsIdentifier;
@property (nonatomic, readonly) bool clsIsAestheticallyPrettyGood;
@property (nonatomic, readonly) bool clsIsBlurry;
@property (readonly) bool clsIsInhabited;
@property (nonatomic, readonly) bool clsIsInterestingHDR;
@property (nonatomic, readonly) bool clsIsInterestingLivePhoto;
@property (nonatomic, readonly) bool clsIsInterestingPanorama;
@property (nonatomic, readonly) bool clsIsInterestingReframe;
@property (nonatomic, readonly) bool clsIsInterestingSDOF;
@property (nonatomic, readonly) bool clsIsInterestingVideo;
@property (nonatomic, readonly) bool clsIsLongExposure;
@property (nonatomic, readonly) bool clsIsLoopOrBounce;
@property (nonatomic, readonly) bool clsIsNonMemorable;
@property (nonatomic, readonly) bool clsIsScreenshotOrScreenRecording;
@property (nonatomic, readonly) bool clsIsUtility;
@property (nonatomic, retain) CLLocation *clsLocation;
@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, retain) NSArray *clsPeopleNames;
@property (nonatomic, readonly) long long clsPlayCount;
@property (nonatomic, copy) NSSet *clsSceneClassifications;
@property (nonatomic, readonly) VNSceneprint *clsSceneprint;
@property (nonatomic, readonly) long long clsShareCount;
@property (nonatomic, readonly) double clsSharpnessScore;
@property (nonatomic, readonly) double clsSquareCropScore;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) long long clsViewCount;
@property (nonatomic, readonly) NSDate *cls_localDate;
@property (nonatomic, readonly) NSDateComponents *cls_localDateComponents;
@property (nonatomic, retain) NSDate *cls_universalDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_date;
@property (nonatomic, readonly) double pl_gpsHorizontalAccuracy;
@property (nonatomic, readonly) NSString *pl_uuid;
@property (readonly) Class superclass;

+ (id)itemWithPeopleNames:(id)arg1 universalDate:(id)arg2 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
+ (id)itemWithUniversalDate:(id)arg1 sceneClassifications:(id)arg2;

- (void).cxx_destruct;
- (double)clsAestheticScore;
- (double)clsAutoplaySuggestionScore;
- (bool)clsAvoidIfPossibleForKeyItem;
- (double)clsContentScore;
- (double)clsDuration;
- (double)clsExposureScore;
- (double)clsFaceScore;
- (bool)clsHasCustomPlaybackVariation;
- (bool)clsHasInterestingAudioClassification;
- (bool)clsHasInterestingScenes;
- (bool)clsHasPoorResolution;
- (double)clsHighlightVisibilityScore;
- (id)clsIdentifier;
- (bool)clsIsAestheticallyPrettyGood;
- (bool)clsIsBlurry;
- (bool)clsIsInhabited;
- (bool)clsIsInterestingHDR;
- (bool)clsIsInterestingLivePhoto;
- (bool)clsIsInterestingPanorama;
- (bool)clsIsInterestingReframe;
- (bool)clsIsInterestingSDOF;
- (bool)clsIsInterestingVideo;
- (bool)clsIsLongExposure;
- (bool)clsIsLoopOrBounce;
- (bool)clsIsNonMemorable;
- (bool)clsIsScreenshotOrScreenRecording;
- (bool)clsIsUtility;
- (id)clsLocation;
- (unsigned long long)clsPeopleCount;
- (id)clsPeopleNames;
- (long long)clsPlayCount;
- (id)clsSceneClassifications;
- (id)clsSceneprint;
- (long long)clsShareCount;
- (double)clsSharpnessScore;
- (double)clsSquareCropScore;
- (id)clsUnprefetchedPeopleNames;
- (long long)clsViewCount;
- (id)cls_localDate;
- (id)cls_localDateComponents;
- (id)cls_universalDate;
- (id)init;
- (bool)isFavorite;
- (bool)isVideo;
- (id)location;
- (id)peopleNames;
- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_date;
- (double)pl_gpsHorizontalAccuracy;
- (id)pl_uuid;
- (double)scoreInContext:(id)arg1;
- (void)setClsContentScore:(double)arg1;
- (void)setClsLocation:(id)arg1;
- (void)setClsPeopleNames:(id)arg1;
- (void)setClsSceneClassifications:(id)arg1;
- (void)setCls_universalDate:(id)arg1;

@end
