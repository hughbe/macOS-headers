//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientMetrics, GEOETAServiceResponseSummary, GEOPDDatasetABStatus, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrivalParameters;
    NSMutableArray *_cameras;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    unsigned long long _debugServerLatencyMs;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    NSData *_responseId;
    NSMutableArray *_routes;
    NSData *_sessionState;
    NSMutableArray *_trafficSignals;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_debugServerLatencyMs:1;
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalParameters:1;
        unsigned int read_cameras:1;
        unsigned int read_clientMetrics:1;
        unsigned int read_datasetAbStatus:1;
        unsigned int read_debugData:1;
        unsigned int read_etaServiceSummary:1;
        unsigned int read_responseId:1;
        unsigned int read_routes:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficSignals:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_arrivalParameters:1;
        unsigned int wrote_cameras:1;
        unsigned int wrote_clientMetrics:1;
        unsigned int wrote_datasetAbStatus:1;
        unsigned int wrote_debugData:1;
        unsigned int wrote_debugServerLatencyMs:1;
        unsigned int wrote_etaServiceSummary:1;
        unsigned int wrote_responseId:1;
        unsigned int wrote_routes:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_trafficSignals:1;
        unsigned int wrote_status:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)arrivalParametersType;
+ (Class)trafficSignalType;
+ (Class)cameraType;
+ (Class)routeType;
- (void).cxx_destruct;
@property(retain, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) BOOL hasClientMetrics;
- (void)_readClientMetrics;
@property(nonatomic) BOOL hasDebugServerLatencyMs;
@property(nonatomic) unsigned long long debugServerLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) BOOL hasEtaServiceSummary;
- (void)_readEtaServiceSummary;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)arrivalParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrivalParametersCount;
- (void)_addNoFlagsArrivalParameters:(id)arg1;
- (void)addArrivalParameters:(id)arg1;
- (void)clearArrivalParameters;
@property(retain, nonatomic) NSMutableArray *arrivalParameters;
- (void)_readArrivalParameters;
- (id)trafficSignalAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSignalsCount;
- (void)_addNoFlagsTrafficSignal:(id)arg1;
- (void)addTrafficSignal:(id)arg1;
- (void)clearTrafficSignals;
@property(retain, nonatomic) NSMutableArray *trafficSignals;
- (void)_readTrafficSignals;
@property(retain, nonatomic) NSString *debugData;
@property(readonly, nonatomic) BOOL hasDebugData;
- (void)_readDebugData;
@property(retain, nonatomic) NSData *responseId;
@property(readonly, nonatomic) BOOL hasResponseId;
- (void)_readResponseId;
- (id)cameraAtIndex:(unsigned long long)arg1;
- (unsigned long long)camerasCount;
- (void)_addNoFlagsCamera:(id)arg1;
- (void)addCamera:(id)arg1;
- (void)clearCameras;
@property(retain, nonatomic) NSMutableArray *cameras;
- (void)_readCameras;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property(readonly, nonatomic) BOOL hasDatasetAbStatus;
- (void)_readDatasetAbStatus;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) BOOL hasSessionState;
- (void)_readSessionState;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)_addNoFlagsRoute:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
@property(retain, nonatomic) NSMutableArray *routes;
- (void)_readRoutes;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
- (id)initWithData:(id)arg1;
- (id)init;

@end

