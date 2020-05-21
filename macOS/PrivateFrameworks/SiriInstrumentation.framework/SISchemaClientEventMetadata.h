//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaClientEventMetadata : PBCodable
{
    NSData *_turnID;
    NSData *_siriDeviceID;
    NSString *_eventGeneratedTimestampRefId;
    long long _eventGeneratedRelativeToBootTimeTimestampNs;
}

- (void).cxx_destruct;
@property(nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs; // @synthesize eventGeneratedRelativeToBootTimeTimestampNs=_eventGeneratedRelativeToBootTimeTimestampNs;
@property(copy, nonatomic) NSString *eventGeneratedTimestampRefId; // @synthesize eventGeneratedTimestampRefId=_eventGeneratedTimestampRefId;
@property(copy, nonatomic) NSData *siriDeviceID; // @synthesize siriDeviceID=_siriDeviceID;
@property(copy, nonatomic) NSData *turnID; // @synthesize turnID=_turnID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

