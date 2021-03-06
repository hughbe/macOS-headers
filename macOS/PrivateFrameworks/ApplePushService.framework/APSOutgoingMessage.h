//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ApplePushService/APSMessage.h>

@class APSOutgoingMessageCheckpointTrace, NSString;

@interface APSOutgoingMessage : APSMessage
{
    APSOutgoingMessageCheckpointTrace *_checkpointTrace;
    BOOL _ackReceived;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL ackReceived; // @synthesize ackReceived=_ackReceived;
@property(retain, nonatomic) APSOutgoingMessageCheckpointTrace *checkpointTrace; // @synthesize checkpointTrace=_checkpointTrace;
- (void)setPushFlags:(unsigned int)arg1;
- (unsigned int)pushFlags;
@property(nonatomic) unsigned long long ackTimestamp;
@property(nonatomic) BOOL sendRetried;
- (id)sentTimestamp;
- (void)setSentTimestamp:(id)arg1;
- (id)originator;
- (void)setOriginator:(id)arg1;
@property(copy, nonatomic) NSString *senderTokenName;
- (void)setPushType:(unsigned long long)arg1;
- (unsigned long long)pushType;
- (void)setPriority:(long long)arg1;
- (long long)priority;
@property(nonatomic) unsigned long long payloadLength;
@property(nonatomic) unsigned long long payloadFormat;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)hasTimedOut;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)wasCancelled;
- (void)setSendInterface:(long long)arg1;
- (long long)sendInterface;
- (void)setSent:(BOOL)arg1;
- (BOOL)wasSent;
@property(nonatomic, getter=isCritical) BOOL critical;
- (BOOL)isEager;
- (id)rawTimeoutTime;
- (id)eagernessTimeoutTime;
- (id)sendTimeoutTime;
- (unsigned long long)_effectiveSendTimeout;
@property(nonatomic) unsigned long long timeout;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)setMessageID:(unsigned long long)arg1;
- (unsigned long long)messageID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

