//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOAlightNotificationFeedback : PBCodable <NSCopying>
{
    unsigned long long _alightStopMuid;
    double _arrivedAtTimestamp;
    double _lastDetectedLocationHorizontalAccuracy;
    double _lastDetectedLocationTimestamp;
    unsigned long long _lineMuid;
    unsigned long long _previousStopMuid;
    double _triggeredTimestamp;
    int _lastDetectedLocationTraversalPercent;
    unsigned int _stepID;
    int _triggeredLocationTraversalPercent;
    int _trigger;
    BOOL _arrivalDetected;
    BOOL _displayed;
    BOOL _triggered;
    struct {
        unsigned int has_alightStopMuid:1;
        unsigned int has_arrivedAtTimestamp:1;
        unsigned int has_lastDetectedLocationHorizontalAccuracy:1;
        unsigned int has_lastDetectedLocationTimestamp:1;
        unsigned int has_lineMuid:1;
        unsigned int has_previousStopMuid:1;
        unsigned int has_triggeredTimestamp:1;
        unsigned int has_lastDetectedLocationTraversalPercent:1;
        unsigned int has_stepID:1;
        unsigned int has_triggeredLocationTraversalPercent:1;
        unsigned int has_trigger:1;
        unsigned int has_arrivalDetected:1;
        unsigned int has_displayed:1;
        unsigned int has_triggered:1;
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
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) unsigned int stepID;
@property(nonatomic) BOOL hasArrivedAtTimestamp;
@property(nonatomic) double arrivedAtTimestamp;
@property(nonatomic) BOOL hasArrivalDetected;
@property(nonatomic) BOOL arrivalDetected;
@property(nonatomic) BOOL hasLastDetectedLocationHorizontalAccuracy;
@property(nonatomic) double lastDetectedLocationHorizontalAccuracy;
@property(nonatomic) BOOL hasLastDetectedLocationTraversalPercent;
@property(nonatomic) int lastDetectedLocationTraversalPercent;
@property(nonatomic) BOOL hasLastDetectedLocationTimestamp;
@property(nonatomic) double lastDetectedLocationTimestamp;
@property(nonatomic) BOOL hasTriggeredLocationTraversalPercent;
@property(nonatomic) int triggeredLocationTraversalPercent;
@property(nonatomic) BOOL hasTriggeredTimestamp;
@property(nonatomic) double triggeredTimestamp;
- (int)StringAsTrigger:(id)arg1;
- (id)triggerAsString:(int)arg1;
@property(nonatomic) BOOL hasTrigger;
@property(nonatomic) int trigger;
@property(nonatomic) BOOL hasAlightStopMuid;
@property(nonatomic) unsigned long long alightStopMuid;
@property(nonatomic) BOOL hasPreviousStopMuid;
@property(nonatomic) unsigned long long previousStopMuid;
@property(nonatomic) BOOL hasLineMuid;
@property(nonatomic) unsigned long long lineMuid;
@property(nonatomic) BOOL hasTriggered;
@property(nonatomic) BOOL triggered;
@property(nonatomic) BOOL hasDisplayed;
@property(nonatomic) BOOL displayed;

@end

