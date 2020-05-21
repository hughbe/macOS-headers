//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSEventQueue : NSObject
{
    NSMutableArray *_events;
    unsigned long long _capacity;
    struct os_unfair_lock_s _retainReleaseLock;
}

- (id)dequeueTimestamp:(double)arg1;
- (id)nextEventEqualToEvent:(id)arg1 dequeue:(BOOL)arg2;
- (void)enqueue:(id)arg1;
- (void)logEventCount;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;

@end

