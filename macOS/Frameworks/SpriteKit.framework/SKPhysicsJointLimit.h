//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointLimit : SKPhysicsJoint
{
    double _maxLength;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;

@end

