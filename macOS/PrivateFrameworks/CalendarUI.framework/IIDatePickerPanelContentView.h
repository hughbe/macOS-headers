//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class IIDatePicker, NSDatePicker;

@interface IIDatePickerPanelContentView : NSView
{
    IIDatePicker *__textDatePicker;
    NSDatePicker *__calendarDatePicker;
}

- (void).cxx_destruct;
@property(retain) NSDatePicker *_calendarDatePicker; // @synthesize _calendarDatePicker=__calendarDatePicker;
@property(retain) IIDatePicker *_textDatePicker; // @synthesize _textDatePicker=__textDatePicker;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFitAndArrange;
- (void)setCalendarDatePicker:(id)arg1;
- (void)setTextDatePicker:(id)arg1;

@end

