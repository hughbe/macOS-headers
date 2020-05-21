//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences;

@interface EKCalendarPreferences : NSObject
{
    CalPreferences *_preferences;
    CalPreferences *_calPreferences;
}

+ (id)calendarPreferences;
- (void).cxx_destruct;
@property(retain) CalPreferences *calPreferences; // @synthesize calPreferences=_calPreferences;
- (void)_updateDisplayOrderForSources:(id)arg1 key:(id)arg2;
- (unsigned long long)_displayOrderForSourceWithIdentifier:(id)arg1 key:(id)arg2;
- (void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)arg1;
- (unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)arg1;
- (id)displayOrderForAccounts;
- (void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)arg1;
- (unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)arg1;
- (id)_keyForDelegateID:(id)arg1;
- (BOOL)_checkedStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 withKey:(id)arg3;
- (id)_disabledOrCollapsedItemsForDelegateID:(id)arg1 withKey:(id)arg2;
- (void)_updateStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 state:(BOOL)arg3 withKey:(id)arg4 withNotification:(id)arg5;
- (BOOL)expandedStateForTopLevelNodeWithUID:(id)arg1;
- (void)updateExpandedStateForTopLevelNodeWithUID:(id)arg1 state:(BOOL)arg2;
- (id)disabledCalendarsForMainWindow;
- (id)disabledCalendarsForDelegateWithUID:(id)arg1;
- (BOOL)checkedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2;
- (void)updateCheckedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2 state:(BOOL)arg3;
@property BOOL timeToLeaveEnabled;
@property BOOL showDeclinedEventsEnabled;
@property BOOL invitationNotificationsDisabled;
@property BOOL sharedCalendarNotificationsDisabled;
- (id)init;

@end

