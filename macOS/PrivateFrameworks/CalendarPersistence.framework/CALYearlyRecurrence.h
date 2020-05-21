//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CoreRecurrenceRule.h>

@interface CALYearlyRecurrence : CoreRecurrenceRule
{
}

- (void)appendICSStringToString:(id)arg1;
- (BOOL)isEqualToRule:(id)arg1 consideringStartDate:(id)arg2;
- (id)acceptableMoveToTimeRangeForDate:(id)arg1;
- (id)proposedRuleForMovingFrom:(id)arg1 to:(id)arg2 changes:(id)arg3;
- (BOOL)ruleMatchesDate:(id)arg1;
- (id)realOccurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(BOOL)arg3;
- (id)occurrencesOnYear:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)_fastPathDeltaComponentsWithCount:(unsigned long long)arg1;
- (unsigned long long)_recurrenceUnitsToJumpBetween:(id)arg1 rangeStart:(id)arg2 inCalendar:(id)arg3;
- (BOOL)fastPathEligible;
- (int)lastSpecifiedRulePartOrder;

@end

