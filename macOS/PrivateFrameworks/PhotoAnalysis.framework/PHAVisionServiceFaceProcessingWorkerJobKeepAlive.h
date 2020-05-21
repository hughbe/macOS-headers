//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAWorkerJob;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceFaceProcessingWorkerJobKeepAlive : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PHAWorkerJob *_job;
    BOOL _continueReporting;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)_extendTimeoutAndDispatchAgainIfNecessary;
- (id)job;
- (id)initWithJob:(id)arg1;

@end

