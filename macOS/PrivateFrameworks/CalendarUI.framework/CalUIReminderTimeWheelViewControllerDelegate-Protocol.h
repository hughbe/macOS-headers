//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class CalUIReminderTimeWheelViewController, NSDate;

@protocol CalUIReminderTimeWheelViewControllerDelegate <NSObject>

@optional
- (void)timeWheel:(CalUIReminderTimeWheelViewController *)arg1 didSelectDate:(NSDate *)arg2 finalized:(BOOL)arg3;
- (void)timeWheelDidEndScroll:(CalUIReminderTimeWheelViewController *)arg1;
- (void)timeWheelWillBeginScroll:(CalUIReminderTimeWheelViewController *)arg1;
@end

