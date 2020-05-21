//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalDateRangeProtocol-Protocol.h>
#import <CalendarFoundation/NSCopying-Protocol.h>
#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (BOOL)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 allowSinglePointIntersection:(BOOL)arg5;
+ (BOOL)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4;
+ (BOOL)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 allowSinglePointIntersection:(BOOL)arg4;
+ (BOOL)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3;
+ (BOOL)range:(id)arg1 intersectsRange:(id)arg2 allowSinglePointIntersection:(BOOL)arg3;
+ (BOOL)range:(id)arg1 intersectsRange:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 components:(id)arg3 calendar:(id)arg4;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 duration:(double)arg3;
+ (id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 multiplier:(unsigned long long)arg3;
+ (id)rangeWithRange:(id)arg1;
+ (id)rangeWithStartDate:(id)arg1 duration:(double)arg2;
+ (id)rangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)midnightsForRangeInTimeZoneString:(id)arg1;
- (id)_calculateMidnightsInCalendar:(id)arg1;
- (id)midpoint;
- (id)briefDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subtractRange:(id)arg1;
- (id)unionRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(BOOL)arg3;
- (BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)intersectsRange:(id)arg1 allowSinglePointIntersection:(BOOL)arg2;
- (BOOL)intersectsRange:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (void)setStartDate:(id)arg1 duration:(double)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

