//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRevolute : PKPhysicsJoint
{
    struct b2RevoluteJointDef _jointDef;
    struct b2RevoluteJoint *_joint;
    struct CGPoint _anchor;
}

+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;
- (id).cxx_construct;
@property(readonly) struct CGPoint anchor; // @synthesize anchor=_anchor;
- (void)create;
- (struct b2JointDef *)_jointDef;
- (void)set_joint:(struct b2Joint *)arg1;
- (struct b2Joint *)_joint;
@property(nonatomic) double rotationSpeed;
@property(nonatomic) double frictionTorque;
@property(nonatomic) double upperAngleLimit;
@property(nonatomic) double lowerAngleLimit;
@property(nonatomic) BOOL shouldEnableLimits;
- (BOOL)isEqualToRevoluteJoint:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;

@end

