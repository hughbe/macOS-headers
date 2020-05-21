//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (CalClassAdditions)
+ (id)CalDateFromBirthdayComponents:(id)arg1;
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)sharedAutoupdatingCurrentCalendar;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)CalGregorianGMTCalendar;
+ (id)CalYearlessDateThreshold;
- (id)mapDatesFromDate:(id)arg1 stepSize:(unsigned long long)arg2 range:(unsigned long long)arg3 mapBlock:(CDUnknownBlockType)arg4;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (BOOL)dateIsFirstOfYear:(id)arg1;
- (BOOL)dateIsFirstOfMonth:(id)arg1;
- (long long)daysInMonthContainingDate:(id)arg1;
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (long long)secondsInDay;
- (long long)secondsInMinute;
- (long long)minutesInHour;
- (long long)hoursInDay;
- (long long)daysInWeek;
- (long long)monthsInYearForDate:(id)arg1;
@end

