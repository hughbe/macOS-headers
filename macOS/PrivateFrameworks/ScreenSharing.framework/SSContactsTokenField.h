//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTokenField.h>

@class NSString, SSContactsTokenFieldDelegate;

@interface SSContactsTokenField : NSTokenField
{
    BOOL _completionWindowShowing;
    SSContactsTokenFieldDelegate *_contactsTokenFieldDelegate;
}

@property(retain) SSContactsTokenFieldDelegate *contactsTokenFieldDelegate; // @synthesize contactsTokenFieldDelegate=_contactsTokenFieldDelegate;
@property BOOL completionWindowShowing; // @synthesize completionWindowShowing=_completionWindowShowing;
- (void)dismissCompletionWindow:(id)arg1;
@property(readonly) NSString *identifierString;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

