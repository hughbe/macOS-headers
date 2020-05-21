//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource
{
    NSString *_title;
    NSString *_externalID;
    BOOL _predictable;
}

- (void).cxx_destruct;
- (void)updateActivity:(id)arg1;
- (id)remindersListFromStore:(id)arg1;
- (BOOL)_isMatchForRemindersList:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRemindersList:(id)arg1;
- (id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2;

@end

