//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCAMLBezierData, MRCroppingSprite, MRImage, MRImageProvider, MRTextRenderer, NSArray, NSMutableDictionary;

@interface MREffectTableTop : MREffect
{
    NSMutableDictionary *mSprites;
    MRCroppingSprite *mExtraSprites[2];
    MRImageProvider *mPhotoBackProvider;
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    MRCroppingSprite *mTextSprite;
    MRCroppingSprite *mPhotoBackSprite;
    float mLocalMatrix[16];
    struct CGSize mMaxTextSize;
    BOOL mIsBreak;
    BOOL mIsLoaded;
    NSArray *mShuffledIndicies;
    MRCAMLBezierData *mBezierData;
    BOOL mNeedsToUpdateSizes;
}

+ (void)initialize;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (BOOL)getCurrentCenter:(struct CGPoint *)arg1 scale:(double *)arg2 rotation:(double *)arg3 isMain:(char *)arg4 forElement:(id)arg5;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

