//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGStackLayout.h>

#import <PhotosUICore/PXGAssetBadgeDecorationSource-Protocol.h>
#import <PhotosUICore/PXGSelectionDecorationSource-Protocol.h>
#import <PhotosUICore/PXGSolidColorSource-Protocol.h>
#import <PhotosUICore/PXGSublayoutProvider-Protocol.h>

@class NSColor, NSIndexSet, NSString;

@interface PXGPPTGridStackLayout : PXGStackLayout <PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource>
{
    long long _numberOfItemsPerSection;
    long long _numberOfColumns;
    BOOL _useAssetBadgeDecoration;
    long long _selectionDecorationStyle;
    BOOL _decorated;
    long long _estimatedNumberOfRowsPerSection;
    NSColor *_spriteColor;
    NSIndexSet *_selectedItemsPerSection;
    struct PXAssetBadgeInfo _assetBadgeInfos[12];
}

- (void).cxx_destruct;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (struct PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;
- (void)_initializeBadgeInfos;
- (void)_initializeSelectedItems;
- (id)initWithSetting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

