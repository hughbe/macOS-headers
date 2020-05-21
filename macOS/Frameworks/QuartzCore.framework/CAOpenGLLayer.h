//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CAOpenGLLayer : CALayer
{
    struct CAOpenGLLayerPrivate *_glPriv;
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
+ (BOOL)shouldRenderOnBackgroundThread;
@property struct CGColorSpace *colorspace;
@property(getter=isAsynchronous) BOOL asynchronous;
- (BOOL)asynchronous;
- (void)dealloc;
- (void)invalidateContents;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_cancelAnimationTimer;
- (BOOL)_scheduleAnimationTimer;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)_display;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (id)init;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property unsigned long long maximumDrawableCount;
@property float maximumFrameRate;

// Remaining properties
@property BOOL wantsExtendedDynamicRangeContent; // @dynamic wantsExtendedDynamicRangeContent;

@end

