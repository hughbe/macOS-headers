//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MPLayer.h>

#import <Slideshows/MPEffectSupport-Protocol.h>
#import <Slideshows/MPEffectSupportPrivate-Protocol.h>

@class MCContainerEffect, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol MZEffectTiming;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport>
{
    MCContainerEffect *_layerEffect;
    NSString *_effectID;
    NSString *_presetID;
    NSMutableArray *_slides;
    NSMutableArray *_secondarySlides;
    NSMutableArray *_texts;
    NSMutableDictionary *_effectAttributes;
    long long _randomSeed;
    NSObject<MZEffectTiming> *_effectTiming;
    BOOL _supportsEffectTiming;
    BOOL _skipEffectTiming;
    long long _liveIndex;
}

+ (id)layerEffectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3;
+ (id)layerEffectWithEffectID:(id)arg1 andStrings:(id)arg2;
+ (id)layerEffectWithEffectID:(id)arg1 andPaths:(id)arg2;
+ (id)layerEffectWithEffectID:(id)arg1;
@property(readonly, nonatomic) NSObject<MZEffectTiming> *effectTiming; // @synthesize effectTiming=_effectTiming;
- (id)allSlides:(BOOL)arg1;
- (void)_updateTiming:(BOOL)arg1;
- (id)_effectAttributes;
- (void)_updateEffectTiming;
- (void)setPhaseOutDuration:(double)arg1;
- (void)setPhaseInDuration:(double)arg1;
- (void)setDuration:(double)arg1;
- (double)mainDuration;
- (void)removeAllSecondarySlides;
- (void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeAllTexts;
- (void)removeTextsAtIndices:(id)arg1;
- (void)insertTexts:(id)arg1 atIndex:(long long)arg2;
- (void)addTexts:(id)arg1;
- (void)addText:(id)arg1;
@property(readonly, nonatomic) NSArray *texts;
- (void)removeSecondarySlidesAtIndices:(id)arg1;
- (void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2;
- (void)addSecondarySlides:(id)arg1;
- (void)addSecondarySlide:(id)arg1;
- (id)secondarySlides;
- (void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeAllSlides;
- (void)removeSlidesAtIndices:(id)arg1;
- (void)insertSlides:(id)arg1 atIndex:(long long)arg2;
- (void)addSlides:(id)arg1;
- (void)addSlide:(id)arg1;
@property(readonly, nonatomic) NSArray *slides;
- (void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
- (id)effectAttributeForKey:(id)arg1;
- (void)setEffectAttributes:(id)arg1;
- (id)effectAttributes;
- (void)setRandomSeed:(long long)arg1;
- (long long)randomSeed;
@property(copy, nonatomic) NSString *presetID;
@property(copy, nonatomic) NSString *effectID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3;
- (id)initWithEffectID:(id)arg1 andStrings:(id)arg2;
- (id)initWithEffectID:(id)arg1 andPaths:(id)arg2;
- (id)initWithEffectID:(id)arg1;
- (id)init;
- (void)createSecondarySlidesWithPaths:(id)arg1;
- (void)createSlidesWithPaths:(id)arg1;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3;
- (void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2;
- (double)fullDuration;
- (long long)maxNumberOfSecondarySlides;
- (long long)maxNumberOfSlides;
- (id)container;
- (double)lowestDisplayTime;
- (void)setLiveIndex:(long long)arg1;
- (long long)liveIndex;
- (id)slideForMCSlide:(id)arg1;
- (void)copyTexts:(id)arg1;
- (void)copySecondarySlides:(id)arg1;
- (void)copySlides:(id)arg1;
- (void)setLayerEffect:(id)arg1;
- (id)slideInformation;
- (void)applyFormattedAttributes;
- (id)formattedAttributes;
- (void)updateTiming;
- (void)setSkipEffectTiming:(BOOL)arg1;
- (BOOL)isLive;

@end

