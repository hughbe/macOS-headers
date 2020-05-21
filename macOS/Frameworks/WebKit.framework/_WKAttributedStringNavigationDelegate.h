//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKNavigationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKAttributedStringNavigationDelegate : NSObject <WKNavigationDelegate>
{
    CDUnknownBlockType _webContentProcessDidTerminate;
    CDUnknownBlockType _decidePolicyForNavigationAction;
    CDUnknownBlockType _didFailProvisionalNavigation;
    CDUnknownBlockType _didFailNavigation;
    CDUnknownBlockType _didFinishNavigation;
}

@property(copy, nonatomic) CDUnknownBlockType didFinishNavigation; // @synthesize didFinishNavigation=_didFinishNavigation;
@property(copy, nonatomic) CDUnknownBlockType didFailNavigation; // @synthesize didFailNavigation=_didFailNavigation;
@property(copy, nonatomic) CDUnknownBlockType didFailProvisionalNavigation; // @synthesize didFailProvisionalNavigation=_didFailProvisionalNavigation;
@property(copy, nonatomic) CDUnknownBlockType decidePolicyForNavigationAction; // @synthesize decidePolicyForNavigationAction=_decidePolicyForNavigationAction;
@property(copy, nonatomic) CDUnknownBlockType webContentProcessDidTerminate; // @synthesize webContentProcessDidTerminate=_webContentProcessDidTerminate;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

