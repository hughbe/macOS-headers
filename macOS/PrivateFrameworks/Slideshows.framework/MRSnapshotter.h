//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRRenderer, MRTexture;

@interface MRSnapshotter : NSObject
{
    MRRenderer *_renderer;
    struct _CGLContextObject *_context;
    struct _CGLPixelFormatObject *_pixelFormat;
    MRTexture *_texture;
    BOOL _ignoresFadeInAndOut;
    struct CGSize _size;
}

+ (id)snapshotterWithDocument:(id)arg1;
@property(nonatomic) BOOL ignoresFadeInAndOut; // @synthesize ignoresFadeInAndOut=_ignoresFadeInAndOut;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (struct CGImage *)CGImageSnapshotAtState:(id)arg1;
- (struct CGImage *)CGImageSnapshotAtTime:(double)arg1;
- (void)snapshotToBuffer:(unsigned int *)arg1 withBytesPerRow:(unsigned int)arg2 atTime:(double)arg3;
- (struct CGImage *)_CGImageSnapshot;
- (void)_snapshotToBuffer:(unsigned int *)arg1 withBytesPerRow:(unsigned int)arg2;
@property(nonatomic) double fadeOutStartTime;
@property(nonatomic) double fadeOutDuration;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace;
@property(nonatomic) double timeQuantum;
@property(nonatomic) BOOL isFlipped;
- (void)dealloc;
- (id)initWithMontage:(id)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 assetManagementDelegate:(id)arg3 featureDelegate:(id)arg4 isReadOnly:(BOOL)arg5;
- (id)initWithMontage:(id)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 andAssetManagementDelegate:(id)arg3 isReadOnly:(BOOL)arg4;

@end

