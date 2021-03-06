//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGGeneratedLayout.h>

@class PXCuratedLibrarySectionGeometryDescriptor;
@protocol PXDisplayAsset;

@interface PXCuratedLibraryAssetsSectionGeneratedLayout : PXGGeneratedLayout
{
    id <PXDisplayAsset> _presentedKeyAsset;
    struct CGRect _presentedKeyAssetRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect presentedKeyAssetRect; // @synthesize presentedKeyAssetRect=_presentedKeyAssetRect;
@property(retain, nonatomic) id <PXDisplayAsset> presentedKeyAsset; // @synthesize presentedKeyAsset=_presentedKeyAsset;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGRect sectionRect;
- (void)getSpriteZPosition:(float *)arg1 clippingRect:(struct CGRect *)arg2 forSpriteKind:(long long)arg3;
@property(readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
- (void)spritesDidUpdate;
- (id)init;

@end

