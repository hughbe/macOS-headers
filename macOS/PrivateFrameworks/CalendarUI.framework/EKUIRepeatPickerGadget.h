//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUIRepeatGadget.h>

@class EKUIPopUpButton;

@interface EKUIRepeatPickerGadget : EKUIRepeatGadget
{
    EKUIPopUpButton *_repeatPicker;
}

- (void).cxx_destruct;
@property(retain) EKUIPopUpButton *repeatPicker; // @synthesize repeatPicker=_repeatPicker;
- (void)repeatChanged:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (id)control;
- (double)baselineOffset;
- (id)labelString;
- (id)addMenuItemForRecurrenceFrequency:(long long)arg1 withTitle:(id)arg2;
- (id)initWithViewController:(id)arg1;

@end

