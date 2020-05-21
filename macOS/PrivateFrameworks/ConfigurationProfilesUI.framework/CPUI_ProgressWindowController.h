//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSDate, NSImage, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSTextField, NSWindow;

@interface CPUI_ProgressWindowController : NSWindowController
{
    _Bool _cancelled;
    NSImageView *_iconView;
    NSTextField *_titleField;
    NSTextField *_messageField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_cancelButton;
    NSLayoutConstraint *_layoutCancelTop;
    NSLayoutConstraint *_layoutCancelBottom;
    NSLayoutConstraint *_layoutCancelLeading;
    NSLayoutConstraint *_layoutCancelTrailing;
    NSLayoutConstraint *_layoutNoCancelProgressBottom;
    NSDate *_sheetShowDate;
    CDUnknownBlockType _responseHandler;
    NSWindow *_hostWindow;
    NSImage *_icon;
}

+ (id)newControllerWithIcon:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) NSDate *sheetShowDate; // @synthesize sheetShowDate=_sheetShowDate;
@property(readonly) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain) NSLayoutConstraint *layoutNoCancelProgressBottom; // @synthesize layoutNoCancelProgressBottom=_layoutNoCancelProgressBottom;
@property(retain) NSLayoutConstraint *layoutCancelTrailing; // @synthesize layoutCancelTrailing=_layoutCancelTrailing;
@property(retain) NSLayoutConstraint *layoutCancelLeading; // @synthesize layoutCancelLeading=_layoutCancelLeading;
@property(retain) NSLayoutConstraint *layoutCancelBottom; // @synthesize layoutCancelBottom=_layoutCancelBottom;
@property(retain) NSLayoutConstraint *layoutCancelTop; // @synthesize layoutCancelTop=_layoutCancelTop;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property NSTextField *messageField; // @synthesize messageField=_messageField;
@property NSTextField *titleField; // @synthesize titleField=_titleField;
@property NSImageView *iconView; // @synthesize iconView=_iconView;
- (void)close;
- (void)showInWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCancellable:(_Bool)arg1;
- (void)setProgressAnimating:(_Bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)reset;
- (void)windowDidLoad;
- (void)dealloc;

@end

