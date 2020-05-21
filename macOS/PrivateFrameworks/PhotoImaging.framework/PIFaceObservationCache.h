//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NUFaceDetectionResult, OS_dispatch_group, OS_dispatch_queue;

@interface PIFaceObservationCache : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    id <NUFaceDetectionResult> _result;
}

+ (id)faceRequestWithRequest:(id)arg1;
- (void).cxx_destruct;
- (id)submitSynchronous:(id)arg1 error:(out id *)arg2;
- (void)submit:(id)arg1 response:(CDUnknownBlockType)arg2;
- (id)init;

@end

