//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMotionActivity, CLPPipelineDiagnosticReport, CLPSatelliteReport, NSMutableArray;

@interface CLPLocation : PBCodable <NSCopying>
{
    double _latitude;
    double _longitude;
    double _timestamp;
    float _altitude;
    NSMutableArray *_appBundleIdIndices;
    int _context;
    float _course;
    float _courseAccuracy;
    CLPMotionActivity *_dominantMotionActivity;
    int _floor;
    float _horizontalAccuracy;
    float _horzUncSemiMaj;
    float _horzUncSemiMajAz;
    float _horzUncSemiMin;
    int _modeIndicator;
    CLPMotionActivity *_motionActivity;
    int _motionActivityConfidence;
    int _motionActivityType;
    CLPPipelineDiagnosticReport *_pipelineDiagnosticReport;
    int _provider;
    CLPMotionActivity *_rawMotionActivity;
    CLPSatelliteReport *_satReport;
    float _speed;
    float _speedAccuracy;
    float _verticalAccuracy;
    BOOL _isFromLocationController;
    BOOL _motionVehicleConnected;
    BOOL _motionVehicleConnectedStateChanged;
    struct {
        unsigned int altitude:1;
        unsigned int context:1;
        unsigned int course:1;
        unsigned int courseAccuracy:1;
        unsigned int floor:1;
        unsigned int horzUncSemiMaj:1;
        unsigned int horzUncSemiMajAz:1;
        unsigned int horzUncSemiMin:1;
        unsigned int modeIndicator:1;
        unsigned int motionActivityConfidence:1;
        unsigned int motionActivityType:1;
        unsigned int provider:1;
        unsigned int speed:1;
        unsigned int speedAccuracy:1;
        unsigned int verticalAccuracy:1;
        unsigned int isFromLocationController:1;
        unsigned int motionVehicleConnected:1;
        unsigned int motionVehicleConnectedStateChanged:1;
    } _has;
}

+ (Class)appBundleIdIndicesType;
- (void).cxx_destruct;
@property(retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport; // @synthesize pipelineDiagnosticReport=_pipelineDiagnosticReport;
@property(nonatomic) BOOL isFromLocationController; // @synthesize isFromLocationController=_isFromLocationController;
@property(retain, nonatomic) CLPSatelliteReport *satReport; // @synthesize satReport=_satReport;
@property(nonatomic) float horzUncSemiMajAz; // @synthesize horzUncSemiMajAz=_horzUncSemiMajAz;
@property(nonatomic) float horzUncSemiMin; // @synthesize horzUncSemiMin=_horzUncSemiMin;
@property(nonatomic) float horzUncSemiMaj; // @synthesize horzUncSemiMaj=_horzUncSemiMaj;
@property(nonatomic) float speedAccuracy; // @synthesize speedAccuracy=_speedAccuracy;
@property(nonatomic) float courseAccuracy; // @synthesize courseAccuracy=_courseAccuracy;
@property(retain, nonatomic) CLPMotionActivity *dominantMotionActivity; // @synthesize dominantMotionActivity=_dominantMotionActivity;
@property(retain, nonatomic) CLPMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPMotionActivity *rawMotionActivity; // @synthesize rawMotionActivity=_rawMotionActivity;
@property(nonatomic) BOOL motionVehicleConnected; // @synthesize motionVehicleConnected=_motionVehicleConnected;
@property(nonatomic) BOOL motionVehicleConnectedStateChanged; // @synthesize motionVehicleConnectedStateChanged=_motionVehicleConnectedStateChanged;
@property(retain, nonatomic) NSMutableArray *appBundleIdIndices; // @synthesize appBundleIdIndices=_appBundleIdIndices;
@property(nonatomic) int floor; // @synthesize floor=_floor;
@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(nonatomic) int motionActivityConfidence; // @synthesize motionActivityConfidence=_motionActivityConfidence;
@property(nonatomic) int motionActivityType; // @synthesize motionActivityType=_motionActivityType;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) float course; // @synthesize course=_course;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) float altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPipelineDiagnosticReport;
@property(nonatomic) BOOL hasIsFromLocationController;
@property(readonly, nonatomic) BOOL hasSatReport;
@property(nonatomic) BOOL hasHorzUncSemiMajAz;
@property(nonatomic) BOOL hasHorzUncSemiMin;
@property(nonatomic) BOOL hasHorzUncSemiMaj;
- (int)StringAsModeIndicator:(id)arg1;
- (id)modeIndicatorAsString:(int)arg1;
@property(nonatomic) BOOL hasModeIndicator;
@property(nonatomic) int modeIndicator; // @synthesize modeIndicator=_modeIndicator;
@property(nonatomic) BOOL hasSpeedAccuracy;
@property(nonatomic) BOOL hasCourseAccuracy;
@property(readonly, nonatomic) BOOL hasDominantMotionActivity;
@property(readonly, nonatomic) BOOL hasMotionActivity;
@property(readonly, nonatomic) BOOL hasRawMotionActivity;
@property(nonatomic) BOOL hasMotionVehicleConnected;
@property(nonatomic) BOOL hasMotionVehicleConnectedStateChanged;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdIndicesCount;
- (void)addAppBundleIdIndices:(id)arg1;
- (void)clearAppBundleIdIndices;
@property(nonatomic) BOOL hasFloor;
@property(nonatomic) BOOL hasProvider;
@property(nonatomic) BOOL hasMotionActivityConfidence;
@property(nonatomic) BOOL hasMotionActivityType;
@property(nonatomic) BOOL hasContext;
@property(nonatomic) BOOL hasCourse;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) BOOL hasVerticalAccuracy;
@property(nonatomic) BOOL hasAltitude;

@end

