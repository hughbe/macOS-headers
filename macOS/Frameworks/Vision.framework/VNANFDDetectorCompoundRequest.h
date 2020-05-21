//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNCompoundRequest.h>

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequest : VNCompoundRequest
{
}

+ (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (Class)configurationClass;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;

@end

