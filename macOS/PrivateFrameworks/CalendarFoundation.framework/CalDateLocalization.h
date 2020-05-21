//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalDateLocalization : NSObject
{
}

+ (id)intervalStringFromDate:(id)arg1 toDate:(id)arg2 withFormat:(id)arg3 options:(int)arg4;
+ (struct __CFDateFormatter *)dateFormatterForKey:(id)arg1;
+ (id)ICUFormatForKey:(id)arg1;
+ (id)dateFormatters;
+ (id)ICUFormats;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormats;
+ (void)generatePreferedOrders;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generateDerivedTimeFormats:(id)arg1;
+ (id)_hourSymbolInFormat:(id)arg1;
+ (void)generateAdditionalPrecodedFormatters:(id)arg1;
+ (void)generateStandardFormatters:(id)arg1;
+ (void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatter:(struct __CFDateFormatter *)arg1 forKey:(id)arg2;
+ (id)formatKeyForHourString;
+ (BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+ (BOOL)uses24HourTime;
+ (BOOL)hasAMPM;
+ (BOOL)weekdayIsWeekend:(long long)arg1;
+ (BOOL)dateIsWeekend:(id)arg1;
+ (id)weekendDays;
+ (id)dateFormatterForKey:(id)arg1 formatString:(id)arg2;
+ (id)calendarDayFormatter;
+ (id)sharedDateFormatter;
+ (void)rebuildWeekendDays;
+ (void)rebuildFormatters;
+ (void)initializeFormatters;

@end

