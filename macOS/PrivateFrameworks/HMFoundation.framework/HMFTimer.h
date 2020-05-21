//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSDate, NSObject;
@protocol HMFTimerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMFTimer : HMFObject
{
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    double _timeInterval;
    long long _leeway;
    BOOL _running;
    NSDate *_fireDate;
    id <HMFTimerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _options;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property __weak id <HMFTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)__handleExpiration;
- (void)__fire;
- (void)fire;
- (void)kick;
- (void)suspend;
- (void)resume;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)setFireDate:(id)arg1;
@property(readonly, copy) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, nonatomic) unsigned long long leeway;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

