//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLocale.h>

@class NSCalendar;

__attribute__((visibility("hidden")))
@interface _NSDatePickerCalendarLocale : NSLocale
{
    NSLocale *_locale;
    NSCalendar *_calendar;
}

- (id)_prefs;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 calendar:(id)arg2;

@end

