//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAnimationPath;

@interface MRAnimationPathScalar : NSObject
{
    MCAnimationPath *animationPath;
    double value;
    double speed;
    double time;
}

- (void)dealloc;
- (id)initWithMCAnimationPath:(id)arg1 andValue:(double)arg2;

@end

