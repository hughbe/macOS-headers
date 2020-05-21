//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSDateTimeCache : NSObject
{
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    BOOL _isResetting;
}

+ (id)sharedInstance;
- (id)description;
- (void)_resetAndConfigureAndPostNotification:(BOOL)arg1;
- (double)_currentAbsoluteTime;
- (struct __CFCalendar *)_copyCurrentCalendar;
- (void)_resetAndConfigure;
- (void)_resetAndConfigureIfNecessary;
- (BOOL)isWithinNextWeek:(double)arg1;
- (BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2;
- (BOOL)isWithinPrevWeek:(double)arg1;
- (BOOL)isYesterday:(double)arg1;
- (BOOL)isTomorrow:(double)arg1;
- (BOOL)_isToday:(double)arg1;
- (BOOL)isToday:(double)arg1;
- (double)nextWeek;
- (double)prevWeek;
- (double)yesterday;
- (double)tomorrow;
- (double)today;
- (void)dealloc;
- (id)init;

@end

