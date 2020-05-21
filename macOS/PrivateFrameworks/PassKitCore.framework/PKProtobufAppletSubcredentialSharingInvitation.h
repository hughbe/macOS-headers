//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufAppletSubcredentialSharingInvitation : PBCodable <NSCopying>
{
    NSString *_deviceModel;
    int _deviceType;
    unsigned int _entitlement;
    NSString *_identifier;
    NSData *_invitation;
    NSString *_issuer;
    NSString *_pairedReaderIdentifier;
    NSString *_partnerIdentifier;
    NSString *_recipientName;
    NSData *_sharingSessionIdentifier;
    unsigned int _version;
    struct {
        unsigned int deviceType:1;
        unsigned int entitlement:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(nonatomic) unsigned int entitlement; // @synthesize entitlement=_entitlement;
@property(retain, nonatomic) NSData *sharingSessionIdentifier; // @synthesize sharingSessionIdentifier=_sharingSessionIdentifier;
@property(retain, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(retain, nonatomic) NSString *pairedReaderIdentifier; // @synthesize pairedReaderIdentifier=_pairedReaderIdentifier;
@property(retain, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSData *invitation; // @synthesize invitation=_invitation;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDeviceModel;
@property(readonly, nonatomic) BOOL hasIssuer;
- (int)StringAsDeviceType:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceType;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) BOOL hasEntitlement;
@property(readonly, nonatomic) BOOL hasSharingSessionIdentifier;
@property(readonly, nonatomic) BOOL hasRecipientName;
@property(readonly, nonatomic) BOOL hasPairedReaderIdentifier;
@property(readonly, nonatomic) BOOL hasPartnerIdentifier;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasInvitation;

@end

