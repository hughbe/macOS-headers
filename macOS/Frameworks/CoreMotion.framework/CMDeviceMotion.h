//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem
{
    id _internal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double headingAccuracy;
@property(readonly, nonatomic) double heading;
@property(readonly, nonatomic) _Bool doingBiasEstimation;
@property(readonly, nonatomic) _Bool doingYawCorrection;
@property(readonly, nonatomic) int magneticFieldCalibrationLevel;
@property(readonly, nonatomic) CDStruct_27fd20ed magneticField;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate;
@property(readonly, nonatomic) CMAttitude *attitude;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(CDStruct_981b33bd)arg1 internal:(CDStruct_37a3040a)arg2 timestamp:(double)arg3;

@end

