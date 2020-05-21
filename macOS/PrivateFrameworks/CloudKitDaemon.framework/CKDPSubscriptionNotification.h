//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPSubscriptionNotificationAlert, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPSubscriptionNotification : PBCodable <NSCopying>
{
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    NSString *_collapseIdKey;
    BOOL _shouldBadge;
    BOOL _shouldSendContentAvailable;
    BOOL _shouldSendMutableContent;
    struct {
        unsigned int shouldBadge:1;
        unsigned int shouldSendContentAvailable:1;
        unsigned int shouldSendMutableContent:1;
    } _has;
}

+ (Class)additionalFieldsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *collapseIdKey; // @synthesize collapseIdKey=_collapseIdKey;
@property(nonatomic) BOOL shouldSendMutableContent; // @synthesize shouldSendMutableContent=_shouldSendMutableContent;
@property(nonatomic) BOOL shouldSendContentAvailable; // @synthesize shouldSendContentAvailable=_shouldSendContentAvailable;
@property(retain, nonatomic) NSMutableArray *additionalFields; // @synthesize additionalFields=_additionalFields;
@property(nonatomic) BOOL shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(retain, nonatomic) CKDPSubscriptionNotificationAlert *alert; // @synthesize alert=_alert;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCollapseIdKey;
@property(nonatomic) BOOL hasShouldSendMutableContent;
@property(nonatomic) BOOL hasShouldSendContentAvailable;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalFieldsCount;
- (void)addAdditionalFields:(id)arg1;
- (void)clearAdditionalFields;
@property(nonatomic) BOOL hasShouldBadge;
@property(readonly, nonatomic) BOOL hasAlert;

@end

