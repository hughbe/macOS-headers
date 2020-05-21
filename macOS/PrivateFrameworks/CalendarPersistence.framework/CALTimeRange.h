//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/NSSecureCoding-Protocol.h>

@class CALDate, CALDuration;

@interface CALTimeRange : NSObject <NSSecureCoding>
{
    CALDate *_startDate;
    CALDate *_endDate;
    CALDuration *_duration;
}

+ (id)simplifyOverlappingTimeRanges:(id)arg1;
+ (id)timeRangeUnbounded;
+ (id)timeRangeFromTimeRange:(id)arg1 withShift:(id)arg2;
+ (id)timeRangeUnboundedWithEndDate:(id)arg1;
+ (id)timeRangeUnboundedWithStartDate:(id)arg1;
+ (id)timeRangeFromTimeRangeRoundedToFullDays:(id)arg1;
+ (id)timeRangeWithStartDate:(id)arg1 withEndDate:(id)arg2;
+ (id)timeRangeWithStartDate:(id)arg1 withDuration:(id)arg2;
+ (id)timeRangeForDayEnglobing:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)timeRangeForRecurrencesFromDate:(id)arg1;
- (void).cxx_destruct;
- (id)minus:(id)arg1;
- (id)intersection:(id)arg1;
- (id)union:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareStartDate:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)strictlyIncludesTimeRange:(id)arg1;
- (BOOL)includesOrEqualsTimeRange:(id)arg1;
- (BOOL)intersectsTimeRangeExcludingBounds:(id)arg1;
- (BOOL)intersectsTimeRangeExcludingUpperBound:(id)arg1;
- (BOOL)intersectsTimeRange:(id)arg1;
- (BOOL)includesDateExcludingEndDate:(id)arg1;
- (BOOL)includesDateExcludingBounds:(id)arg1;
- (BOOL)includesDate:(id)arg1;
- (BOOL)isZeroDuration;
- (BOOL)isInfinite;
- (id)duration;
- (id)endDate;
- (id)startDate;
- (id)initAsUnbounded;
- (id)initFromTimeRange:(id)arg1 withShift:(id)arg2;
- (id)initUnboundedWithEndDate:(id)arg1;
- (id)initUnboundedWithStartDate:(id)arg1;
- (id)initWithStartDate:(id)arg1 withEndDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 withDuration:(id)arg2;
- (id)initForDayEnglobing:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

