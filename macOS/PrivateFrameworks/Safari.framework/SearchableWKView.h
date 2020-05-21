//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import <Safari/_WKFullscreenDelegate-Protocol.h>

@class BrowserViewController, NSColor, NSString, WKWebsiteDataStore, WebViewController, _WKRemoteObjectRegistry;
@protocol SearchableWKViewCancelDelegate, SearchableWKViewFullScreenDelegate, SearchableWKViewPlaybackControlsPresenter;

__attribute__((visibility("hidden")))
@interface SearchableWKView : WKWebView <_WKFullscreenDelegate>
{
    BOOL _isInFullscreenMode;
    id <SearchableWKViewFullScreenDelegate> _fullScreenDelegate;
    id <SearchableWKViewPlaybackControlsPresenter> _playbackControlsPresenter;
    id <SearchableWKViewCancelDelegate> _cancelDelegate;
    unsigned long long _browsingMode;
    WKWebsiteDataStore *_websiteDataStore;
    WebViewController *_webViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak WebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(readonly, nonatomic) WKWebsiteDataStore *websiteDataStore; // @synthesize websiteDataStore=_websiteDataStore;
@property(readonly, nonatomic) unsigned long long browsingMode; // @synthesize browsingMode=_browsingMode;
@property(nonatomic) __weak id <SearchableWKViewCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=_cancelDelegate;
@property(nonatomic) __weak id <SearchableWKViewPlaybackControlsPresenter> playbackControlsPresenter; // @synthesize playbackControlsPresenter=_playbackControlsPresenter;
@property(nonatomic) __weak id <SearchableWKViewFullScreenDelegate> fullScreenDelegate; // @synthesize fullScreenDelegate=_fullScreenDelegate;
- (BOOL)performDragOperation:(id)arg1;
- (void)_removeMediaPlaybackControlsView;
- (void)_addMediaPlaybackControlsView:(id)arg1;
- (id)_browserWindow;
- (void)_gestureEventWasNotHandledByWebCore:(id)arg1;
- (id)_immediateActionAnimationControllerForHitTestResult:(id)arg1 withType:(long long)arg2 userData:(id)arg3;
- (void)_dismissContentRelativeChildWindows;
@property(readonly, nonatomic) BrowserViewController *presentingBrowserViewController;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewWillEnterFullscreen:(id)arg1;
@property(nonatomic) BOOL drawsTransparentBackground;
@property(copy, nonatomic) NSColor *underlayColor;
- (id)createFullScreenWindow;
- (id)fullScreenPlaceholderView;
- (void)endDeferringViewInWindowChangesSync;
- (void)endDeferringViewInWindowChanges;
- (void)beginDeferringViewInWindowChanges;
- (void)disableFrameSizeUpdates;
- (void)enableFrameSizeUpdates;
- (void)saveBackForwardSnapshotForItem:(struct OpaqueWKBackForwardListItem *)arg1;
@property(readonly) struct OpaqueWKPage *pageRef;
@property(readonly, nonatomic) _WKRemoteObjectRegistry *remoteObjectRegistry;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (void)pageDidClose;
@property(readonly, nonatomic) BOOL isClosed;
- (id)initWithWebViewController:(id)arg1 configuration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

