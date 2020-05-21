//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NSDatePickerRange : NSObject
{
    NSDate *_date;
    double _timeInterval;
    BOOL _anchorOnLeft;
}

- (void)dealloc;
- (struct _NSRange)daysInMonth:(long long)arg1 year:(long long)arg2 forDatePickerCell:(id)arg3;
- (BOOL)containsMonth:(long long)arg1 year:(long long)arg2 forDatePickerCell:(id)arg3;
- (BOOL)containsDayGranularityDate:(id)arg1 forDatePickerCell:(id)arg2;
- (id)dateRangeAnchoredSelectionWithDate:(id)arg1;
- (id)dateRangeTrimmedFromNearestEndWithDate:(id)arg1;
- (id)dateRangeExtendedWithDate:(id)arg1;
- (BOOL)isAnchoredRight;
- (BOOL)isAnchoredLeft;
- (void)setAnchorRight;
- (void)setAnchorLeft;
- (id)endDate;
- (void)setTimeInterval:(double)arg1;
- (void)setDate:(id)arg1;
- (double)timeInterval;
- (id)date;
- (id)init;
- (id)initWithDatePickerRange:(id)arg1;
- (id)initWithDate:(id)arg1 timeInterval:(double)arg2;
- (id)description;

@end

