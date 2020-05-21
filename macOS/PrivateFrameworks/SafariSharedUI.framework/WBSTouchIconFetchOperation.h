//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSWebViewMetadataFetchOperation.h>

#import <SafariSharedUI/WBSTouchIconObserver-Protocol.h>

@class NSArray, NSSet, NSString, NSTimer, _WKRemoteObjectInterface;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver>
{
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    long long _state;
    BOOL _allowFetchingOverCellularNetwork;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3;
- (void)willClearWebView;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)_downloadPendingTouchIconURLs;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleTimeoutWithTimeInterval:(double)arg1;
- (void)clearWebView;
- (void)startOffscreenFetching;
- (void)_tearDownRemoteObjectProxies;
- (void)_setUpRemoteObjectProxies;
- (void)didCompleteWithResult:(id)arg1;
- (void)loadRequest;
- (void)resetState;
- (id)webViewConfiguration;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 allowFetchingOverCellularNetwork:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

