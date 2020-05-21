//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarUI/CalUIReminderTimeWheelViewControllerDelegate-Protocol.h>
#import <CalendarUI/NSScrubberDataSource-Protocol.h>
#import <CalendarUI/NSScrubberDelegate-Protocol.h>
#import <CalendarUI/NSTouchBarProvider-Protocol.h>

@class CalUIReminderTimeWheelViewController, NSCalendar, NSCustomTouchBarItem, NSDate, NSScrubber, NSString, NSTouchBar;
@protocol CalUIReminderDatePickerTouchBarDelegate;

@interface CalUIReminderDatePickerTouchBar : NSObject <CalUIReminderTimeWheelViewControllerDelegate, NSScrubberDataSource, NSScrubberDelegate, NSTouchBarProvider>
{
    BOOL _timeWheelIsLiveScrolling;
    BOOL _suppressScrollingDateChangeUpdates;
    BOOL _isUpdatingDayScrubber;
    NSDate *_reminderDate;
    id <CalUIReminderDatePickerTouchBarDelegate> _delegate;
    NSTouchBar *_touchBar;
    NSCustomTouchBarItem *_timeWheelTouchBarItem;
    NSCalendar *_calendar;
    NSDate *_originDate;
    NSScrubber *_dayScrubber;
    CalUIReminderTimeWheelViewController *_timeWheel;
}

- (void).cxx_destruct;
@property BOOL isUpdatingDayScrubber; // @synthesize isUpdatingDayScrubber=_isUpdatingDayScrubber;
@property BOOL suppressScrollingDateChangeUpdates; // @synthesize suppressScrollingDateChangeUpdates=_suppressScrollingDateChangeUpdates;
@property BOOL timeWheelIsLiveScrolling; // @synthesize timeWheelIsLiveScrolling=_timeWheelIsLiveScrolling;
@property(retain) CalUIReminderTimeWheelViewController *timeWheel; // @synthesize timeWheel=_timeWheel;
@property(retain) NSScrubber *dayScrubber; // @synthesize dayScrubber=_dayScrubber;
@property(retain) NSDate *originDate; // @synthesize originDate=_originDate;
@property(retain) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSCustomTouchBarItem *timeWheelTouchBarItem; // @synthesize timeWheelTouchBarItem=_timeWheelTouchBarItem;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <CalUIReminderDatePickerTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDate *reminderDate; // @synthesize reminderDate=_reminderDate;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (long long)_indexForDate:(id)arg1;
- (id)_dateForIndex:(long long)arg1;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (void)timeWheelDidEndScroll:(id)arg1;
- (void)timeWheelWillBeginScroll:(id)arg1;
- (void)timeWheel:(id)arg1 didSelectDate:(id)arg2 finalized:(BOOL)arg3;
- (void)cancelRemainingScrollDateChangeUpdates;
- (void)updateTouchBar;
- (id)_makeTimeWheelViewController;
- (id)_makeDayScrubber;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

