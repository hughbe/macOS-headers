//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying>
{
    double fTimestamp;
    double _elapsedTime;
    double _totalEnergy;
    double _totalDistance;
    double _totalElevationAscended;
    long long _totalStrideCount;
    long long _totalStrokeCount;
    long long _totalFloorsClimbed;
    double _instantaneousSpeed;
    double _instantaneousCadence;
    double _instantaneousPower;
    double _inclination;
    double _resistanceLevel;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
@property(nonatomic) double resistanceLevel; // @synthesize resistanceLevel=_resistanceLevel;
@property(nonatomic) double inclination; // @synthesize inclination=_inclination;
@property(nonatomic) double instantaneousPower; // @synthesize instantaneousPower=_instantaneousPower;
@property(nonatomic) double instantaneousCadence; // @synthesize instantaneousCadence=_instantaneousCadence;
@property(nonatomic) double instantaneousSpeed; // @synthesize instantaneousSpeed=_instantaneousSpeed;
@property(nonatomic) long long totalFloorsClimbed; // @synthesize totalFloorsClimbed=_totalFloorsClimbed;
@property(nonatomic) long long totalStrokeCount; // @synthesize totalStrokeCount=_totalStrokeCount;
@property(nonatomic) long long totalStrideCount; // @synthesize totalStrideCount=_totalStrideCount;
@property(nonatomic) double totalElevationAscended; // @synthesize totalElevationAscended=_totalElevationAscended;
@property(nonatomic) double totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) double totalEnergy; // @synthesize totalEnergy=_totalEnergy;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData *)arg1;
- (id)description;
@property(readonly, nonatomic) NSDate *timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTimestamp:(id)arg1;

@end

