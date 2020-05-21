//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSData, NSString;

@interface TPPBPeerPermanentInfo : PBCodable <NSCopying>
{
    unsigned long long _epoch;
    NSData *_encryptionPubKey;
    NSString *_machineId;
    NSString *_modelId;
    NSData *_signingPubKey;
    struct {
        unsigned int epoch:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(retain, nonatomic) NSString *machineId; // @synthesize machineId=_machineId;
@property(retain, nonatomic) NSData *encryptionPubKey; // @synthesize encryptionPubKey=_encryptionPubKey;
@property(retain, nonatomic) NSData *signingPubKey; // @synthesize signingPubKey=_signingPubKey;
@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasModelId;
@property(readonly, nonatomic) BOOL hasMachineId;
@property(readonly, nonatomic) BOOL hasEncryptionPubKey;
@property(readonly, nonatomic) BOOL hasSigningPubKey;
@property(nonatomic) BOOL hasEpoch;

@end

