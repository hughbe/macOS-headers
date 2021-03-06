//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRImageProvider, NSMutableDictionary;

@interface MREffectShowroom : MREffect
{
    NSMutableDictionary *mSprites;
    MRImageProvider *mShadowGroundProvider;
    MRImageProvider *mShadowSideProvider;
    MRImageProvider *mBorderProvider;
    MRImageProvider *mMaskProvider;
}

- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

@end

