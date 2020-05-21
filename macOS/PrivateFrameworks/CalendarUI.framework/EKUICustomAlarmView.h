//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CalendarUI/IIDatePickerWithMiniCalDelegate-Protocol.h>
#import <CalendarUI/NSTextFieldDelegate-Protocol.h>

@class CalUIIntegerFormatter, EKAlarm, EKUIAlarmGadget, EKUICountField, IIDatePickerWithMiniCal, NSPopUpButton, NSString, NSTextField;

@interface EKUICustomAlarmView : NSView <NSTextFieldDelegate, IIDatePickerWithMiniCalDelegate>
{
    EKUIAlarmGadget *_gadget;
    EKAlarm *_alarm;
    NSPopUpButton *_alarmTypeButton;
    NSPopUpButton *_auxButton;
    NSPopUpButton *_timingButton;
    IIDatePickerWithMiniCal *_datePicker;
    EKUICountField *_countField;
    NSTextField *_atField;
    NSView *_dateBox;
    NSView *_timeBox;
    NSView *_lastKeyView;
    CalUIIntegerFormatter *_countFormatter;
    long long _currentAlarmType;
}

- (void).cxx_destruct;
@property long long currentAlarmType; // @synthesize currentAlarmType=_currentAlarmType;
@property(retain) CalUIIntegerFormatter *countFormatter; // @synthesize countFormatter=_countFormatter;
@property __weak NSView *lastKeyView; // @synthesize lastKeyView=_lastKeyView;
@property(retain) NSView *timeBox; // @synthesize timeBox=_timeBox;
@property(retain) NSView *dateBox; // @synthesize dateBox=_dateBox;
@property(retain) NSTextField *atField; // @synthesize atField=_atField;
@property(retain) EKUICountField *countField; // @synthesize countField=_countField;
@property(retain) IIDatePickerWithMiniCal *datePicker; // @synthesize datePicker=_datePicker;
@property(retain) NSPopUpButton *timingButton; // @synthesize timingButton=_timingButton;
@property(retain) NSPopUpButton *auxButton; // @synthesize auxButton=_auxButton;
@property(retain) NSPopUpButton *alarmTypeButton; // @synthesize alarmTypeButton=_alarmTypeButton;
@property(retain) EKAlarm *alarm; // @synthesize alarm=_alarm;
@property(retain) EKUIAlarmGadget *gadget; // @synthesize gadget=_gadget;
- (id)startDate;
- (double)additionalVerticalOffsetForPickerPopover;
- (void)datePickerDidResignFirstResponder:(id)arg1;
- (void)datePickerWithMiniCalChanged:(id)arg1;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)arg1;
- (BOOL)datePickerShouldDisplayMiniCal:(id)arg1;
- (void)chooseTiming:(id)arg1;
- (void)chooseICal:(id)arg1;
- (void)displayOpenPanelForDirectory:(id)arg1 scriptsOnly:(BOOL)arg2;
- (void)chooseNewFile:(id)arg1;
- (void)chooseFile:(id)arg1;
- (void)setAlarmFileURL:(id)arg1;
- (void)chooseEmail:(id)arg1;
- (void)chooseSound:(id)arg1;
- (void)chooseAlarmType:(id)arg1;
- (id)_iCalURL;
- (void)fillAuxMenuWithFilesWithNewFileItem:(id)arg1;
- (void)fillAuxMenuWithEmailAddresses;
- (void)fillTimingMenu;
- (BOOL)_isAddingEmailAlarmValid;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)update;
- (void)addMenuItemForTimingType:(long long)arg1 withTitle:(id)arg2;
- (void)addMenuItemForAlarmType:(long long)arg1 withTitle:(id)arg2;
- (void)countChanged;
- (id)initWithGadget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

