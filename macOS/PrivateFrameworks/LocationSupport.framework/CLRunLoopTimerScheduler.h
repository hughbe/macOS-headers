//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLTimerScheduler-Protocol.h>

@class CLTimer, NSRunLoop, NSTimer;

@interface CLRunLoopTimerScheduler : NSObject <CLTimerScheduler>
{
    NSTimer *_underlyingTimer;
    CDUnknownBlockType _fireBlock;
    NSRunLoop *_runloop;
    CLTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(retain, nonatomic) NSTimer *underlyingTimer; // @synthesize underlyingTimer=_underlyingTimer;
@property(nonatomic) __weak CLTimer *timer; // @synthesize timer=_timer;
- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
- (void)dealloc;
- (id)initWithRunLoopSilo:(id)arg1;

@end

