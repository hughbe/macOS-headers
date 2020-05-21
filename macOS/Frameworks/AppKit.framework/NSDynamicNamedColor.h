//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCatalogColor.h>

@class NSColor;

@interface NSDynamicNamedColor : NSCatalogColor
{
}

- (BOOL)isUniform;
- (id)colorUsingType:(long long)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)alphaComponent;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (struct CGColor *)CGColor;
@property(readonly) NSColor *resolvedColor;
- (Class)classForCoder;

@end

