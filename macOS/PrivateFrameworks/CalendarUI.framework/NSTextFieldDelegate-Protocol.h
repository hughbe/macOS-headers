//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/NSControlTextEditingDelegate-Protocol.h>

@class NSArray, NSTextField, NSTextView;

@protocol NSTextFieldDelegate <NSControlTextEditingDelegate>

@optional
- (BOOL)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 shouldSelectCandidateAtIndex:(unsigned long long)arg3;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidates:(NSArray *)arg3 forSelectedRange:(struct _NSRange)arg4;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidatesForSelectedRange:(struct _NSRange)arg3;
@end

