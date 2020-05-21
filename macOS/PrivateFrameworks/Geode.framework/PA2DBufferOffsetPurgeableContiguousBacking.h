//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/PA2DBufferPurgeableContiguousBacking.h>

@interface PA2DBufferOffsetPurgeableContiguousBacking : PA2DBufferPurgeableContiguousBacking
{
    long long _offset;
}

+ (unsigned long long)bufferLengthFor:(unsigned long long)arg1:(unsigned long long)arg2 format:(int)arg3;
- (id)newBufferData:(unsigned long long)arg1;
- (id)initWithSize:(unsigned long long)arg1:(unsigned long long)arg2 format:(int)arg3 fill:(void *)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)initWithSize:(unsigned long long)arg1:(unsigned long long)arg2 format:(int)arg3;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st)arg1 processor:(CDUnknownBlockType)arg2;
- (void)forEachMutableTileInROI:(struct PFIntRect_st)arg1 processor:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)_newCopyOnWriteHandler;
- (id)initWithSize:(unsigned long long)arg1:(unsigned long long)arg2 format:(int)arg3 fill:(void *)arg4 colorSpace:(struct CGColorSpace *)arg5 data:(id)arg6 offset:(long long)arg7;

@end

