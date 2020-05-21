//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKEventStatsCounterInternalProperty-Protocol.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty>
{
    _DKEventStatsCounterInternal *_internal;
}

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;
- (void).cxx_destruct;
@property(retain) _DKEventStatsCounterInternal *internal; // @synthesize internal=_internal;
- (unsigned long long)countWithTypeValue:(id)arg1;
- (void)addTimingWithStartDate:(id)arg1 endDate:(id)arg2 typeValue:(id)arg3;
- (void)addTimingWithTimeInterval:(double)arg1 typeValue:(id)arg2;
- (id)eventName;

@end

