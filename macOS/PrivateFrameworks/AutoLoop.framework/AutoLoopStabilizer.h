//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AutoLoop/ICFlowControl-Protocol.h>

@class AVAsset, NSArray, NSDictionary, NSString, NSURL;

@interface AutoLoopStabilizer : NSObject <ICFlowControl>
{
    _Bool drawFeaturesFlag;
    _Bool onlyProcessForHighQualityTripod;
    _Bool doLoopClosureCorrection;
    _Bool _useLimitedTime;
    _Bool _disableGPUStabilization;
    _Bool _optimizeProcessingForMemory;
    _Bool _didDrop;
    float progressValue;
    unsigned int canceledAnalysis;
    float necessaryCropGainFractionPerDroppedFrame;
    float minConfidenceForTripodAccept;
    float confidenceHighQualityThreshold;
    float minimumHighQualityConfidenceValue;
    float cropRatioMinimum;
    float alwaysAcceptedTripodCropRatio;
    float _minAllowedRemainingTripodCrop;
    int _naturalTimeScale;
    int _analysisResult;
    int _lastStabilizationResult;
    float _lastTripodQuality;
    AVAsset *movieAssetIn;
    NSURL *statsFileOutURL;
    unsigned long long frameSearchLength;
    NSString *currentStatusString;
    long long droppedStartFrameCount;
    long long droppedEndFrameCount;
    void *icCorrectionResultRef;
    NSDictionary *featuresDictionary;
    CDUnknownBlockType _statusUpdateBlock;
    NSArray *_presentationTimesOfFramesToSkip;
    NSArray *_skipFrameTimes;
    struct CGSize inputMovieDimensions;
    CDStruct_1b6d18a9 refFrameTime;
    CDStruct_1b6d18a9 _trimStart;
    CDStruct_1b6d18a9 _trimLength;
    CDStruct_1b6d18a9 _minimumFrameDuration;
    CDStruct_1b6d18a9 _maxAllowedTrimTime;
    CDStruct_1b6d18a9 _firstFrameTimeAfterDrop;
    CDStruct_1b6d18a9 _lastFrameTimeAfterDrop;
    struct CGRect cropRect;
}

- (void).cxx_destruct;
@property(readonly) float lastTripodQuality; // @synthesize lastTripodQuality=_lastTripodQuality;
@property(nonatomic) CDStruct_1b6d18a9 lastFrameTimeAfterDrop; // @synthesize lastFrameTimeAfterDrop=_lastFrameTimeAfterDrop;
@property(nonatomic) CDStruct_1b6d18a9 firstFrameTimeAfterDrop; // @synthesize firstFrameTimeAfterDrop=_firstFrameTimeAfterDrop;
@property(nonatomic) _Bool didDrop; // @synthesize didDrop=_didDrop;
@property(nonatomic) _Bool optimizeProcessingForMemory; // @synthesize optimizeProcessingForMemory=_optimizeProcessingForMemory;
@property(nonatomic) _Bool disableGPUStabilization; // @synthesize disableGPUStabilization=_disableGPUStabilization;
@property(retain, nonatomic) NSArray *skipFrameTimes; // @synthesize skipFrameTimes=_skipFrameTimes;
@property(readonly, nonatomic) int lastStabilizationResult; // @synthesize lastStabilizationResult=_lastStabilizationResult;
@property(readonly, nonatomic) int analysisResult; // @synthesize analysisResult=_analysisResult;
@property(retain) NSArray *presentationTimesOfFramesToSkip; // @synthesize presentationTimesOfFramesToSkip=_presentationTimesOfFramesToSkip;
@property(nonatomic) CDStruct_1b6d18a9 maxAllowedTrimTime; // @synthesize maxAllowedTrimTime=_maxAllowedTrimTime;
@property(nonatomic) CDStruct_1b6d18a9 minimumFrameDuration; // @synthesize minimumFrameDuration=_minimumFrameDuration;
@property(nonatomic) int naturalTimeScale; // @synthesize naturalTimeScale=_naturalTimeScale;
@property(nonatomic) CDStruct_1b6d18a9 trimLength; // @synthesize trimLength=_trimLength;
@property(nonatomic) CDStruct_1b6d18a9 trimStart; // @synthesize trimStart=_trimStart;
@property(nonatomic) _Bool useLimitedTime; // @synthesize useLimitedTime=_useLimitedTime;
@property(copy, nonatomic) CDUnknownBlockType statusUpdateBlock; // @synthesize statusUpdateBlock=_statusUpdateBlock;
@property(nonatomic) float minAllowedRemainingTripodCrop; // @synthesize minAllowedRemainingTripodCrop=_minAllowedRemainingTripodCrop;
@property(retain) NSDictionary *featuresDictionary; // @synthesize featuresDictionary;
@property _Bool doLoopClosureCorrection; // @synthesize doLoopClosureCorrection;
@property(nonatomic) float alwaysAcceptedTripodCropRatio; // @synthesize alwaysAcceptedTripodCropRatio;
@property(nonatomic) _Bool onlyProcessForHighQualityTripod; // @synthesize onlyProcessForHighQualityTripod;
@property(nonatomic) float cropRatioMinimum; // @synthesize cropRatioMinimum;
@property(nonatomic) float minimumHighQualityConfidenceValue; // @synthesize minimumHighQualityConfidenceValue;
@property(nonatomic) float confidenceHighQualityThreshold; // @synthesize confidenceHighQualityThreshold;
@property(nonatomic) float minConfidenceForTripodAccept; // @synthesize minConfidenceForTripodAccept;
@property(nonatomic) float necessaryCropGainFractionPerDroppedFrame; // @synthesize necessaryCropGainFractionPerDroppedFrame;
@property unsigned int canceledAnalysis; // @synthesize canceledAnalysis;
@property(nonatomic) CDStruct_1b6d18a9 refFrameTime; // @synthesize refFrameTime;
@property(readonly, nonatomic) struct CGSize inputMovieDimensions; // @synthesize inputMovieDimensions;
@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect;
@property(readonly, nonatomic) void *icCorrectionResultRef; // @synthesize icCorrectionResultRef;
@property(nonatomic) long long droppedEndFrameCount; // @synthesize droppedEndFrameCount;
@property(nonatomic) long long droppedStartFrameCount; // @synthesize droppedStartFrameCount;
@property(nonatomic) _Bool drawFeaturesFlag; // @synthesize drawFeaturesFlag;
@property float progressValue; // @synthesize progressValue;
@property(retain) NSString *currentStatusString; // @synthesize currentStatusString;
@property(nonatomic) unsigned long long frameSearchLength; // @synthesize frameSearchLength;
@property(retain, nonatomic) NSURL *statsFileOutURL; // @synthesize statsFileOutURL;
@property(retain, nonatomic) AVAsset *movieAssetIn; // @synthesize movieAssetIn;
- (int)processStabilizationAnalysisForCinematicL1:(void *)arg1;
- (int)processStabilizationAnalysis:(void *)arg1 forcePassThru:(_Bool)arg2 forceSmoothing:(_Bool)arg3 forceSequentialTripod:(_Bool)arg4;
- (int)FindAcceptableTripodSegmentForInput:(const void *)arg1 frameTimes:(const vector_0821a7d5 *)arg2;
- (int)analyzeForAutoloopWithDirect:(_Bool)arg1 toAnalysisOutput:(void **)arg2;
- (_Bool)ICShouldBeCanceled;
- (void)ICReportProgress:(float)arg1;
- (_Bool)updateStabilizerStatus;
- (_Bool)tripodOKWithTrimming:(const void *)arg1 frameTimes:(const vector_0821a7d5 *)arg2 minConfidence:(float)arg3;
- (_Bool)CheckForTripodOKInHomographies:(const void *)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 refIndex:(unsigned long long)arg4 cropRectOut:(struct CGRect *)arg5 minConfidence:(float)arg6 confidenceOut:(float *)arg7;
- (CDStruct_e83c9415)determinePreciseTimeRange;
- (_Bool)getNaturalTimeScaleForVideoTrackInAsset;
- (id)getVideoTrack;
- (_Bool)CropRectValid:(const struct CGRect *)arg1;
- (float)CropRatio:(const struct CGRect *)arg1;
- (CDStruct_1b6d18a9)GetPreciseReferenceTimeFromHomographies:(const vector_0821a7d5 *)arg1;
- (unsigned long long)FindFrameIndexForReferenceTimeInHomographies:(const vector_0821a7d5 *)arg1;
- (void)dealloc;
- (id)init;

@end

