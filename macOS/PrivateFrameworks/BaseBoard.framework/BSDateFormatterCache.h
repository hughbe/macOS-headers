//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponentsFormatter, NSDateFormatter, NSNumberFormatter;

@interface BSDateFormatterCache : NSObject
{
    NSDateFormatter *_dayOfWeekFormatter;
    NSDateFormatter *_dayOfWeekWithTimeFormatter;
    NSDateFormatter *_dayMonthYearFormatter;
    NSDateFormatter *_shortDayMonthFormatter;
    NSDateFormatter *_shortDayMonthTimeFormatter;
    NSDateFormatter *_abbrevDayOfWeekWithMonthDayFormatter;
    NSDateFormatter *_abbrevDayMonthFormatter;
    NSDateFormatter *_abbrevDayMonthTimeFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_relativeDateTimeFormatter;
    NSDateFormatter *_relativeDateFormatter;
    NSDateFormatter *_dayOfWeekMonthDayFormatter;
    NSDateFormatter *_multiLineDayOfWeekMonthDayFormatter;
    NSDateFormatter *_timeNoAMPMFormatter;
    NSDateFormatter *_longYMDHMSZFormatter;
    NSDateFormatter *_longYMDHMSZPosixLocaleFormatter;
    NSDateFormatter *_longYMDHMSNoSpaceFormatter;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_timerNumberFormatter;
    NSDateComponentsFormatter *_abbreviatedTimerFormatter;
    NSDateComponentsFormatter *_alarmSnoozeFormatter;
}

+ (id)formatterForDateAsTimeNoAMPMWithLocale:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)multiLineDayOfWeekMonthDayFormatForLocale:(id)arg1;
- (BOOL)supportsMultiLineDayOfWeekMonthDayStyle;
- (id)formatAlarmSnoozeDuration:(double)arg1;
- (id)formatAbbreviatedTimerDuration:(double)arg1;
- (id)formatTimerDuration:(double)arg1;
- (id)formatDateAsRelativeDateStyle:(id)arg1;
- (BOOL)_shouldShowHoursForTimerDuration:(double)arg1;
- (id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg1;
- (id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)arg1;
- (id)formatDateAsLongYMDHMSZWithDate:(id)arg1;
- (id)formatDateAsTimeNoAMPM:(id)arg1;
- (id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsRelativeDateAndTimeStyle:(id)arg1;
- (id)formatDateAsTimeStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayMonthStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayOfWeekMonthDayStyle:(id)arg1;
- (id)formatDateAsShortDayMonthWithTimeStyle:(id)arg1;
- (id)formatDateAsDayMonthYearStyle:(id)arg1;
- (id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg1;
- (id)formatDateAsDayOfWeek:(id)arg1;
- (id)formatNumberAsDecimal:(id)arg1;
- (void)resetFormatters:(id)arg1;
- (void)resetFormattersIfNecessary;
- (void)_resetFormatters;
- (void)dealloc;
- (id)init;

@end

