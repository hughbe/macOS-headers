//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AuthKitUI/AKIDPPresentationController-Protocol.h>
#import <AuthKitUI/AKInAssistantNavigationHandler-Protocol.h>

@class AKIDPHandler, NSButton, NSString, NSView, WKWebView;

@interface AKIDPProvidedSignInViewController : NSViewController <AKIDPPresentationController, AKInAssistantNavigationHandler>
{
    WKWebView *_webView;
    AKIDPHandler *_idpHandler;
    NSView *_containerView;
    NSButton *_cancelButton;
}

- (void).cxx_destruct;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AKIDPHandler *idpHandler; // @synthesize idpHandler=_idpHandler;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)cancelButtonTapped:(id)arg1;
- (void)alternateNavigationButtonClicked:(id)arg1;
- (void)rightNavigationButtonClicked:(id)arg1;
- (void)leftNavigationButtonClicked:(id)arg1;
- (void)cleanUp;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithIDPHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

