//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSError, NSURLRequest, NSURLResponse, WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@protocol WKWebProcessPlugInLoadDelegate <NSObject>

@optional
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didFailLoadForResource:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didFinishLoadForResource:(unsigned long long)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(NSURLRequest *)arg4;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 didInitiateLoadForResource:(unsigned long long)arg3 request:(NSURLRequest *)arg4 pageIsProvisionallyLoading:(BOOL)arg5;
- (NSURLRequest *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 willSendRequest:(NSURLRequest *)arg3 redirectResponse:(NSURLResponse *)arg4;
- (NSURLRequest *)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 frame:(WKWebProcessPlugInFrame *)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(NSURLRequest *)arg4 redirectResponse:(NSURLResponse *)arg5;
- (unsigned long long)webProcessPlugInBrowserContextControllerRenderingProgressEvents:(WKWebProcessPlugInBrowserContextController *)arg1;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFirstVisuallyNonEmptyLayoutForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didLayoutForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didHandleOnloadEventsForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didRemoveFrameFromHierarchy:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 globalObjectIsAvailableForFrame:(WKWebProcessPlugInFrame *)arg2 inScriptWorld:(WKWebProcessPlugInScriptWorld *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didClearWindowObjectForFrame:(WKWebProcessPlugInFrame *)arg2 inScriptWorld:(WKWebProcessPlugInScriptWorld *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(WKWebProcessPlugInFrame *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFinishLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFailLoadWithErrorForFrame:(WKWebProcessPlugInFrame *)arg2 error:(NSError *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFailProvisionalLoadWithErrorForFrame:(WKWebProcessPlugInFrame *)arg2 error:(NSError *)arg3;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didFinishDocumentLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didCommitLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
- (void)webProcessPlugInBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg1 didStartProvisionalLoadForFrame:(WKWebProcessPlugInFrame *)arg2;
@end

