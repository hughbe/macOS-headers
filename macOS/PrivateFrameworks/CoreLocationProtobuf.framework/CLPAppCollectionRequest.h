//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSData, NSMutableArray;

@interface CLPAppCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_appLocations;
    CLPMeta *_meta;
    NSData *_signature;
}

+ (Class)appLocationType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *appLocations; // @synthesize appLocations=_appLocations;
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
- (id)appLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)appLocationsCount;
- (void)addAppLocation:(id)arg1;
- (void)clearAppLocations;

@end

