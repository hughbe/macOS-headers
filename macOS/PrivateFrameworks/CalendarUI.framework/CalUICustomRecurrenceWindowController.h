//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CalUIPopupWindowState, CalUIVoiceOverFriendlyMatrix, EKCalendarItem, NSButton, NSMutableArray, NSPopUpButton, NSStackView, NSTabView, NSTextField, NSView, NSWindow;

@interface CalUICustomRecurrenceWindowController : NSWindowController
{
    NSView *_parentView;
    NSView *_containerView;
    EKCalendarItem *_calendarItem;
    NSWindow *_customRepeatPanel;
    NSPopUpButton *_recurrenceFrequency;
    NSTabView *_recurrenceTabView;
    NSTextField *_dailyRecurrenceInterval;
    NSTextField *_weeklyRecurrenceInterval;
    CalUIVoiceOverFriendlyMatrix *_weeklyDaySelectionMatrix;
    NSTextField *_monthlyRecurrenceInterval;
    CalUIVoiceOverFriendlyMatrix *_monthlyRuleMatrix;
    CalUIVoiceOverFriendlyMatrix *_monthlyDayMatrix;
    NSPopUpButton *_monthlyWeekNumber;
    NSPopUpButton *_monthlyDayNumber;
    NSStackView *_monthlyWeekDayNumberStackView;
    NSTextField *_yearlyRecurrenceInterval;
    CalUIVoiceOverFriendlyMatrix *_yearlyMonthMatrix;
    NSButton *_yearlyByDaySwitch;
    NSPopUpButton *_yearlyWeekNumber;
    NSPopUpButton *_yearlyDayNumber;
    NSStackView *_yearlyWeekDayNumberStackView;
    NSMutableArray *_tabHeights;
    long long _firstDayOfWeek;
    CalUIPopupWindowState *_windowState;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) CalUIPopupWindowState *windowState; // @synthesize windowState=_windowState;
@property long long firstDayOfWeek; // @synthesize firstDayOfWeek=_firstDayOfWeek;
@property(retain) NSMutableArray *tabHeights; // @synthesize tabHeights=_tabHeights;
@property __weak NSStackView *yearlyWeekDayNumberStackView; // @synthesize yearlyWeekDayNumberStackView=_yearlyWeekDayNumberStackView;
@property __weak NSPopUpButton *yearlyDayNumber; // @synthesize yearlyDayNumber=_yearlyDayNumber;
@property __weak NSPopUpButton *yearlyWeekNumber; // @synthesize yearlyWeekNumber=_yearlyWeekNumber;
@property __weak NSButton *yearlyByDaySwitch; // @synthesize yearlyByDaySwitch=_yearlyByDaySwitch;
@property __weak CalUIVoiceOverFriendlyMatrix *yearlyMonthMatrix; // @synthesize yearlyMonthMatrix=_yearlyMonthMatrix;
@property __weak NSTextField *yearlyRecurrenceInterval; // @synthesize yearlyRecurrenceInterval=_yearlyRecurrenceInterval;
@property __weak NSStackView *monthlyWeekDayNumberStackView; // @synthesize monthlyWeekDayNumberStackView=_monthlyWeekDayNumberStackView;
@property __weak NSPopUpButton *monthlyDayNumber; // @synthesize monthlyDayNumber=_monthlyDayNumber;
@property __weak NSPopUpButton *monthlyWeekNumber; // @synthesize monthlyWeekNumber=_monthlyWeekNumber;
@property __weak CalUIVoiceOverFriendlyMatrix *monthlyDayMatrix; // @synthesize monthlyDayMatrix=_monthlyDayMatrix;
@property __weak CalUIVoiceOverFriendlyMatrix *monthlyRuleMatrix; // @synthesize monthlyRuleMatrix=_monthlyRuleMatrix;
@property __weak NSTextField *monthlyRecurrenceInterval; // @synthesize monthlyRecurrenceInterval=_monthlyRecurrenceInterval;
@property __weak CalUIVoiceOverFriendlyMatrix *weeklyDaySelectionMatrix; // @synthesize weeklyDaySelectionMatrix=_weeklyDaySelectionMatrix;
@property __weak NSTextField *weeklyRecurrenceInterval; // @synthesize weeklyRecurrenceInterval=_weeklyRecurrenceInterval;
@property __weak NSTextField *dailyRecurrenceInterval; // @synthesize dailyRecurrenceInterval=_dailyRecurrenceInterval;
@property __weak NSTabView *recurrenceTabView; // @synthesize recurrenceTabView=_recurrenceTabView;
@property __weak NSPopUpButton *recurrenceFrequency; // @synthesize recurrenceFrequency=_recurrenceFrequency;
@property(retain) NSWindow *customRepeatPanel; // @synthesize customRepeatPanel=_customRepeatPanel;
@property __weak EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
- (BOOL)isCustomRecurrenceValid;
- (void)setOptionsEnabling;
- (void)switchToPaneAtIndex:(long long)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)yearlyMatrixClicked:(id)arg1;
- (void)yearlyByDayChanged:(id)arg1;
- (void)monthlyMatrixClicked:(id)arg1;
- (void)monthlyRuleChanged:(id)arg1;
- (void)weeklyMatrixClicked:(id)arg1;
- (void)frequencyChanged:(id)arg1;
- (long long)_intervalValueWithState:(id)arg1;
- (id)_setPositionsWithState:(id)arg1;
- (id)_selectedMonthsOfTheYearWithState:(id)arg1;
- (id)_selectedDaysOfTheMonthWithState:(id)arg1;
- (id)_selectedDaysOfTheWeekWithState:(id)arg1;
- (long long)_recurrenceFrequencyWithState:(id)arg1;
- (BOOL)_cell:(id)arg1 isLastSelectedInMatrix:(id)arg2;
- (void)_initializeControls;
- (id)_byDayArray:(int)arg1 weekItemSelected:(int)arg2;
- (long long)_weekNumberFromSelectedIndex:(long long)arg1;
- (struct CGRect)_frameForDeltaHeight:(double)arg1;
- (void)_resetFrameFromViews;
- (void)_openWithAnimation:(BOOL)arg1;
- (id)_attach;
- (long long)_runAndAttach;
- (void)mouseDown:(id)arg1;
- (void)prepareToPopupOnView:(id)arg1;
- (id)recurrenceRuleFromShowingPopup;
- (BOOL)showPopup;
- (void)resetWindow;
- (void)updateYearlyPaneWithWindowState:(id)arg1;
- (void)updateMonthlyPaneWithWindowState:(id)arg1;
- (void)updateWeeklyPaneWithWindowState:(id)arg1;
- (void)updateDailyPaneWithWindowState:(id)arg1;
- (id)recurrenceRuleWithWindowState:(id)arg1;
- (void)updateStateFromWindow;
- (void)updateWindowWithState:(id)arg1;
- (void)updateStateWithRecurrenceRule:(id)arg1 startDate:(id)arg2 timeZone:(id)arg3 supportsMultipleDaysAndMonths:(BOOL)arg4 supportsYearlyIntervalChange:(BOOL)arg5;
- (void)updateStateWithRecurrenceRule:(id)arg1;
- (void)updateStateWithCalendarItem:(id)arg1;
- (void)updateWithCalendarItem:(id)arg1;
- (void)updateFirstDayOfWeek:(long long)arg1;
- (id)initWithView:(id)arg1;

@end

