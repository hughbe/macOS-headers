//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendarSuggestionNotification, NSString;

@interface CUIKSuggestionCoalescedInfo : NSObject
{
    NSString *_title;
    NSString *_descriptionText;
    EKCalendarSuggestionNotification *_earliestSuggestionNotification;
}

- (void).cxx_destruct;
@property(readonly) EKCalendarSuggestionNotification *earliestSuggestionNotification; // @synthesize earliestSuggestionNotification=_earliestSuggestionNotification;
@property(readonly) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 earliestSuggestionNotification:(id)arg3;

@end

