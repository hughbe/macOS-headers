//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SUPowerSourceMonitor : NSObject
{
    struct __CFRunLoopSource *_powerRunLoopSource;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    CDUnknownBlockType _notifyBlock;
    BOOL _isAC;
}

+ (BOOL)isSafeToAutoInstallGivenCurrentPowerSources;
+ (BOOL)isRunningOnACPower;
- (void)_stopObservingPowerSource;
- (void)_startObservingPowerSource;
- (void)_handleChangeInPowerSource;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

