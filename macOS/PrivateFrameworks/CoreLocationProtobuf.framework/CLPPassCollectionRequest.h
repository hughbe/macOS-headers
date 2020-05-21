//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSData, NSMutableArray;

@interface CLPPassCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;
    NSMutableArray *_passLocations;
    NSData *_signature;
}

+ (Class)passLocationType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *passLocations; // @synthesize passLocations=_passLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSignature;
- (id)passLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)passLocationsCount;
- (void)addPassLocation:(id)arg1;
- (void)clearPassLocations;

@end

