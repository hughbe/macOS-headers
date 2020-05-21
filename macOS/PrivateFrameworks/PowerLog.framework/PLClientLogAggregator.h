//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface PLClientLogAggregator : NSObject
{
    unsigned char _numAggregates;
    unsigned char _numAggregations;
    NSMutableDictionary *_aggregatesCache;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_source> *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(retain) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property unsigned char numAggregations; // @synthesize numAggregations=_numAggregations;
@property unsigned char numAggregates; // @synthesize numAggregates=_numAggregates;
@property(readonly) NSMutableDictionary *aggregatesCache; // @synthesize aggregatesCache=_aggregatesCache;
- (BOOL)_setEventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4 value:(id)arg5;
- (id)_eventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4;
- (void)cleanCache;
- (void)_flushToPowerLog;
- (BOOL)_isEventInputValid:(id)arg1 configuration:(id)arg2;
- (BOOL)_aggregateForClientID:(id)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4;
- (BOOL)aggregateForClientID_async:(short)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4;
- (void)_scheduleFlushTimer;
- (id)init;

@end

