//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarUI/CalUIEventTimeViewControllerDelegate-Protocol.h>
#import <CalendarUI/NSTouchBarProvider-Protocol.h>

@class CalUIEventTimeViewController, NSButton, NSDate, NSLayoutConstraint, NSSegmentedControl, NSString, NSTouchBar;
@protocol CalUIDatePickerTouchBarDelegate;

@interface CalUIDatePickerTouchBar : NSObject <CalUIEventTimeViewControllerDelegate, NSTouchBarProvider>
{
    BOOL _hasDuration;
    BOOL _allDay;
    long long _barStyle;
    NSDate *_startDate;
    NSDate *_endDate;
    id <CalUIDatePickerTouchBarDelegate> _delegate;
    NSTouchBar *_touchBar;
    CalUIEventTimeViewController *_eventTimeController;
    NSButton *_allDayButton;
    NSSegmentedControl *_dateSelector;
    NSLayoutConstraint *_datePickerWidthConstraint;
}

- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *datePickerWidthConstraint; // @synthesize datePickerWidthConstraint=_datePickerWidthConstraint;
@property(retain) NSSegmentedControl *dateSelector; // @synthesize dateSelector=_dateSelector;
@property(retain) NSButton *allDayButton; // @synthesize allDayButton=_allDayButton;
@property(retain) CalUIEventTimeViewController *eventTimeController; // @synthesize eventTimeController=_eventTimeController;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <CalUIDatePickerTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL allDay; // @synthesize allDay=_allDay;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property BOOL hasDuration; // @synthesize hasDuration=_hasDuration;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
- (void)eventTimeDidChange;
- (void)eventTimeIsChanging;
- (long long)endingWorkHour;
- (long long)beginningWorkHour;
- (void)dateSelectorButtonClicked:(id)arg1;
- (void)toggleEventAllDay;
- (void)dateTimeFormatChanged;
- (void)_updateDatePickerController;
- (void)updateTouchBar;
- (id)createDateSelector;
- (id)createAllDayButton;
- (id)createEventTimeViewController;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

