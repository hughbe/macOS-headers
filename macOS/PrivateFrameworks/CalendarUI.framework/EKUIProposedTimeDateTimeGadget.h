//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUIDateTimeGadget.h>

@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget
{
    BOOL _shouldSuppressMiniCal;
}

+ (id)interestedChangeKeys;
@property BOOL shouldSuppressMiniCal; // @synthesize shouldSuppressMiniCal=_shouldSuppressMiniCal;
- (BOOL)isExpanded;
- (id)control;
- (id)labelString;
- (void)datePickerChangedToDate:(id)arg1;
- (void)_updateDatePickerDate;
- (void)updateWithChanges:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

