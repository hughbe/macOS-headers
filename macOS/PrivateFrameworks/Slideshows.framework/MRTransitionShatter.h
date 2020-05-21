//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MRTransition.h>

@class NSDictionary, NSMutableArray;

@interface MRTransitionShatter : MRTransition
{
    BOOL mIsLoaded;
    NSDictionary *mLayout;
    NSMutableArray *mMasks;
}

+ (id)shatterDescriptions;
+ (void)initialize;
- (void)_renderSublayer:(id)arg1 layerCount:(long long)arg2 sourceIsText:(BOOL)arg3 targetIsText:(BOOL)arg4 currentShader:(id)arg5 sourceSize:(struct CGSize)arg6 targetSize:(struct CGSize)arg7 atTime:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)unload;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (id)initWithTransitionID:(id)arg1;
- (void)setPixelSize:(struct CGSize)arg1;

@end

