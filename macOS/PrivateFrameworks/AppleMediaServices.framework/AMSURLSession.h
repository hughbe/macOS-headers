//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSURLSessionDataDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionDelegate-Protocol.h>
#import <AppleMediaServices/NSURLSessionTaskDelegate-Protocol.h>

@class AMSURLDelegateProxy, AMSURLSecurityPolicy, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol AMSRequestEncoding, AMSResponseDecoding, AMSURLHandling, NSURLSessionDelegate><AMSURLProtocolDelegate;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSessionConfiguration *_configuration;
    AMSURLDelegateProxy *_delegateProxy;
    NSOperationQueue *_delegateQueue;
    id <AMSURLHandling> _protocolHandler;
    id <AMSResponseDecoding> _responseDecoder;
    NSURLSession *_session;
    BOOL _invalidated;
    id <AMSRequestEncoding> _requestEncoder;
    AMSURLSecurityPolicy *_securityPolicy;
}

+ (id)sharedAuthKitSession;
+ (id)defaultSession;
- (void).cxx_destruct;
@property(retain) AMSURLSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(retain) AMSURLDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly) NSURLSession *session; // @synthesize session=_session;
@property(retain) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property(retain) id <AMSRequestEncoding> requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(readonly) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_prepareRequest:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (void)_retryTask:(id)arg1 action:(id)arg2 error:(id *)arg3;
- (id)_handleURLAction:(id)arg1 task:(id)arg2 error:(id *)arg3;
- (id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3;
- (id)dataTaskPromiseWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
@property(retain) id <AMSURLHandling> protocolHandler; // @synthesize protocolHandler=_protocolHandler;
@property __weak id <NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

