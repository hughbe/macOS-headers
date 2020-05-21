//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSWindow;

@interface NSCachedImageRep : NSImageRep
{
    struct CGPoint _origin;
    NSWindow *_window;
    void *_cache;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)_deprecated_hasReversedFlippednessInFlippedImages;
+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (long long)bitsPerSample;
- (id)colorSpaceName;
- (BOOL)hasAlpha;
- (void)setAlpha:(BOOL)arg1;
- (void)_computeParams;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_keepCacheWindow;
- (void)_setKeepCacheWindow:(BOOL)arg1;
- (void)_resizeCache:(struct CGSize)arg1 cachedSeparately:(BOOL)arg2 bps:(long long)arg3 numColors:(long long)arg4 hasAlpha:(BOOL)arg5;
- (BOOL)_transferCache:(id)arg1;
- (void *)_cache;
- (id)_imageRepsForEncodingWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (BOOL)draw;
- (id)_copyNSCGImageRep;
- (BOOL)_canDrawOutsideOfItsBounds;
- (BOOL)isApplicableForRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGRect)rect;
- (struct CGRect)_logicalWindowSpaceRect;
- (id)window;
- (BOOL)_isValid;
- (BOOL)_isCachedSeparately;
- (void)unlockFocus;
- (void)lockFocusFlipped:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 drawingRect:(struct CGRect)arg2 applicableForRect:(struct CGRect)arg3 context:(id)arg4 hints:(id)arg5;
- (id)_initWithSize:(struct CGSize)arg1 depth:(int)arg2 separate:(BOOL)arg3 alpha:(BOOL)arg4 allowDeep:(BOOL)arg5;
- (id)initWithSize:(struct CGSize)arg1 depth:(int)arg2 separate:(BOOL)arg3 alpha:(BOOL)arg4;
- (id)_initWithSharedKitWindow:(long long)arg1 rect:(struct CGRect)arg2;
- (id)initWithWindow:(id)arg1 rect:(struct CGRect)arg2;
- (id)init;

@end

