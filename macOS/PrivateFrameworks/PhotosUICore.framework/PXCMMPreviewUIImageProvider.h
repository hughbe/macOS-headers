//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIImageProvider-Protocol.h>

@class NSString;
@protocol PXUIImageProvider;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider>
{
    id <PXUIImageProvider> _underlyingAssetImageProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXUIImageProvider> underlyingAssetImageProvider; // @synthesize underlyingAssetImageProvider=_underlyingAssetImageProvider;
- (id)_underlyingAssetsFromPreviewAssets:(id)arg1;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)cancelImageRequest:(long long)arg1;
- (id)init;
- (id)initWithUnderlyingAssetImageProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

