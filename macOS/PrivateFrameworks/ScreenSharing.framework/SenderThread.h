//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSObject, SSSession;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SenderThread : NSThread
{
    NSObject<OS_dispatch_semaphore> *mSuspendSemaphore;
    struct __CFRunLoop *mRunLoop;
    SSSession *mSession;
    BOOL mSuspended;
}

@property SSSession *session; // @synthesize session=mSession;
- (void)shutDown;
- (void)resume;
- (void)suspend;
- (void)main;
- (void)dealloc;
- (id)init;

@end

