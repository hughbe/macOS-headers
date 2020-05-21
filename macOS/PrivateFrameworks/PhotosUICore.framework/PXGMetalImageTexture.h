//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGImageTexture.h>

#import <PhotosUICore/PXGMetalSpriteTexture-Protocol.h>

@class MISSING_TYPE, NSIndexSet, NSString, PXGColorProgram;
@protocol MTLTexture;

@interface PXGMetalImageTexture : PXGImageTexture <PXGMetalSpriteTexture>
{
    BOOL _isOpaque;
    int _shaderFlags;
    id <MTLTexture> _texture;
    id <MTLTexture> _chromaTexture;
    PXGColorProgram *_colorProgram;
    long long _renderPipelineIndex;
    MISSING_TYPE *_orientationTransform;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int shaderFlags; // @synthesize shaderFlags=_shaderFlags;
@property(readonly, nonatomic) BOOL isOpaque; // @synthesize isOpaque=_isOpaque;
@property(nonatomic) long long renderPipelineIndex; // @synthesize renderPipelineIndex=_renderPipelineIndex;
@property(readonly, nonatomic) PXGColorProgram *colorProgram; // @synthesize colorProgram=_colorProgram;
@property(readonly, nonatomic) id <MTLTexture> chromaTexture; // @synthesize chromaTexture=_chromaTexture;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
- (void)cleanupAfterRender:(long long)arg1;
- (void)prepareForRender:(long long)arg1;
@property(readonly, nonatomic) BOOL isCaptureTexture;
@property(readonly, nonatomic) BOOL isAtlas;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (MISSING_TYPE *)orientationTransform;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithTexture:(id)arg1 chromaTexture:(id)arg2 colorProgram:(id)arg3 isOpaque:(BOOL)arg4 shaderFlags:(int)arg5 orientationTransform: /* Error: Ran out of types for this method. */;
- (id)initWithTexture:(id)arg1 colorProgram:(id)arg2 isOpaque:(BOOL)arg3 shaderFlags:(int)arg4 orientationTransform: /* Error: Ran out of types for this method. */;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly) Class superclass;

@end

