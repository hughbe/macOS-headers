//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, WKWebView;

@protocol _WKFindDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 didFailToFindString:(NSString *)arg2;
- (void)_webView:(WKWebView *)arg1 didFindMatches:(unsigned long long)arg2 forString:(NSString *)arg3 withMatchIndex:(long long)arg4;
- (void)_webView:(WKWebView *)arg1 didCountMatches:(unsigned long long)arg2 forString:(NSString *)arg3;
@end

