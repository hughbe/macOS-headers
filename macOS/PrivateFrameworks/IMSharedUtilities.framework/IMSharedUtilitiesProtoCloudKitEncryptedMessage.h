//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying>
{
    long long _associatedMessageType;
    unsigned long long _expireState;
    unsigned long long _timeDelivered;
    unsigned long long _timeExpressiveSentPlayed;
    unsigned long long _timePlayed;
    unsigned long long _timeRead;
    NSString *_associatedMessageGuid;
    unsigned int _associatedMessageRangeLength;
    unsigned int _associatedMessageRangeLocation;
    NSString *_baloonBundleId;
    NSString *_expressiveSendId;
    NSString *_messageBody;
    NSData *_messageBodyData;
    NSString *_messageSubject;
    NSData *_messageSummaryInfo;
    NSData *_padding;
    NSData *_payloadData;
    unsigned int _version;
    struct {
        unsigned int associatedMessageType:1;
        unsigned int expireState:1;
        unsigned int timeDelivered:1;
        unsigned int timeExpressiveSentPlayed:1;
        unsigned int timePlayed:1;
        unsigned int timeRead:1;
        unsigned int associatedMessageRangeLength:1;
        unsigned int associatedMessageRangeLocation:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) unsigned int associatedMessageRangeLength; // @synthesize associatedMessageRangeLength=_associatedMessageRangeLength;
@property(nonatomic) unsigned int associatedMessageRangeLocation; // @synthesize associatedMessageRangeLocation=_associatedMessageRangeLocation;
@property(retain, nonatomic) NSString *associatedMessageGuid; // @synthesize associatedMessageGuid=_associatedMessageGuid;
@property(nonatomic) long long associatedMessageType; // @synthesize associatedMessageType=_associatedMessageType;
@property(nonatomic) unsigned long long expireState; // @synthesize expireState=_expireState;
@property(nonatomic) unsigned long long timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long timeExpressiveSentPlayed; // @synthesize timeExpressiveSentPlayed=_timeExpressiveSentPlayed;
@property(nonatomic) unsigned long long timePlayed; // @synthesize timePlayed=_timePlayed;
@property(nonatomic) unsigned long long timeRead; // @synthesize timeRead=_timeRead;
@property(retain, nonatomic) NSString *expressiveSendId; // @synthesize expressiveSendId=_expressiveSendId;
@property(retain, nonatomic) NSData *messageSummaryInfo; // @synthesize messageSummaryInfo=_messageSummaryInfo;
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(retain, nonatomic) NSString *baloonBundleId; // @synthesize baloonBundleId=_baloonBundleId;
@property(retain, nonatomic) NSData *messageBodyData; // @synthesize messageBodyData=_messageBodyData;
@property(retain, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSString *messageSubject; // @synthesize messageSubject=_messageSubject;
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
@property(nonatomic) BOOL hasAssociatedMessageRangeLength;
@property(nonatomic) BOOL hasAssociatedMessageRangeLocation;
@property(readonly, nonatomic) BOOL hasAssociatedMessageGuid;
@property(nonatomic) BOOL hasAssociatedMessageType;
@property(nonatomic) BOOL hasExpireState;
@property(nonatomic) BOOL hasTimeDelivered;
@property(readonly, nonatomic) BOOL hasPadding;
@property(nonatomic) BOOL hasTimeExpressiveSentPlayed;
@property(nonatomic) BOOL hasTimePlayed;
@property(nonatomic) BOOL hasTimeRead;
@property(readonly, nonatomic) BOOL hasExpressiveSendId;
@property(readonly, nonatomic) BOOL hasMessageSummaryInfo;
@property(readonly, nonatomic) BOOL hasPayloadData;
@property(readonly, nonatomic) BOOL hasBaloonBundleId;
@property(readonly, nonatomic) BOOL hasMessageBodyData;
@property(readonly, nonatomic) BOOL hasMessageBody;
@property(readonly, nonatomic) BOOL hasMessageSubject;
@property(nonatomic) BOOL hasVersion;
- (void)dealloc;

@end

