//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKIconImage : NSObject
{
    shared_ptr_611acf5c _iconImage;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _haloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> _calloutTextColor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)contentScale;
- (float)opacity;
- (_Bool)isBalloonShape;
- (unsigned int)calloutShape;
- (struct CGColor *)calloutTextColor;
- (struct CGColor *)calloutHaloColor;
- (struct CGColor *)calloutFillColor;
- (struct CGColor *)glyphColor;
- (struct CGColor *)haloColor;
- (struct CGColor *)fillColor;
- (struct CGSize)imageSize;
- (struct CGImage *)image;
- (id)init:(shared_ptr_611acf5c)arg1;

@end

