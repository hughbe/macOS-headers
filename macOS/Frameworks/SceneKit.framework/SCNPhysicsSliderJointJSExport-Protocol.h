//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsSliderJointJSExport <JSExport>
+ (id)jointWithBody:(SCNPhysicsBody *)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
+ (id)jointWithBodyA:(SCNPhysicsBody *)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(SCNPhysicsBody *)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
@property(nonatomic) double motorMaximumTorque;
@property(nonatomic) double motorTargetAngularVelocity;
@property(nonatomic) double motorMaximumForce;
@property(nonatomic) double motorTargetLinearVelocity;
@property(nonatomic) double maximumAngularLimit;
@property(nonatomic) double minimumAngularLimit;
@property(nonatomic) double maximumLinearLimit;
@property(nonatomic) double minimumLinearLimit;
@property(nonatomic) struct SCNVector3 anchorB;
@property(nonatomic) struct SCNVector3 axisB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(nonatomic) struct SCNVector3 axisA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
@end

