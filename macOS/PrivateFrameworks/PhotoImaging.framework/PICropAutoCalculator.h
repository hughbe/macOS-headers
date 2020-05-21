//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/NUTimeBased-Protocol.h>
#import <PhotoImaging/PIFaceObservingAutoCalculator-Protocol.h>

@class NSNumber, NSString, PIFaceObservationCache;

@interface PICropAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator>
{
    BOOL _shouldPerformAutoCrop;
    BOOL _shouldPerformAutoStraighten;
    BOOL _shouldUseAutoStraightenVerticalDetector;
    BOOL _debugFilesEnabled;
    PIFaceObservationCache *_faceObservationCache;
    NSNumber *_autoStraightenVerticalAngleThreshold;
    NSNumber *_autoStraightenDominantAngleDiffThreshold;
    double _maxAutoStraighten;
    double _minAutoStraighten;
    NSString *_debugFilesPrefix;
}

+ (id)updateCropAdjustment:(id)arg1 after:(id)arg2 error:(out id *)arg3;
+ (struct CGRect)overcaptureRectForStitchedOvercaptureSize:(CDStruct_912cb5d2)arg1 overcaptureVideoComplementSize:(CDStruct_912cb5d2)arg2 primarySize:(CDStruct_912cb5d2)arg3 autoLoopStabilizedCropRect:(struct CGRect)arg4;
+ (BOOL)stitchedOvercaptureRect:(struct CGRect *)arg1 primaryRect:(struct CGRect *)arg2 forComposition:(id)arg3 error:(out id *)arg4;
- (void).cxx_destruct;
@property(copy) NSString *debugFilesPrefix; // @synthesize debugFilesPrefix=_debugFilesPrefix;
@property BOOL debugFilesEnabled; // @synthesize debugFilesEnabled=_debugFilesEnabled;
@property double minAutoStraighten; // @synthesize minAutoStraighten=_minAutoStraighten;
@property double maxAutoStraighten; // @synthesize maxAutoStraighten=_maxAutoStraighten;
@property(copy) NSNumber *autoStraightenDominantAngleDiffThreshold; // @synthesize autoStraightenDominantAngleDiffThreshold=_autoStraightenDominantAngleDiffThreshold;
@property(copy) NSNumber *autoStraightenVerticalAngleThreshold; // @synthesize autoStraightenVerticalAngleThreshold=_autoStraightenVerticalAngleThreshold;
@property BOOL shouldUseAutoStraightenVerticalDetector; // @synthesize shouldUseAutoStraightenVerticalDetector=_shouldUseAutoStraightenVerticalDetector;
@property BOOL shouldPerformAutoStraighten; // @synthesize shouldPerformAutoStraighten=_shouldPerformAutoStraighten;
@property BOOL shouldPerformAutoCrop; // @synthesize shouldPerformAutoCrop=_shouldPerformAutoCrop;
@property(retain, nonatomic) PIFaceObservationCache *faceObservationCache; // @synthesize faceObservationCache=_faceObservationCache;
- (void)submit:(CDUnknownBlockType)arg1;
- (BOOL)undoExifOrientation:(CDStruct_996ac03c *)arg1 error:(out id *)arg2;
- (id)imageProperties:(out id *)arg1;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end

