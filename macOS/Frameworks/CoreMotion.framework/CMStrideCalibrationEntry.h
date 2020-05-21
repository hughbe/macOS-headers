//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying>
{
    CDStruct_9878d8f4 _strideCalStruct;
}

+ (BOOL)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) long long gpsSource;
@property(readonly, nonatomic) double percentGrade;
@property(readonly, nonatomic) double speed;
- (int)session;
@property(readonly, nonatomic) int steps;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) double endTime;
- (double)score;
- (double)kvalueTrack;
- (double)kvalue;
- (unsigned int)pacebin;
@property(readonly, nonatomic) double startTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCLStrideCalEntry:(CDStruct_9878d8f4)arg1;

@end

