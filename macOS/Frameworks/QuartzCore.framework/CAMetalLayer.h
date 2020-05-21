//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAEDRMetadata;
@protocol MTLDevice;

@interface CAMetalLayer : CALayer
{
    struct _CAMetalLayerPrivate *_priv;
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property BOOL allowsNextDrawableTimeout;
@property BOOL displaySyncEnabled;
@property BOOL presentsWithTransaction;
@property unsigned long long maximumDrawableCount;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)setContents:(id)arg1;
- (void)_display;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)newDrawable;
- (id)nextDrawable;
@property(retain) CAEDRMetadata *EDRMetadata;
- (void)setColorspace:(struct CGColorSpace *)arg1 nonDefault:(BOOL)arg2;
@property struct CGColorSpace *colorspace;
@property BOOL framebufferOnly;
@property unsigned long long pixelFormat;
@property struct CGSize drawableSize;
@property(readonly) id <MTLDevice> preferredDevice;
@property(retain) id <MTLDevice> device;
- (id)init;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
@property double drawableTimeoutSeconds;
@property BOOL muxLockEnabled;
@property BOOL serverSyncEnabled;
@property BOOL fenceEnabled;
@property BOOL nonDefaultColorspace;
- (void)removeBackBuffers;
- (void)discardContents;
- (BOOL)isDrawableAvailable;
@property(readonly) unsigned long long displayCompositingInternalStatus;

// Remaining properties
@property BOOL wantsExtendedDynamicRangeContent; // @dynamic wantsExtendedDynamicRangeContent;

@end

