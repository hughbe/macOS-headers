//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SCNTextureSource : NSObject
{
    id _mtlTextureCache;
    id _glTextureCache;
    MISSING_TYPE *_size;
}

- (void)setGlTextureCache:(id)arg1;
- (id)glTextureCache;
- (void)setMTLTextureCache:(id)arg1;
- (id)MTLTextureCache;
- (double)nextFrameTime;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (MISSING_TYPE *)textureSize;
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (struct __C3DRendererContext *)rendererContextForTextureSourceWithEngineContext:(struct __C3DEngineContext *)arg1;
- (BOOL)prefersGL3;
- (BOOL)supportsMetal;
- (void)dealloc;
- (void)setSize: /* Error: Ran out of types for this method. */;

@end

