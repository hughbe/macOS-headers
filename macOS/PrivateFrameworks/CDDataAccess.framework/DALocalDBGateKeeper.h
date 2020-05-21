//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol DADataclassLockWatcher;

@interface DALocalDBGateKeeper : NSObject
{
    BOOL _claimedOwnershipOfEvents;
    id <DADataclassLockWatcher> _eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    NSString *_unitTestHackRunLoopMode;
}

+ (id)sharedGateKeeper;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *unitTestHackRunLoopMode; // @synthesize unitTestHackRunLoopMode=_unitTestHackRunLoopMode;
@property(retain, nonatomic) NSMutableSet *waiterIDsExpectingEventsLock; // @synthesize waiterIDsExpectingEventsLock=_waiterIDsExpectingEventsLock;
@property(retain, nonatomic) NSMutableArray *eventsWaiters; // @synthesize eventsWaiters=_eventsWaiters;
@property(retain, nonatomic) id <DADataclassLockWatcher> eventsLockHolder; // @synthesize eventsLockHolder=_eventsLockHolder;
@property(nonatomic) BOOL claimedOwnershipOfEvents; // @synthesize claimedOwnershipOfEvents=_claimedOwnershipOfEvents;
- (void)_setUnitTestHackRunLoopMode:(id)arg1;
- (id)stateString;
- (void)claimedOwnershipOfDataclasses:(long long)arg1;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(long long)arg2 moreComing:(BOOL)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)_sendAllClearNotifications;
- (void)registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerPreemptiveWaiter:(id)arg1 forDataclassLocks:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_registerWaiter:(id)arg1 forDataclassLocks:(long long)arg2 preempt:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_notifyWaitersForDataclasses:(id)arg1;
- (void)_abortWaiterForWrappers:(id)arg1;
- (BOOL)_canWakenWaiter:(id)arg1;
- (void)dealloc;
- (id)init;

@end

