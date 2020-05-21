//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCroppingSprite, MRImage, MRTextRenderer;

@interface MREffectJustATitle : MREffect
{
    MRTextRenderer *mTextRenderer0;
    MRTextRenderer *mTextRenderer1;
    MRImage *mImage0;
    MRImage *mImage1;
    MRCroppingSprite *mTextSprite0;
    MRCroppingSprite *mTextSprite1;
    struct CGRect mText0Rect;
    struct CGRect mText1Rect;
    BOOL mTextWasUpdatedSinceLastRendering;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)setAttributes:(id)arg1;
- (id)init;
- (void)_unload;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

