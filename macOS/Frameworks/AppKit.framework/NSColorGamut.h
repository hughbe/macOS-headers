//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@interface NSColorGamut : NSObject <NSCopying>
{
}

+ (id)gamutWithCGColorSpace:(struct CGColorSpace *)arg1;
+ (id)emptyGamut;
+ (id)infiniteGamut;
+ (void)initialize;
- (id)intersectionWithGamut:(id)arg1;
- (id)unionWithGamut:(id)arg1;
- (BOOL)intersectsGamut:(id)arg1;
- (BOOL)containsGamut:(id)arg1;
@property(readonly) double volume;
@property(readonly, getter=isInfinite) BOOL infinite;
@property(readonly, getter=isEmpty) BOOL empty;
- (BOOL)isEqualToGamut:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)containsCGColor:(struct CGColor *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

