//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition : CUIThemeRendition
{
    unsigned int _nimages;
    struct CGRect _imageRect[16];
    struct CGImage *_image[16];
    struct CGImage *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    struct CGRect _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    struct CGSize _originalUncroppedSize;
    struct CGRect _alphaCroppedFrame;
}

- (void).cxx_destruct;
- (struct CGRect)alphaCroppedRect;
- (struct CGSize)originalUncroppedSize;
- (BOOL)edgesOnly;
- (BOOL)isTiled;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (void)_fillOutImageSlices;
- (id)properties;
- (id)data;
- (struct CGImage *)unslicedImage;
- (struct CGImage *)_sourceImage;
- (id)_sourceRendition;
- (BOOL)isScaled;
- (id)metrics;
- (id)sliceInformation;
- (struct CGSize)unslicedSize;
- (struct CGRect)_destinationFrame;
- (id)linkingToRendition;
- (BOOL)isInternalLink;
- (int)pixelFormat;
- (BOOL)isOpaque;
- (int)bitmapEncoding;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (void)dealloc;

@end

