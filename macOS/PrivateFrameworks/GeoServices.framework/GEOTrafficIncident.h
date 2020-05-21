//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncident : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _alertCCodes;
    CDStruct_95bda58d _types;
    NSString *_area;
    NSString *_crossStreetName;
    unsigned long long _durationSeconds;
    NSMutableArray *_incidentDescriptions;
    NSString *_incidentId;
    NSMutableArray *_laneMessages;
    GEOLatLng *_location;
    NSString *_name;
    NSMutableArray *_paths;
    NSString *_primaryStreetName;
    unsigned long long _startTime;
    unsigned long long _updateTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _advisoryType;
    int _color;
    unsigned int _delaySeconds;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoom;
    unsigned int _minZoom;
    float _speedKph;
    int _vendor;
    BOOL _curated;
    BOOL _hidden;
    BOOL _ignored;
    BOOL _navigationAlert;
    struct {
        unsigned int has_durationSeconds:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_advisoryType:1;
        unsigned int has_color:1;
        unsigned int has_delaySeconds:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_maxZoom:1;
        unsigned int has_minZoom:1;
        unsigned int has_speedKph:1;
        unsigned int has_vendor:1;
        unsigned int has_curated:1;
        unsigned int has_hidden:1;
        unsigned int has_ignored:1;
        unsigned int has_navigationAlert:1;
        unsigned int read_alertCCodes:1;
        unsigned int read_types:1;
        unsigned int read_area:1;
        unsigned int read_crossStreetName:1;
        unsigned int read_incidentDescriptions:1;
        unsigned int read_incidentId:1;
        unsigned int read_laneMessages:1;
        unsigned int read_location:1;
        unsigned int read_name:1;
        unsigned int read_paths:1;
        unsigned int read_primaryStreetName:1;
        unsigned int wrote_alertCCodes:1;
        unsigned int wrote_types:1;
        unsigned int wrote_area:1;
        unsigned int wrote_crossStreetName:1;
        unsigned int wrote_durationSeconds:1;
        unsigned int wrote_incidentDescriptions:1;
        unsigned int wrote_incidentId:1;
        unsigned int wrote_laneMessages:1;
        unsigned int wrote_location:1;
        unsigned int wrote_name:1;
        unsigned int wrote_paths:1;
        unsigned int wrote_primaryStreetName:1;
        unsigned int wrote_startTime:1;
        unsigned int wrote_updateTime:1;
        unsigned int wrote_advisoryType:1;
        unsigned int wrote_color:1;
        unsigned int wrote_delaySeconds:1;
        unsigned int wrote_laneClosureCount:1;
        unsigned int wrote_laneClosureType:1;
        unsigned int wrote_maxZoom:1;
        unsigned int wrote_minZoom:1;
        unsigned int wrote_speedKph:1;
        unsigned int wrote_vendor:1;
        unsigned int wrote_curated:1;
        unsigned int wrote_hidden:1;
        unsigned int wrote_ignored:1;
        unsigned int wrote_navigationAlert:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)laneMessagesType;
+ (Class)incidentDescriptionType;
+ (Class)pathType;
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
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (int)StringAsAdvisoryType:(id)arg1;
- (id)advisoryTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAdvisoryType;
@property(nonatomic) int advisoryType;
@property(retain, nonatomic) NSString *area;
@property(readonly, nonatomic) BOOL hasArea;
- (void)_readArea;
@property(nonatomic) BOOL hasIgnored;
@property(nonatomic) BOOL ignored;
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) BOOL hasColor;
@property(nonatomic) int color;
@property(nonatomic) BOOL hasCurated;
@property(nonatomic) BOOL curated;
- (int)StringAsVendor:(id)arg1;
- (id)vendorAsString:(int)arg1;
@property(nonatomic) BOOL hasVendor;
@property(nonatomic) int vendor;
- (id)laneMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneMessagesCount;
- (void)_addNoFlagsLaneMessages:(id)arg1;
- (void)addLaneMessages:(id)arg1;
- (void)clearLaneMessages;
@property(retain, nonatomic) NSMutableArray *laneMessages;
- (void)_readLaneMessages;
@property(retain, nonatomic) NSString *crossStreetName;
@property(readonly, nonatomic) BOOL hasCrossStreetName;
- (void)_readCrossStreetName;
@property(retain, nonatomic) NSString *primaryStreetName;
@property(readonly, nonatomic) BOOL hasPrimaryStreetName;
- (void)_readPrimaryStreetName;
@property(nonatomic) BOOL hasMaxZoom;
@property(nonatomic) unsigned int maxZoom;
@property(nonatomic) BOOL hasMinZoom;
@property(nonatomic) unsigned int minZoom;
@property(nonatomic) BOOL hasSpeedKph;
@property(nonatomic) float speedKph;
@property(nonatomic) BOOL hasHidden;
@property(nonatomic) BOOL hidden;
- (void)setAlertCCodes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)alertCCodeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAlertCCode:(unsigned int)arg1;
- (void)addAlertCCode:(unsigned int)arg1;
- (void)clearAlertCCodes;
@property(readonly, nonatomic) unsigned int *alertCCodes;
@property(readonly, nonatomic) unsigned long long alertCCodesCount;
- (void)_readAlertCCodes;
@property(nonatomic) BOOL hasDelaySeconds;
@property(nonatomic) unsigned int delaySeconds;
- (int)StringAsLaneClosureType:(id)arg1;
- (id)laneClosureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLaneClosureType;
@property(nonatomic) int laneClosureType;
@property(nonatomic) BOOL hasLaneClosureCount;
@property(nonatomic) unsigned int laneClosureCount;
@property(nonatomic) BOOL hasNavigationAlert;
@property(nonatomic) BOOL navigationAlert;
@property(nonatomic) BOOL hasDurationSeconds;
@property(nonatomic) unsigned long long durationSeconds;
@property(nonatomic) BOOL hasUpdateTime;
@property(nonatomic) unsigned long long updateTime;
@property(nonatomic) BOOL hasStartTime;
@property(nonatomic) unsigned long long startTime;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(retain, nonatomic) NSString *incidentId;
@property(readonly, nonatomic) BOOL hasIncidentId;
- (void)_readIncidentId;
- (id)incidentDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentDescriptionsCount;
- (void)_addNoFlagsIncidentDescription:(id)arg1;
- (void)addIncidentDescription:(id)arg1;
- (void)clearIncidentDescriptions;
@property(retain, nonatomic) NSMutableArray *incidentDescriptions;
- (void)_readIncidentDescriptions;
- (int)StringAsTypes:(id)arg1;
- (id)typesAsString:(int)arg1;
- (void)setTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)typeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsType:(int)arg1;
- (void)addType:(int)arg1;
- (void)clearTypes;
@property(readonly, nonatomic) int *types;
@property(readonly, nonatomic) unsigned long long typesCount;
- (void)_readTypes;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)_addNoFlagsPath:(id)arg1;
- (void)addPath:(id)arg1;
- (void)clearPaths;
@property(retain, nonatomic) NSMutableArray *paths;
- (void)_readPaths;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

