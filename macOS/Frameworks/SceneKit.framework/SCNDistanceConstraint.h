//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint
{
    SCNNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    BOOL _keepTargetDirection;
    struct SCNVector3 _targetDirection;
    float _maximumDirectionAngle;
}

+ (BOOL)supportsSecureCoding;
+ (id)distanceConstraintWithTarget:(id)arg1;
+ (id)distanceConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNDistanceConstraint:(id)arg1;
- (void)_customEncodingOfSCNDistanceConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double maximumDistance;
@property(nonatomic) double minimumDistance;
- (void)setKeepTargetDirection:(BOOL)arg1;
- (BOOL)keepTargetDirection;
- (void)setTargetDirection:(struct SCNVector3)arg1;
- (struct SCNVector3)targetDirection;
@property(retain, nonatomic) SCNNode *target;
- (void)dealloc;
- (id)init;

@end

