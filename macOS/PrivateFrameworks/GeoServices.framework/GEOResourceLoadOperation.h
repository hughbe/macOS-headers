//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceLoadOperation-Protocol.h>
#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOReportedProgress, NSData, NSMutableData, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionTask;
@protocol GEORequestCounterTicket, OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation>
{
    NSURL *_url;
    NSURL *_proxyURL;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id <GEORequestCounterTicket> _requestCounterTicket;
    NSMutableData *_data;
    BOOL _expectsPartialContent;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    struct os_unfair_lock_s _lock;
    BOOL _requiresWiFi;
    BOOL _preferDirectNetworking;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL preferDirectNetworking; // @synthesize preferDirectNetworking=_preferDirectNetworking;
@property(nonatomic) BOOL requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5 log:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

