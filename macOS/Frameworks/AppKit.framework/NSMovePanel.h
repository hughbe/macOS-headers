//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class FILocationPopUp, NSButton, NSString, NSTextField, NSURL, NSView, NSWindow;

@interface NSMovePanel : NSPanel
{
    NSURL *_initialURL;
    NSString *_fileName;
    NSView *_movePanelContentView;
    FILocationPopUp *_movePopUp;
    NSTextField *_movePopUpLabel;
    double _movePopUpLabelLastIntrinsicWidth;
    NSButton *_cancelButton;
    NSButton *_moveButton;
    NSWindow *_parentWindow;
    CDUnknownBlockType _completionHandler;
    id <NSMovePanelDelegate> _movePanelDelegate;
    unsigned int _delegate_validateURL:1;
    unsigned int _retained:1;
}

+ (struct CGSize)_minContentRectSize;
+ (void)newDocument:(id)arg1;
+ (id)movePanel;
+ (id)newRemoteMovePanel;
@property(copy) NSString *fileName; // @synthesize fileName=_fileName;
- (void)_setAlertInformativeMessage:(id)arg1;
- (void)_setAlertMessage:(id)arg1;
- (BOOL)_useAlertStyle;
- (void)_setUseAlertStyle:(BOOL)arg1;
- (void)_initContentView;
- (void)setContentView:(id)arg1;
- (void)_layoutAndResizeMovePanelIfNecessary;
- (struct CGSize)_adjustMinContentSizeForMinFrameSize;
- (struct CGSize)_computeMinSizeForSimpleMovePanel;
- (void)newDocument:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)dismissWindow:(long long)arg1;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)_okForMoveMode:(CDUnknownBlockType)arg1;
- (BOOL)_sendToDelegateValidateFilenameOrURL:(id)arg1 error:(id *)arg2;
@property id <NSMovePanelDelegate> delegate; // @dynamic delegate;
- (void)_refreshDelegateOptions;
- (void)_didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_completeMoveForReturnCode:(long long)arg1;
- (void)_closeAndCallCompletionHandlerWithReturnCode:(long long)arg1;
- (void)_removeExtraRetainIfNeeded;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isModalWindowOrSheetRunning;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setMovePopupFieldLabel:(id)arg1;
- (id)movePopupFieldLabel;
- (void)setTitle:(id)arg1;
- (id)title;
@property(copy) NSString *prompt; // @dynamic prompt;
- (void)setDirectoryURL:(id)arg1;
- (id)directoryURL;
@property(readonly) NSURL *finalURL;
@property(copy) NSURL *URL;
@property(copy) NSURL *initialURL;
- (void)_updateOkButtonEnabledState;
- (void)dealloc;
- (void)_selectFirstKeyView;
- (void)finderLocationPopUpOtherLocation:(id)arg1;
- (unsigned long long)finderLocationPopUpMenuOptions:(id)arg1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)arg1;
- (void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (void)_configureMovePopUp;
- (id)_ubiquityContainerURLs;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

