//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKDSystemAvailabilityMonitor : NSObject
{
    unsigned long long _availabilityState;
    NSMutableSet *_watcherWrappers;
    NSObject<OS_dispatch_queue> *_availabilityQueue;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *availabilityQueue; // @synthesize availabilityQueue=_availabilityQueue;
@property(retain, nonatomic) NSMutableSet *watcherWrappers; // @synthesize watcherWrappers=_watcherWrappers;
@property unsigned long long availabilityState; // @synthesize availabilityState=_availabilityState;
- (void)unregisterWatcher:(id)arg1;
- (void)registerWatcher:(id)arg1;
- (BOOL)_systemMayNowBeReady;
- (void)_notifyWatchersOfStateChange;
@property(readonly) BOOL systemIsAvailable;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

