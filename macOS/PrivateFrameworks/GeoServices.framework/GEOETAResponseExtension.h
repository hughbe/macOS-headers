//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOETAServiceResponseSummary;

__attribute__((visibility("hidden")))
@interface GEOETAResponseExtension : PBCodable <NSCopying>
{
    unsigned long long _debugServerLatencyMs;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    CDStruct_8a83bcf8 _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasDebugServerLatencyMs;
@property(nonatomic) unsigned long long debugServerLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) BOOL hasEtaServiceSummary;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

