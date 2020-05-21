//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MPAnimationManager : NSObject
{
    NSMutableDictionary *mAnimations;
    NSMutableDictionary *mAnimationSets;
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
+ (void)loadAnimationManagerWithPaths:(id)arg1;
- (id)animationDescriptionForAnimationID:(id)arg1;
- (id)animationDescriptionForAnimationSetID:(id)arg1;
- (void)dealloc;
- (id)initWithPaths:(id)arg1;

@end

