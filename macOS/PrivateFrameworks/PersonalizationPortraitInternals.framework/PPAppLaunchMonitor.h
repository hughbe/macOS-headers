//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPAppLaunchMonitor : NSObject
{
    _PASLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1;
- (void)deregisterForAppLaunchWithToken:(id)arg1;
- (id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_init;
- (id)init;

@end

