//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteObject.h>

@class NSArray, NSDate;

@interface CalStoreRemoteCoreRecurrenceRule : CalStoreRemoteObject
{
    NSArray *_byDay;
    NSArray *_byMonth;
    NSArray *_byMonthDay;
    long long _count;
    int _interval;
    BOOL _isInfinite;
    NSDate *_untilDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)recurrenceRuleFromICSString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *untilDate; // @synthesize untilDate=_untilDate;
@property(nonatomic) BOOL isInfinite; // @synthesize isInfinite=_isInfinite;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray *byMonthDay; // @synthesize byMonthDay=_byMonthDay;
@property(retain, nonatomic) NSArray *byMonth; // @synthesize byMonth=_byMonth;
@property(retain, nonatomic) NSArray *byDay; // @synthesize byDay=_byDay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

