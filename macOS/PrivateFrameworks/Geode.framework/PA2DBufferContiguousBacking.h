//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PFCopyOnWriteInterest;

@interface PA2DBufferContiguousBacking : NSObject
{
    unsigned long long _width;
    unsigned long long _height;
    int _format;
    struct CGColorSpace *_colorSpace;
    PFCopyOnWriteInterest *_buffer;
    long long _rowBytes;
}

- (void).cxx_destruct;
- (void)setPixelsForROI:(struct PFIntRect_st)arg1 srcPtr:(const void *)arg2 srcPtrRowBytes:(long long)arg3;
- (void)forEachMutableTileInROI:(struct PFIntRect_st)arg1 processor:(CDUnknownBlockType)arg2;
- (void)processPixelsInArea:(struct PFIntRect_st)arg1 processor:(id)arg2;
- (void)processConstPixelsInArea:(struct PFIntRect_st)arg1 processor:(id)arg2;
- (long long)rowBytes;
- (void *)bytes;
- (struct PFIntRect_st)tileBoundsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileCount;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (int)format;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)newBufferData:(unsigned long long)arg1;
- (id)initWithSize:(unsigned long long)arg1:(unsigned long long)arg2 format:(int)arg3 fill:(void *)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)initWithSize:(unsigned long long)arg1:(unsigned long long)arg2 format:(int)arg3;
- (void)getPixelsForROI:(struct PFIntRect_st)arg1 destPtr:(void *)arg2 destPtrRowBytes:(long long)arg3;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st)arg1 processor:(CDUnknownBlockType)arg2;

@end

