//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionDelegate-Protocol.h>

@class NSData, NSError, NSString;

@interface myDeli : NSObject <NSURLSessionDelegate>
{
    NSError *_errorResult;
    BOOL _receivedResponse;
    BOOL _hasCanceled;
    NSData *resumeData;
}

@property BOOL hasCanceled; // @synthesize hasCanceled=_hasCanceled;
@property BOOL receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(copy) NSData *resumeData; // @synthesize resumeData;
@property(retain) NSError *someError; // @synthesize someError=_errorResult;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

