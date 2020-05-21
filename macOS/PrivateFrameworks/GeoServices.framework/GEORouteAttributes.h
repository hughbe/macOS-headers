//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEODestinationInfo, GEOTransitOptions, GEOWalkingOptions, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _additionalTransportTypes;
    CDStruct_95bda58d _uiContexts;
    struct GEOTimepoint _timepoint;
    GEOAutomobileOptions *_automobileOptions;
    GEODestinationInfo *_destinationInfo;
    NSString *_phoneticLocaleIdentifier;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _basicPointsToBeIncluded;
    int _destinationType;
    int _mainTransportType;
    int _trafficType;
    unsigned int _walkingLimitMeters;
    BOOL _directZilchByLaneFlowlines;
    BOOL _enableExperimentalMode;
    BOOL _includeContingencyRoutes;
    BOOL _includeHistoricTravelTime;
    BOOL _includeLaneGuidance;
    BOOL _includeManeuverIcons;
    BOOL _includePhonetics;
    BOOL _includeTrafficAlongRoute;
    BOOL _includeTrafficIncidents;
    BOOL _includeZilchPoints;
    BOOL _includeCrossLanguagePhonetics;
    BOOL _includeLaneWidths;
    BOOL _useMetricThreshold;
    struct {
        unsigned int has_timepoint:1;
        unsigned int has_basicPointsToBeIncluded:1;
        unsigned int has_destinationType:1;
        unsigned int has_mainTransportType:1;
        unsigned int has_trafficType:1;
        unsigned int has_walkingLimitMeters:1;
        unsigned int has_directZilchByLaneFlowlines:1;
        unsigned int has_enableExperimentalMode:1;
        unsigned int has_includeContingencyRoutes:1;
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeLaneGuidance:1;
        unsigned int has_includeManeuverIcons:1;
        unsigned int has_includePhonetics:1;
        unsigned int has_includeTrafficAlongRoute:1;
        unsigned int has_includeTrafficIncidents:1;
        unsigned int has_includeZilchPoints:1;
        unsigned int has_includeCrossLanguagePhonetics:1;
        unsigned int has_includeLaneWidths:1;
        unsigned int has_useMetricThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_additionalTransportTypes:1;
        unsigned int read_uiContexts:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_destinationInfo:1;
        unsigned int read_phoneticLocaleIdentifier:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_additionalTransportTypes:1;
        unsigned int wrote_uiContexts:1;
        unsigned int wrote_timepoint:1;
        unsigned int wrote_automobileOptions:1;
        unsigned int wrote_destinationInfo:1;
        unsigned int wrote_phoneticLocaleIdentifier:1;
        unsigned int wrote_transitOptions:1;
        unsigned int wrote_walkingOptions:1;
        unsigned int wrote_basicPointsToBeIncluded:1;
        unsigned int wrote_destinationType:1;
        unsigned int wrote_mainTransportType:1;
        unsigned int wrote_trafficType:1;
        unsigned int wrote_walkingLimitMeters:1;
        unsigned int wrote_directZilchByLaneFlowlines:1;
        unsigned int wrote_enableExperimentalMode:1;
        unsigned int wrote_includeContingencyRoutes:1;
        unsigned int wrote_includeHistoricTravelTime:1;
        unsigned int wrote_includeLaneGuidance:1;
        unsigned int wrote_includeManeuverIcons:1;
        unsigned int wrote_includePhonetics:1;
        unsigned int wrote_includeTrafficAlongRoute:1;
        unsigned int wrote_includeTrafficIncidents:1;
        unsigned int wrote_includeZilchPoints:1;
        unsigned int wrote_includeCrossLanguagePhonetics:1;
        unsigned int wrote_includeLaneWidths:1;
        unsigned int wrote_useMetricThreshold:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)defaultRouteAttributes;
- (void).cxx_destruct;
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
@property(nonatomic) BOOL hasIncludeLaneWidths;
@property(nonatomic) BOOL includeLaneWidths;
@property(nonatomic) BOOL hasDirectZilchByLaneFlowlines;
@property(nonatomic) BOOL directZilchByLaneFlowlines;
@property(nonatomic) BOOL hasIncludeCrossLanguagePhonetics;
@property(nonatomic) BOOL includeCrossLanguagePhonetics;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
@property(nonatomic) int destinationType;
@property(retain, nonatomic) GEODestinationInfo *destinationInfo;
@property(readonly, nonatomic) BOOL hasDestinationInfo;
- (void)_readDestinationInfo;
@property(nonatomic) BOOL hasEnableExperimentalMode;
@property(nonatomic) BOOL enableExperimentalMode;
@property(nonatomic) BOOL hasUseMetricThreshold;
@property(nonatomic) BOOL useMetricThreshold;
- (int)StringAsUiContexts:(id)arg1;
- (id)uiContextsAsString:(int)arg1;
- (void)setUiContexts:(int *)arg1 count:(unsigned long long)arg2;
- (int)uiContextAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsUiContext:(int)arg1;
- (void)addUiContext:(int)arg1;
- (void)clearUiContexts;
@property(readonly, nonatomic) int *uiContexts;
@property(readonly, nonatomic) unsigned long long uiContextsCount;
- (void)_readUiContexts;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property(readonly, nonatomic) BOOL hasWalkingOptions;
- (void)_readWalkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(readonly, nonatomic) BOOL hasTransitOptions;
- (void)_readTransitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property(readonly, nonatomic) BOOL hasAutomobileOptions;
- (void)_readAutomobileOptions;
- (int)StringAsAdditionalTransportTypes:(id)arg1;
- (id)additionalTransportTypesAsString:(int)arg1;
- (void)setAdditionalTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAdditionalTransportType:(int)arg1;
- (void)addAdditionalTransportType:(int)arg1;
- (void)clearAdditionalTransportTypes;
@property(readonly, nonatomic) int *additionalTransportTypes;
@property(readonly, nonatomic) unsigned long long additionalTransportTypesCount;
- (void)_readAdditionalTransportTypes;
@property(nonatomic) BOOL hasWalkingLimitMeters;
@property(nonatomic) unsigned int walkingLimitMeters;
@property(nonatomic) BOOL hasIncludeTrafficIncidents;
@property(nonatomic) BOOL includeTrafficIncidents;
@property(nonatomic) BOOL hasIncludeHistoricTravelTime;
@property(nonatomic) BOOL includeHistoricTravelTime;
@property(nonatomic) BOOL hasTimepoint;
@property(nonatomic) struct GEOTimepoint timepoint;
@property(nonatomic) BOOL hasIncludeTrafficAlongRoute;
@property(nonatomic) BOOL includeTrafficAlongRoute;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
- (void)_readPhoneticLocaleIdentifier;
- (int)StringAsTrafficType:(id)arg1;
- (id)trafficTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTrafficType;
@property(nonatomic) int trafficType;
- (int)StringAsBasicPointsToBeIncluded:(id)arg1;
- (id)basicPointsToBeIncludedAsString:(int)arg1;
@property(nonatomic) BOOL hasBasicPointsToBeIncluded;
@property(nonatomic) int basicPointsToBeIncluded;
@property(nonatomic) BOOL hasIncludeLaneGuidance;
@property(nonatomic) BOOL includeLaneGuidance;
@property(nonatomic) BOOL hasIncludeContingencyRoutes;
@property(nonatomic) BOOL includeContingencyRoutes;
@property(nonatomic) BOOL hasIncludeZilchPoints;
@property(nonatomic) BOOL includeZilchPoints;
@property(nonatomic) BOOL hasIncludeManeuverIcons;
@property(nonatomic) BOOL includeManeuverIcons;
@property(nonatomic) BOOL hasIncludePhonetics;
@property(nonatomic) BOOL includePhonetics;
- (int)StringAsMainTransportType:(id)arg1;
- (id)mainTransportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMainTransportType;
@property(nonatomic) int mainTransportType;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

