//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEExtensionProviderContext, NSString, NWPath, NWPathEvaluator;

@interface NEProvider : NSObject <NSExtensionRequestHandling>
{
    NWPath *_defaultPath;
    NWPathEvaluator *_defaultPathEvaluator;
    NEExtensionProviderContext *_context;
    NSString *_appName;
}

+ (BOOL)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2;
+ (BOOL)isRunningInProvider;
+ (void)startSystemExtensionMode;
- (void).cxx_destruct;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NEExtensionProviderContext *context; // @synthesize context=_context;
@property(retain) NWPathEvaluator *defaultPathEvaluator; // @synthesize defaultPathEvaluator=_defaultPathEvaluator;
@property(retain) NWPath *defaultPath; // @synthesize defaultPath=_defaultPath;
- (void)displayMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(BOOL)arg2 initialData:(id)arg3 enableMultipath:(BOOL)arg4 enableTLS:(BOOL)arg5 TLSParameters:(id)arg6 delegate:(id)arg7;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setdefaultPathObserver:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (id)initAllowUnentitled:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

