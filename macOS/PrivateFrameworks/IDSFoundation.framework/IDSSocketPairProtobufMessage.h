//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

#import <IDSFoundation/IDSSocketPairMessage-Protocol.h>

@class NSData, NSDate, NSString;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage <IDSSocketPairMessage>
{
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    unsigned short _isResponse;
    unsigned short _type;
    NSData *_data;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(nonatomic) BOOL compressed; // @synthesize compressed=_compressed;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned short isResponse; // @synthesize isResponse=_isResponse;
@property(readonly, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(readonly, nonatomic) BOOL wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly, nonatomic) BOOL expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

