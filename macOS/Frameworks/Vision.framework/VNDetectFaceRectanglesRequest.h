//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNDetectFaceRectanglesRequest : VNImageBasedRequest
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (BOOL)supportsPrivateRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (long long)dependencyProcessingOrdinality;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

