//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKPositionConstraint : SKConstraint
{
    SKRange *_xRange;
    SKRange *_yRange;
}

+ (id)constraintWithYRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (BOOL)isEqualToPositionConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;

@end

