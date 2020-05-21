//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPageGroup> _pageGroup;
}

@property(readonly) struct Object *_apiObject;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6;
- (void)removeAllUserStyleSheets;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5;
@property BOOL privateBrowsingEnabled;
@property BOOL allowsPlugIns;
- (void)setAllowsJavaScriptMarkup:(BOOL)arg1;
- (BOOL)allowsJavaScriptMarkup;
@property BOOL allowsJavaScript;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
@property(readonly) struct OpaqueWKPageGroup *_pageGroupRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

