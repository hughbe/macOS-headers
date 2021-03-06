/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXPBPredictionLocationMotionContext : PBCodable <NSCopying> {
    bool  _canPredictClipsGivenRecentMotion;
    ATXPBPredictionLocationOfInterest * _currentLOI;
    NSData * _currentLocation;
    double  _distanceFromGym;
    double  _distanceFromHome;
    double  _distanceFromSchool;
    double  _distanceFromWork;
    struct { 
        unsigned int distanceFromGym : 1; 
        unsigned int distanceFromHome : 1; 
        unsigned int distanceFromSchool : 1; 
        unsigned int distanceFromWork : 1; 
        unsigned int motionType : 1; 
        unsigned int canPredictClipsGivenRecentMotion : 1; 
        unsigned int locationEnabled : 1; 
    }  _has;
    bool  _locationEnabled;
    int  _motionType;
    ATXPBPredictionLocationOfInterest * _previousLOI;
}

@property (nonatomic) bool canPredictClipsGivenRecentMotion;
@property (nonatomic, retain) ATXPBPredictionLocationOfInterest *currentLOI;
@property (nonatomic, retain) NSData *currentLocation;
@property (nonatomic) double distanceFromGym;
@property (nonatomic) double distanceFromHome;
@property (nonatomic) double distanceFromSchool;
@property (nonatomic) double distanceFromWork;
@property (nonatomic) bool hasCanPredictClipsGivenRecentMotion;
@property (nonatomic, readonly) bool hasCurrentLOI;
@property (nonatomic, readonly) bool hasCurrentLocation;
@property (nonatomic) bool hasDistanceFromGym;
@property (nonatomic) bool hasDistanceFromHome;
@property (nonatomic) bool hasDistanceFromSchool;
@property (nonatomic) bool hasDistanceFromWork;
@property (nonatomic) bool hasLocationEnabled;
@property (nonatomic) bool hasMotionType;
@property (nonatomic, readonly) bool hasPreviousLOI;
@property (nonatomic) bool locationEnabled;
@property (nonatomic) int motionType;
@property (nonatomic, retain) ATXPBPredictionLocationOfInterest *previousLOI;

- (void).cxx_destruct;
- (int)StringAsMotionType:(id)arg1;
- (bool)canPredictClipsGivenRecentMotion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLOI;
- (id)currentLocation;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromGym;
- (double)distanceFromHome;
- (double)distanceFromSchool;
- (double)distanceFromWork;
- (bool)hasCanPredictClipsGivenRecentMotion;
- (bool)hasCurrentLOI;
- (bool)hasCurrentLocation;
- (bool)hasDistanceFromGym;
- (bool)hasDistanceFromHome;
- (bool)hasDistanceFromSchool;
- (bool)hasDistanceFromWork;
- (bool)hasLocationEnabled;
- (bool)hasMotionType;
- (bool)hasPreviousLOI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)locationEnabled;
- (void)mergeFrom:(id)arg1;
- (int)motionType;
- (id)motionTypeAsString:(int)arg1;
- (id)previousLOI;
- (bool)readFrom:(id)arg1;
- (void)setCanPredictClipsGivenRecentMotion:(bool)arg1;
- (void)setCurrentLOI:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setDistanceFromGym:(double)arg1;
- (void)setDistanceFromHome:(double)arg1;
- (void)setDistanceFromSchool:(double)arg1;
- (void)setDistanceFromWork:(double)arg1;
- (void)setHasCanPredictClipsGivenRecentMotion:(bool)arg1;
- (void)setHasDistanceFromGym:(bool)arg1;
- (void)setHasDistanceFromHome:(bool)arg1;
- (void)setHasDistanceFromSchool:(bool)arg1;
- (void)setHasDistanceFromWork:(bool)arg1;
- (void)setHasLocationEnabled:(bool)arg1;
- (void)setHasMotionType:(bool)arg1;
- (void)setLocationEnabled:(bool)arg1;
- (void)setMotionType:(int)arg1;
- (void)setPreviousLOI:(id)arg1;
- (void)writeTo:(id)arg1;

@end
