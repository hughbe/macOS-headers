//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

@class NSButton, NSView;

@interface EKUIPublicCalendarGadget : EKUISingleViewGadget
{
    NSButton *_publicCalendarCheckbox;
    NSView *_publicLinkDescriptionContainer;
}

- (void).cxx_destruct;
@property(retain) NSView *publicLinkDescriptionContainer; // @synthesize publicLinkDescriptionContainer=_publicLinkDescriptionContainer;
@property(retain) NSButton *publicCalendarCheckbox; // @synthesize publicCalendarCheckbox=_publicCalendarCheckbox;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)arg1;
- (void)publicURLBoxClicked:(id)arg1;
- (id)control;
- (id)initWithViewController:(id)arg1;

@end

