//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MPSlide, MPText, NSArray, NSDictionary, NSIndexSet, NSObject, NSString;
@protocol MZEffectTiming;

@protocol MPEffectSupport
@property(readonly, nonatomic) NSObject<MZEffectTiming> *effectTiming;
@property(readonly, nonatomic) NSArray *texts;
@property(readonly, nonatomic) NSArray *slides;
@property(copy, nonatomic) NSString *presetID;
@property(copy, nonatomic) NSString *effectID;
- (void)setRandomSeed:(long long)arg1;
- (long long)randomSeed;
- (void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
- (id)effectAttributeForKey:(id)arg1;
- (void)setEffectAttributes:(NSDictionary *)arg1;
- (NSDictionary *)effectAttributes;
- (void)moveTextsFromIndices:(NSIndexSet *)arg1 toIndex:(long long)arg2;
- (void)removeAllTexts;
- (void)removeTextsAtIndices:(NSIndexSet *)arg1;
- (void)insertTexts:(NSArray *)arg1 atIndex:(long long)arg2;
- (void)addTexts:(NSArray *)arg1;
- (void)addText:(MPText *)arg1;
- (void)removeAllSecondarySlides;
- (void)removeSecondarySlidesAtIndices:(NSIndexSet *)arg1;
- (void)insertSecondarySlides:(NSArray *)arg1 atIndex:(long long)arg2;
- (void)addSecondarySlides:(NSArray *)arg1;
- (void)addSecondarySlide:(MPSlide *)arg1;
- (NSArray *)secondarySlides;
- (void)moveSlidesFromIndices:(NSIndexSet *)arg1 toIndex:(long long)arg2;
- (void)removeAllSlides;
- (void)removeSlidesAtIndices:(NSIndexSet *)arg1;
- (void)insertSlides:(NSArray *)arg1 atIndex:(long long)arg2;
- (void)addSlides:(NSArray *)arg1;
- (void)addSlide:(MPSlide *)arg1;
- (double)mainDuration;
- (double)phaseOutDuration;
- (double)phaseInDuration;
@end

