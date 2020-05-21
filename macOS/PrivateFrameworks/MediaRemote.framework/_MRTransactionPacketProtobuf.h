//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString, _MRTransactionKeyProtobuf;

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying>
{
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
    NSString *_identifier;
    _MRTransactionKeyProtobuf *_key;
    NSData *_packetData;
    struct {
        unsigned int totalLength:1;
        unsigned int totalWritePosition:1;
    } _has;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalWritePosition; // @synthesize totalWritePosition=_totalWritePosition;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSData *packetData; // @synthesize packetData=_packetData;
@property(retain, nonatomic) _MRTransactionKeyProtobuf *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTotalWritePosition;
@property(nonatomic) BOOL hasTotalLength;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasPacketData;
@property(readonly, nonatomic) BOOL hasKey;
- (id)customDictionaryRepresentation;

@end

