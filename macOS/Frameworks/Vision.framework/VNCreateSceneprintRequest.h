//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (BOOL)supportsPrivateRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
@property(readonly) NSArray *supportedImageSizeSet;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (BOOL)hasCancellationHook;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) unsigned long long imageCropAndScaleOption;
@property(nonatomic) BOOL useCenterTileOnly;
@property(nonatomic) BOOL returnAllResults;
@property(readonly, copy) NSString *description;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)_applicableDetectorAndReturnError:(id *)arg1;
- (id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id *)arg2 error:(id *)arg3;
- (id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

