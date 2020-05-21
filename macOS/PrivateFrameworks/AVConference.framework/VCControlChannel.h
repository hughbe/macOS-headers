//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannel : VCObject
{
    id _messageReceivedDelegate;
    id _dataReceivedDelegate;
    int _bytesSent;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _bytesReceived;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
    unsigned int _reliableMessageResendInterval;
    NSObject<OS_dispatch_queue> *_asyncProcessingQueue;
}

@property(readonly, nonatomic) unsigned int reliableMessageResendInterval; // @synthesize reliableMessageResendInterval=_reliableMessageResendInterval;
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)broadcastUnreliableMessage:(id)arg1;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendReliableMessage:(id)arg1;
- (BOOL)sendReliableMessageAndWait:(id)arg1;
- (void)throwNotSupportedExceptionForMethod:(id)arg1;
- (void)flushActiveMessages;
- (void)dealloc;
@property(nonatomic) id dataReceivedDelegate;
@property(nonatomic) id messageReceivedDelegate; // @synthesize messageReceivedDelegate=_messageReceivedDelegate;
- (id)init;

@end

