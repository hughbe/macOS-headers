//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNGenerateFaceSegmentsRequest : VNImageBasedRequest <VNFaceObservationAccepting>
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) float faceBoundingBoxExpansionRatio;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputfacesThatNeedSegments:(id)arg4;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly) Class superclass;

@end

