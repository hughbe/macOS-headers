//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSLock, NSString, NSURLRequest, NSURLSession, NSURLSessionDownloadTask, _PKURLSessionDelegate;

@interface PKURLSession : NSObject
{
    CDUnknownBlockType _challengeBlock;
    CDUnknownBlockType _redirectResponseBlock;
    BOOL _inBackground;
    NSLock *_connectionLock;
    NSURLSession *_urlSession;
    NSURLSessionDownloadTask *_downloadTask;
    _PKURLSessionDelegate *_pkURLSessionDelegate;
    NSData *_resumeData;
    NSURLRequest *_urlRequest;
    NSString *_destinationDirectory;
}

@property BOOL inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) NSString *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(retain) _PKURLSessionDelegate *pkURLSessionDelegate; // @synthesize pkURLSessionDelegate=_pkURLSessionDelegate;
@property(retain) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain) NSLock *connectionLock; // @synthesize connectionLock=_connectionLock;
- (void)_startAsyncDownloadNotifyingOnQueue:(id)arg1 notifyOnThread:(id)arg2 withBytesReceivedHandler:(CDUnknownBlockType)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)startAsyncDownloadNotifyingOnThread:(id)arg1 withBytesReceivedHandler:(CDUnknownBlockType)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)startAsyncDownloadNotifyingOnQueue:(id)arg1 withBytesReceivedHandler:(CDUnknownBlockType)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)dealloc;
- (id)_initWithURLRequest:(id)arg1 withResumeData:(id)arg2 withDestinationDirectory:(id)arg3 inBackground:(BOOL)arg4 withAuthenticationHandler:(CDUnknownBlockType)arg5 withRedirectResponseHandler:(CDUnknownBlockType)arg6;
- (id)initWithResumeData:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(BOOL)arg3 withAuthenticationHandler:(CDUnknownBlockType)arg4 withRedirectResponseHandler:(CDUnknownBlockType)arg5;
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(BOOL)arg3 withAuthenticationHandler:(CDUnknownBlockType)arg4 withRedirectResponseHandler:(CDUnknownBlockType)arg5;
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(BOOL)arg3 withAuthenticationHandler:(CDUnknownBlockType)arg4;
- (id)initWithURLRequest:(id)arg1 withDestinationDirectory:(id)arg2 inBackground:(BOOL)arg3;
- (id)init;

@end

