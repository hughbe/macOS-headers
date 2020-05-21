//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

#import <PhotoPrintProduct/KHJSONGeneratorProtocol-Protocol.h>

@class NSString;

@interface KHThemeLayout : KHModel <KHJSONGeneratorProtocol>
{
    long long _themeId;
    long long _layoutId;
    long long _productId;
    long long _increasedHoleLayout;
    long long _defaultFrontCover;
    long long _defaultFrontFlap;
    long long _defaultBackFlap;
    long long _defaultBackCover;
    long long _defaultFirstPageSequence;
    long long _defaultCyclePageSequence;
    long long _defaultLastPageSequence;
    long long _visible;
    NSString *_alternateLayouts;
    unsigned long long _type;
    long long _previewSequence;
}

+ (id)increasedHoleCountLayoutForLayout:(id)arg1 forTheme:(id)arg2 andProduct:(id)arg3;
+ (id)layoutUsageTypeByLayoutIdForTheme:(id)arg1 product:(id)arg2 forLayoutIds:(id)arg3;
+ (id)defaultFirstPageSequenceByLayoutIdForTheme:(id)arg1 product:(id)arg2;
+ (id)defaultCyclePageSequenceByLayoutIdForTheme:(id)arg1 product:(id)arg2;
+ (id)defaultBackFlapsByLayoutIdForTheme:(id)arg1 product:(id)arg2;
+ (id)defaultFrontFlapsByLayoutIdForTheme:(id)arg1 product:(id)arg2;
+ (id)defaultBackCoverSequenceByLayoutIdForTheme:(id)arg1 product:(id)arg2;
+ (id)defaultFrontCoverSequenceByLayoutIdForTheme:(id)arg1 product:(id)arg2;
+ (id)layoutWithLegacyName:(id)arg1 forTheme:(id)arg2;
+ (id)themeLayoutForTheme:(id)arg1 andLayout:(id)arg2;
+ (id)generateModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
- (void)setPreviewSequence:(long long)arg1;
- (void)cachePreviewSequence:(long long)arg1;
- (long long)previewSequence;
- (void)setType:(unsigned long long)arg1;
- (void)cacheType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setAlternateLayouts:(id)arg1;
- (void)cacheAlternateLayouts:(id)arg1;
- (id)alternateLayouts;
- (void)setVisible:(long long)arg1;
- (void)cacheVisible:(long long)arg1;
- (long long)visible;
- (void)setDefaultLastPageSequence:(long long)arg1;
- (void)cacheDefaultLastPageSequence:(long long)arg1;
- (long long)defaultLastPageSequence;
- (void)setDefaultCyclePageSequence:(long long)arg1;
- (void)cacheDefaultCyclePageSequence:(long long)arg1;
- (long long)defaultCyclePageSequence;
- (void)setDefaultFirstPageSequence:(long long)arg1;
- (void)cacheDefaultFirstPageSequence:(long long)arg1;
- (long long)defaultFirstPageSequence;
- (void)setDefaultBackCover:(long long)arg1;
- (void)cacheDefaultBackCover:(long long)arg1;
- (long long)defaultBackCover;
- (void)setDefaultBackFlap:(long long)arg1;
- (void)cacheDefaultBackFlap:(long long)arg1;
- (long long)defaultBackFlap;
- (void)setDefaultFrontFlap:(long long)arg1;
- (void)cacheDefaultFrontFlap:(long long)arg1;
- (long long)defaultFrontFlap;
- (void)setDefaultFrontCover:(long long)arg1;
- (void)cacheDefaultFrontCover:(long long)arg1;
- (long long)defaultFrontCover;
- (void)setIncreasedHoleLayout:(long long)arg1;
- (void)cacheIncreasedHoleLayout:(long long)arg1;
- (long long)increasedHoleLayout;
- (void)setProductId:(long long)arg1;
- (void)cacheProductId:(long long)arg1;
- (long long)productId;
- (void)setLayoutId:(long long)arg1;
- (void)cacheLayoutId:(long long)arg1;
- (long long)layoutId;
- (void)setThemeId:(long long)arg1;
- (void)cacheThemeId:(long long)arg1;
- (long long)themeId;
- (void)dealloc;
- (id)JSONRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

