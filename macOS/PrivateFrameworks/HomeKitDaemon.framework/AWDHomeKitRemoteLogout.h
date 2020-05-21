//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitRemoteLogout : PBCodable <NSCopying>
{
    unsigned long long _delay;
    unsigned long long _timestamp;
    int _requester;
    int _resultErrorCode;
    struct {
        unsigned int delay:1;
        unsigned int timestamp:1;
        unsigned int requester:1;
        unsigned int resultErrorCode:1;
    } _has;
}

@property(nonatomic) unsigned long long delay; // @synthesize delay=_delay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRequester:(id)arg1;
- (id)requesterAsString:(int)arg1;
@property(nonatomic) BOOL hasRequester;
@property(nonatomic) int requester; // @synthesize requester=_requester;
@property(nonatomic) BOOL hasDelay;
@property(nonatomic) BOOL hasResultErrorCode;
@property(nonatomic) BOOL hasTimestamp;

@end

