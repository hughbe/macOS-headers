//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOETAServiceResponseSummary : PBCodable <NSCopying>
{
    struct GEOSessionID _responseUuid;
    NSMutableArray *_routeInfos;
    int _status;
    BOOL _resultsApplied;
    struct {
        unsigned int has_responseUuid:1;
        unsigned int has_status:1;
        unsigned int has_resultsApplied:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)routeInfoType;
- (void).cxx_destruct;
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
- (id)routeInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)routeInfosCount;
- (void)addRouteInfo:(id)arg1;
- (void)clearRouteInfos;
@property(retain, nonatomic) NSMutableArray *routeInfos;
@property(nonatomic) BOOL hasResponseUuid;
@property(nonatomic) struct GEOSessionID responseUuid;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(nonatomic) BOOL hasResultsApplied;
@property(nonatomic) BOOL resultsApplied;

@end

