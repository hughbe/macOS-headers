//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect
{
    MRImageProvider *mPlasmaProvider;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

@end

