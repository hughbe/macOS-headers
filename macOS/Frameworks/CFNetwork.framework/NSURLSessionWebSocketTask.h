//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask
{
    long long _maximumMessageSize;
    long long _closeCode;
    NSData *_closeReason;
}

- (void).cxx_destruct;
@property(readonly, copy) NSData *closeReason; // @synthesize closeReason=_closeReason;
@property(readonly) long long closeCode; // @synthesize closeCode=_closeCode;
@property long long maximumMessageSize; // @synthesize maximumMessageSize=_maximumMessageSize;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)sendPingWithPongReceiveHandler:(CDUnknownBlockType)arg1;
- (void)receiveMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

