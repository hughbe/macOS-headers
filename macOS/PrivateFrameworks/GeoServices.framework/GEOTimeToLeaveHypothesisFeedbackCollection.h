//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable <NSCopying>
{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _uiNotification;
    struct {
        unsigned int has_earliestArrivalOffset:1;
        unsigned int has_earliestDepartureOffset:1;
        unsigned int has_latestArrivalOffset:1;
        unsigned int has_latestDepartureOffset:1;
        unsigned int has_arrival:1;
        unsigned int has_departure:1;
        unsigned int has_numberOfReroutes:1;
        unsigned int has_uiNotification:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasLatestArrivalOffset;
@property(nonatomic) double latestArrivalOffset;
@property(nonatomic) BOOL hasEarliestArrivalOffset;
@property(nonatomic) double earliestArrivalOffset;
@property(nonatomic) BOOL hasLatestDepartureOffset;
@property(nonatomic) double latestDepartureOffset;
@property(nonatomic) BOOL hasEarliestDepartureOffset;
@property(nonatomic) double earliestDepartureOffset;
- (int)StringAsUiNotification:(id)arg1;
- (id)uiNotificationAsString:(int)arg1;
@property(nonatomic) BOOL hasUiNotification;
@property(nonatomic) int uiNotification;
@property(nonatomic) BOOL hasNumberOfReroutes;
@property(nonatomic) unsigned int numberOfReroutes;
- (int)StringAsArrival:(id)arg1;
- (id)arrivalAsString:(int)arg1;
@property(nonatomic) BOOL hasArrival;
@property(nonatomic) int arrival;
- (int)StringAsDeparture:(id)arg1;
- (id)departureAsString:(int)arg1;
@property(nonatomic) BOOL hasDeparture;
@property(nonatomic) int departure;

@end

