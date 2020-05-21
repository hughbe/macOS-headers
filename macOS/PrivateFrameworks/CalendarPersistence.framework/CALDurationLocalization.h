//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CALDurationLocalization : NSObject
{
}

+ (id)_localizedStringWithTimeString:(id)arg1 rawDuration:(double)arg2 options:(unsigned long long)arg3;
+ (id)_stringWithDurations:(id)arg1 timeUnits:(id)arg2;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(BOOL)arg4 dayDuration:(id *)arg5 hourDuration:(id *)arg6 minuteDuration:(id *)arg7 secondDuration:(id *)arg8 abbreviate:(BOOL)arg9;
+ (void)_calculateDurations:(id)arg1 timeUnits:(id)arg2 forDuration:(double)arg3 allDay:(BOOL)arg4 abbreviate:(BOOL)arg5;
+ (id)_localizedTimeStringForAllDayEventDuration:(double)arg1 includeAlert:(BOOL)arg2;
+ (id)_localizedTimeStringForTimedEventDuration:(double)arg1 abbreviate:(BOOL)arg2;
+ (id)localizedStringForDuration:(id)arg1 withOptions:(unsigned long long)arg2;

@end

