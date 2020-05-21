//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/NSCopying-Protocol.h>
#import <PAImaging/NSMutableCopying-Protocol.h>

@class PADevice, PADisplay;
@protocol PATiledImageBacking;

@interface PATiledImage : NSObject <NSCopying, NSMutableCopying>
{
    id <PATiledImageBacking> _backing;
    PADisplay *_display;
    struct CGRect _extent;
    long long _orientation;
    long long _originalOrientation;
}

- (void).cxx_destruct;
- (void)endAccessRegion:(id)arg1;
- (void)beginAccessRegion:(id)arg1;
- (BOOL)writeToTIFF:(id)arg1;
- (id)CGImage;
- (struct CGImage *)newCGImage;
- (BOOL)isEqualToTiledImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValidInRegion:(id)arg1;
- (BOOL)isValidInRect:(struct CGRect)arg1;
- (BOOL)isValid;
- (id)validRegion;
- (id)imageAtLevel:(unsigned long long)arg1;
- (unsigned long long)numberOfLevels;
- (void)forEachTileIndexInRect:(struct CGRect)arg1 dispatchQueue:(id)arg2 apply:(CDUnknownBlockType)arg3;
- (void)enumerateTilesIndexesInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfTileAtPoint:(struct CGPoint)arg1;
- (id)tileAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGSize borderSize;
- (struct CGSize)tileSize;
- (unsigned long long)numberOfTiles;
- (void)contiguousTileForRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGRect originalExtent;
@property(readonly, nonatomic) struct CGSize originalSize;
@property(readonly, nonatomic) long long originalOrientation;
@property(readonly, nonatomic) long long orientation;
@property(readonly, nonatomic) struct CGRect extent;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) PADisplay *display;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace;
@property(readonly, nonatomic) PADevice *device;
- (id)debugDescription;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBacking:(id)arg1 display:(id)arg2 extent:(struct CGRect)arg3 orientation:(long long)arg4 originalOrientation:(long long)arg5;
- (id)initWithBacking:(id)arg1 display:(id)arg2 extent:(struct CGRect)arg3;
- (id)initWithBacking:(id)arg1 display:(id)arg2;
- (id)init;
- (id)autoAccessedTiledImageInRegion:(id)arg1;

@end

