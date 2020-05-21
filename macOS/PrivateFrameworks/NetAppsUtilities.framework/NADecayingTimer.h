//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

@interface NADecayingTimer : NSObject
{
    NSDate *_referenceDate;
    unsigned long long _minimumUnit;
    CDUnknownBlockType _block;
    NSTimer *_timer;
}

+ (id)scheduledTimerWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) unsigned long long minimumUnit; // @synthesize minimumUnit=_minimumUnit;
@property(readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1;
- (void)_timerEvent;
- (void)_scheduleNextTimer;
- (id)_nextFireDate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;

@end

