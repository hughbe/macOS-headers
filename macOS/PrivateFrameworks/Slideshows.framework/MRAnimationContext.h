//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAnimationPathScalar, NSDictionary;

@interface MRAnimationContext : NSObject
{
    MRAnimationPathScalar *animationPath;
    double *param1;
    double *param2;
    NSDictionary *state;
}

- (void)applyToMathExpression:(id)arg1 atTime:(double)arg2;

@end

