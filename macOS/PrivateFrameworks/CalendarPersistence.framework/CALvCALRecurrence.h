//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALDate, NSMutableArray;

@interface CALvCALRecurrence : NSObject
{
    int _type;
    long long _interval;
    BOOL _has_duration;
    long long _duration;
    NSMutableArray *_occurrencelist;
    NSMutableArray *_daynumberlist;
    BOOL _has_monthlist;
    NSMutableArray *_monthlist;
    NSMutableArray *_daylist;
    NSMutableArray *_weekday_list;
    CALDate *_end_date;
}

- (void).cxx_destruct;
- (BOOL)decode_digits:(const char **)arg1 withResult:(long long *)arg2;
- (BOOL)decode_duration:(const char **)arg1;
- (BOOL)decode_daylist:(const char **)arg1;
- (BOOL)decode_monthlist:(const char **)arg1;
- (BOOL)decode_daynumberlist:(const char **)arg1;
- (BOOL)decode_occurrencelist:(const char **)arg1;
- (BOOL)decode_weekday_list:(const char **)arg1;
- (BOOL)decode_interval:(const char **)arg1;
- (BOOL)decode_yearly_by_day:(const char **)arg1;
- (BOOL)decode_yearly_by_month:(const char **)arg1;
- (BOOL)decode_monthly_by_day:(const char **)arg1;
- (BOOL)decode_monthly_by_pos:(const char **)arg1;
- (BOOL)decode_weekly:(const char **)arg1;
- (BOOL)decode_daily:(const char **)arg1;
- (int)type;
- (id)initWithStr:(const char *)arg1 withGlobalTz:(id)arg2;
- (id)init;

@end

