//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCGSWindowCornerMask.h>

__attribute__((visibility("hidden")))
@interface _NSCGSWindowCornerMask : NSCGSWindowCornerMask
{
    struct CGImage *_image;
    double _imageScale;
    struct CGRect _center;
}

- (struct CGRect)center;
- (double)imageScale;
- (struct CGImage *)image;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

