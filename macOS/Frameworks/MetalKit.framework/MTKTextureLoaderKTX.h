//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalKit/MTKTextureLoaderData.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderKTX : MTKTextureLoaderData
{
    NSData *_imageData;
    struct MTLPixelFormatInfo _pixelFormatInfo;
    BOOL _packedRowStride;
}

+ (BOOL)isKTXFile:(id)arg1;
- (unsigned long long)determineFormatFromSizedFormat:(unsigned long long)arg1;
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;
- (BOOL)parseKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (BOOL)parseKeyValueBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

