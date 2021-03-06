//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/NSTextViewDelegate-Protocol.h>

@class ContentHuggingTextView, NSClipView, NSPopover, NSString, WBSSavedPassword;
@protocol PasswordsAuditingHandler;

__attribute__((visibility("hidden")))
@interface PasswordsAuditingPopoverViewController : NSViewController <NSTextViewDelegate>
{
    NSString *_duplicatedPasswordDomain;
    NSPopover *_popover;
    id <PasswordsAuditingHandler> _passwordAuditingHandler;
    WBSSavedPassword *_auditingSavedPassword;
    NSClipView *_passwordsAuditingWarningLabelEnclosingClipView;
    ContentHuggingTextView *_passwordsAuditingWarningLabel;
}

- (void).cxx_destruct;
@property ContentHuggingTextView *passwordsAuditingWarningLabel; // @synthesize passwordsAuditingWarningLabel=_passwordsAuditingWarningLabel;
@property __weak NSClipView *passwordsAuditingWarningLabelEnclosingClipView; // @synthesize passwordsAuditingWarningLabelEnclosingClipView=_passwordsAuditingWarningLabelEnclosingClipView;
@property(readonly, nonatomic) WBSSavedPassword *auditingSavedPassword; // @synthesize auditingSavedPassword=_auditingSavedPassword;
@property(nonatomic) __weak id <PasswordsAuditingHandler> passwordAuditingHandler; // @synthesize passwordAuditingHandler=_passwordAuditingHandler;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)closePopover;
- (void)showPopoverWithPositioningView:(id)arg1;
- (void)_updateWarningLabelStringValue;
- (void)viewDidLoad;
- (id)initWithAuditingSavedPassword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

