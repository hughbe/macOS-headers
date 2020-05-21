//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class NSDatePickerCell, NSEvent;

@protocol IIDatePickerDelegate <NSObject>
- (void)_datePickerCellDidResignFirstResponder:(NSDatePickerCell *)arg1;
- (void)_datePickerCellDidBecomeFirstResponder:(NSDatePickerCell *)arg1;

@optional
- (BOOL)_datePickerCell:(NSDatePickerCell *)arg1 receivedKeyDown:(NSEvent *)arg2;
- (BOOL)_datePickerCell:(NSDatePickerCell *)arg1 receivedMouseDown:(NSEvent *)arg2;
@end

