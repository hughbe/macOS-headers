//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOLocation, GEOPDABClientDatasetMetadata, GEORouteAttributes, GEOTFTrafficSnapshot, GEOTrafficTrafficApiResponse, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint _clientTimepoint;
    struct GEOSessionID _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_destinationWaypointTypeds;
    NSData *_directionsResponseID;
    NSString *_requestingAppId;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_routes;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    GEOTrafficTrafficApiResponse *_trafficApiResponse;
    NSMutableArray *_trafficSnapshotIds;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    NSData *_tripID;
    NSString *_xpcUuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxAlternateRouteCount;
    unsigned int _previouslyRejectedRerouteSavings;
    int _rerouteStatus;
    BOOL _includeBetterRouteSuggestion;
    BOOL _needServerLatency;
    BOOL _useClientTimepointAsNow;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int has_clientTimepoint:1;
        unsigned int has_sessionID:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_maxAlternateRouteCount:1;
        unsigned int has_previouslyRejectedRerouteSavings:1;
        unsigned int has_rerouteStatus:1;
        unsigned int has_includeBetterRouteSuggestion:1;
        unsigned int has_needServerLatency:1;
        unsigned int has_useClientTimepointAsNow:1;
        unsigned int has_useLiveTrafficAsFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_additionalEnabledMarkets:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_commonOptions:1;
        unsigned int read_currentUserLocation:1;
        unsigned int read_destinationWaypointTypeds:1;
        unsigned int read_directionsResponseID:1;
        unsigned int read_requestingAppId:1;
        unsigned int read_routeAttributes:1;
        unsigned int read_routes:1;
        unsigned int read_serviceTags:1;
        unsigned int read_sessionState:1;
        unsigned int read_trafficApiResponse:1;
        unsigned int read_trafficSnapshotIds:1;
        unsigned int read_trafficSnapshot:1;
        unsigned int read_tripID:1;
        unsigned int read_xpcUuid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientTimepoint:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_additionalEnabledMarkets:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_commonOptions:1;
        unsigned int wrote_currentUserLocation:1;
        unsigned int wrote_destinationWaypointTypeds:1;
        unsigned int wrote_directionsResponseID:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_routeAttributes:1;
        unsigned int wrote_routes:1;
        unsigned int wrote_serviceTags:1;
        unsigned int wrote_sessionRelativeTimestamp:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_trafficApiResponse:1;
        unsigned int wrote_trafficSnapshotIds:1;
        unsigned int wrote_trafficSnapshot:1;
        unsigned int wrote_tripID:1;
        unsigned int wrote_xpcUuid:1;
        unsigned int wrote_maxAlternateRouteCount:1;
        unsigned int wrote_previouslyRejectedRerouteSavings:1;
        unsigned int wrote_rerouteStatus:1;
        unsigned int wrote_includeBetterRouteSuggestion:1;
        unsigned int wrote_needServerLatency:1;
        unsigned int wrote_useClientTimepointAsNow:1;
        unsigned int wrote_useLiveTrafficAsFallback:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)trafficSnapshotIdsType;
+ (Class)serviceTagType;
+ (Class)destinationWaypointTypedType;
+ (Class)routeType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *xpcUuid;
@property(readonly, nonatomic) BOOL hasXpcUuid;
- (void)_readXpcUuid;
@property(nonatomic) BOOL hasNeedServerLatency;
@property(nonatomic) BOOL needServerLatency;
@property(nonatomic) BOOL hasUseClientTimepointAsNow;
@property(nonatomic) BOOL useClientTimepointAsNow;
@property(nonatomic) BOOL hasClientTimepoint;
@property(nonatomic) struct GEOTimepoint clientTimepoint;
@property(nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property(nonatomic) BOOL useLiveTrafficAsFallback;
@property(retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property(readonly, nonatomic) BOOL hasTrafficSnapshot;
- (void)_readTrafficSnapshot;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSnapshotIdsCount;
- (void)_addNoFlagsTrafficSnapshotIds:(id)arg1;
- (void)addTrafficSnapshotIds:(id)arg1;
- (void)clearTrafficSnapshotIds;
@property(retain, nonatomic) NSMutableArray *trafficSnapshotIds;
- (void)_readTrafficSnapshotIds;
@property(retain, nonatomic) GEOTrafficTrafficApiResponse *trafficApiResponse;
@property(readonly, nonatomic) BOOL hasTrafficApiResponse;
- (void)_readTrafficApiResponse;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(retain, nonatomic) NSMutableArray *serviceTags;
- (void)_readServiceTags;
@property(retain, nonatomic) NSString *requestingAppId;
@property(readonly, nonatomic) BOOL hasRequestingAppId;
- (void)_readRequestingAppId;
@property(retain, nonatomic) NSData *tripID;
@property(readonly, nonatomic) BOOL hasTripID;
- (void)_readTripID;
@property(nonatomic) BOOL hasMaxAlternateRouteCount;
@property(nonatomic) unsigned int maxAlternateRouteCount;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property(readonly, nonatomic) BOOL hasAbClientMetadata;
- (void)_readAbClientMetadata;
@property(retain, nonatomic) GEOCommonOptions *commonOptions;
@property(readonly, nonatomic) BOOL hasCommonOptions;
- (void)_readCommonOptions;
- (int)StringAsRerouteStatus:(id)arg1;
- (id)rerouteStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasRerouteStatus;
@property(nonatomic) int rerouteStatus;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) BOOL hasSessionState;
- (void)_readSessionState;
@property(nonatomic) BOOL hasPreviouslyRejectedRerouteSavings;
@property(nonatomic) unsigned int previouslyRejectedRerouteSavings;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)_addNoFlagsDestinationWaypointTyped:(id)arg1;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
- (void)_readDestinationWaypointTypeds;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property(readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
- (void)_readAdditionalEnabledMarkets;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) double sessionRelativeTimestamp;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(retain, nonatomic) NSData *directionsResponseID;
@property(readonly, nonatomic) BOOL hasDirectionsResponseID;
- (void)_readDirectionsResponseID;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
- (void)_readClientCapabilities;
- (id)routeAtIndex:(unsigned long long)arg1;
- (unsigned long long)routesCount;
- (void)_addNoFlagsRoute:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
@property(retain, nonatomic) NSMutableArray *routes;
- (void)_readRoutes;
@property(nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property(nonatomic) BOOL includeBetterRouteSuggestion;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) BOOL hasRouteAttributes;
- (void)_readRouteAttributes;
@property(retain, nonatomic) GEOLocation *currentUserLocation;
@property(readonly, nonatomic) BOOL hasCurrentUserLocation;
- (void)_readCurrentUserLocation;
- (id)initWithData:(id)arg1;
- (id)init;

@end

