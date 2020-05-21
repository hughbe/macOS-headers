//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCVideoRelay : NSObject
{
    NSMutableArray *_videoCaptureClients;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;
- (BOOL)deregisterForVideoFrames:(id)arg1;
- (BOOL)registerForVideoFrames:(id)arg1;
- (BOOL)enqueueFrame:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (void)dealloc;
- (id)init;

@end

