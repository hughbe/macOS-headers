//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSOpenGLPixelBuffer : NSObject
{
    struct _CGLPBufferObject *_CGLPBuffer;
}

+ (void)initialize;
+ (id)openGLPixelBufferWithCGLPBufferObj:(struct _CGLPBufferObject *)arg1;
@property(readonly) int textureMaxMipMapLevel;
@property(readonly) unsigned int textureInternalFormat;
@property(readonly) unsigned int textureTarget;
@property(readonly) int pixelsHigh;
@property(readonly) int pixelsWide;
@property(readonly) struct _CGLPBufferObject *CGLPBufferObj;
- (void)dealloc;
- (id)initWithCGLPBufferObj:(struct _CGLPBufferObject *)arg1;
- (id)initWithTextureTarget:(unsigned int)arg1 textureInternalFormat:(unsigned int)arg2 textureMaxMipMapLevel:(int)arg3 pixelsWide:(int)arg4 pixelsHigh:(int)arg5;

@end

