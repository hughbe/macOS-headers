//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTimedEventStorePurger : NSObject
{
    BOOL _internalPurgingAllowed;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _internalTimeout;
    CDUnknownBlockType _internalCreationBlock;
    EKEventStore *_internalStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKEventStore *internalStore; // @synthesize internalStore=_internalStore;
@property(nonatomic) BOOL internalPurgingAllowed; // @synthesize internalPurgingAllowed=_internalPurgingAllowed;
@property(copy, nonatomic) CDUnknownBlockType internalCreationBlock; // @synthesize internalCreationBlock=_internalCreationBlock;
@property(nonatomic) double internalTimeout; // @synthesize internalTimeout=_internalTimeout;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_uninstallTimer;
- (void)_resetIdleTimer;
- (id)acquireCachedEventStoreOrCreate:(BOOL)arg1;
@property(nonatomic) BOOL purgingAllowed;
@property(copy, nonatomic) CDUnknownBlockType creationBlock;
@property(nonatomic) double timeout;
- (void)dealloc;
- (id)init;

@end

