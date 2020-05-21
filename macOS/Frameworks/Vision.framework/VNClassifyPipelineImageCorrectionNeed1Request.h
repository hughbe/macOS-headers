//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VNClassifyPipelineImageCorrectionNeed1Request : VNImageBasedRequest <VNImageIdealImageSizeProviding>
{
}

@property(readonly) NSArray *supportedImageSizeSet;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id)_applicableDetectorAndGetConfigurationOptions:(id *)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

