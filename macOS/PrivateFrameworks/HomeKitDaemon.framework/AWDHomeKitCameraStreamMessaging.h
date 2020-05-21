//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying>
{
    unsigned int _receivedConnSetup;
    unsigned int _receivedNegotiationRequest;
    unsigned int _receivedStartRequest;
    unsigned int _sentConnSetup;
    unsigned int _sentNegotiationRequest;
    unsigned int _sentNegotiationResponse;
    unsigned int _sentStartRequest;
    unsigned int _sentStartResponse;
    struct {
        unsigned int receivedConnSetup:1;
        unsigned int receivedNegotiationRequest:1;
        unsigned int receivedStartRequest:1;
        unsigned int sentConnSetup:1;
        unsigned int sentNegotiationRequest:1;
        unsigned int sentNegotiationResponse:1;
        unsigned int sentStartRequest:1;
        unsigned int sentStartResponse:1;
    } _has;
}

@property(nonatomic) unsigned int receivedConnSetup; // @synthesize receivedConnSetup=_receivedConnSetup;
@property(nonatomic) unsigned int sentConnSetup; // @synthesize sentConnSetup=_sentConnSetup;
@property(nonatomic) unsigned int sentStartResponse; // @synthesize sentStartResponse=_sentStartResponse;
@property(nonatomic) unsigned int sentStartRequest; // @synthesize sentStartRequest=_sentStartRequest;
@property(nonatomic) unsigned int receivedStartRequest; // @synthesize receivedStartRequest=_receivedStartRequest;
@property(nonatomic) unsigned int sentNegotiationResponse; // @synthesize sentNegotiationResponse=_sentNegotiationResponse;
@property(nonatomic) unsigned int sentNegotiationRequest; // @synthesize sentNegotiationRequest=_sentNegotiationRequest;
@property(nonatomic) unsigned int receivedNegotiationRequest; // @synthesize receivedNegotiationRequest=_receivedNegotiationRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasReceivedConnSetup;
@property(nonatomic) BOOL hasSentConnSetup;
@property(nonatomic) BOOL hasSentStartResponse;
@property(nonatomic) BOOL hasSentStartRequest;
@property(nonatomic) BOOL hasReceivedStartRequest;
@property(nonatomic) BOOL hasSentNegotiationResponse;
@property(nonatomic) BOOL hasSentNegotiationRequest;
@property(nonatomic) BOOL hasReceivedNegotiationRequest;

@end

