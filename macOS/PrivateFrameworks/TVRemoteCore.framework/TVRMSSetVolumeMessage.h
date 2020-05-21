//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TVRemoteCore/NSCopying-Protocol.h>

@interface TVRMSSetVolumeMessage : PBCodable <NSCopying>
{
    int _sessionIdentifier;
    float _volume;
    CDStruct_77dc7163 _has;
}

@property(nonatomic) int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSessionIdentifier;
@property(nonatomic) BOOL hasVolume;

@end

