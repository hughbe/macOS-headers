//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSWebViewMetadataFetchOperation, WKWebView, WKWebViewConfiguration;

@protocol WBSWebViewMetadataFetchOperationDelegate <NSObject>
- (void)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (void)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 getWebViewOfSize:(struct CGSize)arg2 withConfiguration:(WKWebViewConfiguration *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
@end

