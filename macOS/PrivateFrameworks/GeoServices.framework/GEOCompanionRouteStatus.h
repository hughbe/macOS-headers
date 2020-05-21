//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOLocation, NSArray, NSData, PBDataReader;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _selectedRideIndexs;
    GEOLocation *_location;
    NSData *_routeID;
    GEOLatLng *_routeMatchCoordinate;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    int _hapticsType;
    unsigned int _remainingTime;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    unsigned int _stepID;
    BOOL _guidancePromptsEnabled;
    BOOL _isConnectedToCarplay;
    BOOL _lowGuidanceNavigation;
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_distanceRemainingOnRoute:1;
        unsigned int has_distanceToManeuver:1;
        unsigned int has_distanceToRoute:1;
        unsigned int has_feedbackType:1;
        unsigned int has_hapticsType:1;
        unsigned int has_remainingTime:1;
        unsigned int has_routeLocationIndex:1;
        unsigned int has_routeLocationOffset:1;
        unsigned int has_stepID:1;
        unsigned int has_guidancePromptsEnabled:1;
        unsigned int has_isConnectedToCarplay:1;
        unsigned int has_lowGuidanceNavigation:1;
        unsigned int read_selectedRideIndexs:1;
        unsigned int read_location:1;
        unsigned int read_routeID:1;
        unsigned int read_routeMatchCoordinate:1;
        unsigned int wrote_selectedRideIndexs:1;
        unsigned int wrote_location:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_routeMatchCoordinate:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_distanceRemainingOnRoute:1;
        unsigned int wrote_distanceToManeuver:1;
        unsigned int wrote_distanceToRoute:1;
        unsigned int wrote_feedbackType:1;
        unsigned int wrote_hapticsType:1;
        unsigned int wrote_remainingTime:1;
        unsigned int wrote_routeLocationIndex:1;
        unsigned int wrote_routeLocationOffset:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_guidancePromptsEnabled:1;
        unsigned int wrote_isConnectedToCarplay:1;
        unsigned int wrote_lowGuidanceNavigation:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasIsConnectedToCarplay;
@property(nonatomic) BOOL isConnectedToCarplay;
- (int)StringAsHapticsType:(id)arg1;
- (id)hapticsTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasHapticsType;
@property(nonatomic) int hapticsType;
@property(nonatomic) BOOL hasLowGuidanceNavigation;
@property(nonatomic) BOOL lowGuidanceNavigation;
- (void)setSelectedRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsSelectedRideIndex:(unsigned int)arg1;
- (void)addSelectedRideIndex:(unsigned int)arg1;
- (void)clearSelectedRideIndexs;
@property(readonly, nonatomic) unsigned int *selectedRideIndexs;
@property(readonly, nonatomic) unsigned long long selectedRideIndexsCount;
- (void)_readSelectedRideIndexs;
@property(nonatomic) BOOL hasGuidancePromptsEnabled;
@property(nonatomic) BOOL guidancePromptsEnabled;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) BOOL hasRouteID;
- (void)_readRouteID;
@property(retain, nonatomic) GEOLatLng *routeMatchCoordinate;
@property(readonly, nonatomic) BOOL hasRouteMatchCoordinate;
- (void)_readRouteMatchCoordinate;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) BOOL hasRouteLocationOffset;
@property(nonatomic) float routeLocationOffset;
@property(nonatomic) BOOL hasRouteLocationIndex;
@property(nonatomic) unsigned int routeLocationIndex;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(nonatomic) BOOL hasRemainingTime;
@property(nonatomic) unsigned int remainingTime;
@property(nonatomic) BOOL hasDistanceRemainingOnRoute;
@property(nonatomic) unsigned int distanceRemainingOnRoute;
@property(nonatomic) BOOL hasDistanceToRoute;
@property(nonatomic) unsigned int distanceToRoute;
@property(nonatomic) BOOL hasDistanceToManeuver;
@property(nonatomic) unsigned int distanceToManeuver;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) unsigned int stepID;
- (int)StringAsFeedbackType:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedbackType;
@property(nonatomic) int feedbackType;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *selectedRideIndices;
@property(readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property(readonly, nonatomic) BOOL hasEffectiveDistanceToManeuver;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;
@property(readonly, nonatomic) unsigned int effectiveStepID;
@property(readonly, nonatomic) BOOL hasEffectiveStepID;
@property(readonly, nonatomic) BOOL isRecalculating;
@property(readonly, nonatomic) BOOL isNavigating;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;

@end

