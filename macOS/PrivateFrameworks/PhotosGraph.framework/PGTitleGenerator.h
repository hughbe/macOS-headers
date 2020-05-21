//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSSet, PGTitle, PGTitleGeneratorDateMatching, PHAsset, PHAssetCollection;

@interface PGTitleGenerator : NSObject
{
    BOOL _isForHighlight;
    NSSet *_momentNodes;
    PGTitleGeneratorDateMatching *_dateMatching;
    PHAsset *_keyAsset;
    PHAssetCollection *_curatedAssetCollection;
    PHAssetCollection *_assetCollection;
    PGTitle *_title;
    PGTitle *_subtitle;
    NSSet *_usedLocationNodes;
    NSLocale *_locale;
    unsigned long long _preferredTitleType;
    unsigned long long _lineBreakBehavior;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isForHighlight; // @synthesize isForHighlight=_isForHighlight;
@property(nonatomic) unsigned long long lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property(nonatomic) unsigned long long preferredTitleType; // @synthesize preferredTitleType=_preferredTitleType;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSSet *usedLocationNodes; // @synthesize usedLocationNodes=_usedLocationNodes;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property(readonly, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, nonatomic) PGTitleGeneratorDateMatching *dateMatching; // @synthesize dateMatching=_dateMatching;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
- (id)_addressNodesFromCuratedAssetCollection;
- (id)_addressNodeFromKeyAsset;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (BOOL)_triggerDefaultTitleGenerationIfNil;
- (unsigned long long)_allowedTimeTitleFormats;
- (id)_splitTimeTitles;
- (id)_defaultTimeTitle;
- (id)_defaultLocationTitle;
- (id)_defaultTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (void)_generateTitleAndSubtitle;
@property(readonly, nonatomic) PGTitle *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (id)initWithMomentNode:(id)arg1 type:(long long)arg2;
- (id)initWithMomentNodes:(id)arg1 type:(long long)arg2;
- (id)initWithMomentNodes:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6;
- (id)initWithMomentNode:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6;

@end

