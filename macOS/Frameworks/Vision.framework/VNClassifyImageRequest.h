//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class VNClassificationCustomHierarchy;

@interface VNClassifyImageRequest : VNImageBasedRequest
{
}

+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
- (id)supportedImageSizeSet;
@property(nonatomic) unsigned long long imageCropAndScaleOption;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id *)arg2;
- (BOOL)defineCustomHierarchy:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) VNClassificationCustomHierarchy *customHierarchy;
@property(nonatomic) unsigned long long maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations;
- (CDUnknownBlockType)resultsSortingComparator;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (void)setRevision:(unsigned long long)arg1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id)description;
- (void)_setCustomHierarchy:(id)arg1;
- (id)_applicableDetectorAndOptions:(id *)arg1 error:(id *)arg2;

@end

