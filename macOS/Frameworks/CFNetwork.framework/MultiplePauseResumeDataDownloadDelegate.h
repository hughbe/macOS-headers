//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionDownloadDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface MultiplePauseResumeDataDownloadDelegate : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDelegate>
{
    BOOL _expectDirectory;
    BOOL _deleteTempFileOnce;
    BOOL _expectZeroOffestResume;
    long long _sizeOfEntity;
    NSObject<OS_dispatch_semaphore> *_wait;
    _Bool _retryingWithResumeData;
    _Bool _result;
    long long _totalBytesWritten;
}

- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (_Bool)didTestPass;
- (_Bool)isRetryingWithResumeData;
- (_Bool)isExpectingDirectory;
- (long long)getSizeOfEntity;
- (id)getWaiter;
- (void)dealloc;
- (id)initExpectingDirectory:(_Bool)arg1 deleteTempFileOnce:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

