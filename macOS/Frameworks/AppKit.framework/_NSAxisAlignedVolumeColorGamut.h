//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColorGamut.h>

__attribute__((visibility("hidden")))
@interface _NSAxisAlignedVolumeColorGamut : NSColorGamut
{
    double _minX;
    double _maxX;
    double _minY;
    double _maxY;
    double _minZ;
    double _maxZ;
}

+ (id)gamutWithCGColorSpace:(struct CGColorSpace *)arg1;
+ (void)initialize;
- (id)intersectionWithGamut:(id)arg1;
- (id)unionWithGamut:(id)arg1;
- (BOOL)intersectsGamut:(id)arg1;
- (BOOL)containsGamut:(id)arg1;
- (double)volume;
- (BOOL)isInfinite;
- (BOOL)isEmpty;
- (BOOL)isEqualToGamut:(id)arg1;
- (unsigned long long)hash;
- (BOOL)containsCGColor:(struct CGColor *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

