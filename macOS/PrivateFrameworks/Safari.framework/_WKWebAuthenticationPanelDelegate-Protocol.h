//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class _WKWebAuthenticationPanel;

@protocol _WKWebAuthenticationPanelDelegate <NSObject>

@optional
- (void)panel:(_WKWebAuthenticationPanel *)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
- (void)panel:(_WKWebAuthenticationPanel *)arg1 updateWebAuthenticationPanel:(long long)arg2;
@end

