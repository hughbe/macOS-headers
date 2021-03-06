//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest
{
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

+ (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (BOOL)getReferenceImageBuffer:(id *)arg1 registrationSignature:(id *)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)arg1;
- (id)cachedFloatingImageBufferReturningError:(id *)arg1;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

