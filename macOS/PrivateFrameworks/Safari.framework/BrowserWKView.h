//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/SearchableWKView.h>

#import <Safari/_WKIconLoadingDelegate-Protocol.h>

@class BrowserViewController, NSArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol BrowserViewIconLoadingDelegate, NSTouchBarProvider;

__attribute__((visibility("hidden")))
@interface BrowserWKView : SearchableWKView <_WKIconLoadingDelegate>
{
    NSMutableDictionary *_renderTreeCreationHandlerMap;
    NSMutableSet *_WKViewMouseTrackingBlockerSet;
    BOOL _shouldBlockAllMouseEvents;
    BOOL _shouldBlockAllKeyEvents;
    BOOL _shouldBlockFirstResponder;
    BOOL _isVisible;
    BOOL _forPagePreviews;
    BOOL _overrideMaintainsInactiveSelectionForVoiceOver;
    id <BrowserViewIconLoadingDelegate> _iconDelegate;
    NSUUID *_uuid;
    NSArray *_previewWKViews;
    id <NSTouchBarProvider> _alternateFunctionBarProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSTouchBarProvider> alternateFunctionBarProvider; // @synthesize alternateFunctionBarProvider=_alternateFunctionBarProvider;
@property(nonatomic) BOOL overrideMaintainsInactiveSelectionForVoiceOver; // @synthesize overrideMaintainsInactiveSelectionForVoiceOver=_overrideMaintainsInactiveSelectionForVoiceOver;
@property(readonly, copy, nonatomic) NSArray *previewWKViews; // @synthesize previewWKViews=_previewWKViews;
@property(nonatomic, getter=isForPagePreviews) BOOL forPagePreviews; // @synthesize forPagePreviews=_forPagePreviews;
@property(readonly, nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) BOOL shouldBlockFirstResponder; // @synthesize shouldBlockFirstResponder=_shouldBlockFirstResponder;
@property(nonatomic) BOOL shouldBlockAllKeyEvents; // @synthesize shouldBlockAllKeyEvents=_shouldBlockAllKeyEvents;
@property(nonatomic) BOOL shouldBlockAllMouseEvents; // @synthesize shouldBlockAllMouseEvents=_shouldBlockAllMouseEvents;
@property(nonatomic) __weak id <BrowserViewIconLoadingDelegate> iconDelegate; // @synthesize iconDelegate=_iconDelegate;
- (void)webView:(id)arg1 shouldLoadIconWithParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)touchBar;
- (BOOL)resignFirstResponder;
- (BOOL)_isBlockingWKViewMouseTracking;
- (id)presentingBrowserViewController;
- (id)createFullScreenWindow;
- (void)didCreateRenderLayerTree:(const struct RenderLayer *)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (void)createRenderLayerTreeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didCreateRenderTree:(const struct RenderObject *)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (void)createRenderTreeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)textProviderForAppleScript;
- (id)sourceProviderForAppleScript;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)_hitTestWindowAtWindowCoordinate:(struct CGPoint)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_didChangeContentSize:(struct CGSize)arg1;
- (void)unblockWKViewMouseTrackingWithObject:(id)arg1;
- (void)blockWKViewMouseTrackingWithObject:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;
- (void)_windowDidChangeOcclusionState:(id)arg1;
- (void)_updateVisibility;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)scrollWheel:(id)arg1;
- (id)tabContentView;
- (void)pageDidClose;
- (id)playbackControlsPresenter;
@property(readonly, nonatomic) BrowserViewController *browserViewController;
- (void)dealloc;
- (id)initWithBrowserViewController:(id)arg1 configuration:(id)arg2;
- (id)initWithWebViewController:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

