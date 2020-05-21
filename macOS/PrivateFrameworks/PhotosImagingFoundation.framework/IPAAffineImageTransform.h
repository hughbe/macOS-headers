//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAAffineImageTransform : IPAImageTransform
{
    BOOL _canAlignToPixelsExactly;
    struct Matrix4d _matrix;
}

- (id).cxx_construct;
- (id)description;
- (BOOL)canAlignToPixelsExactly;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (id)inverseTransform;
- (struct Matrix4d)matrix;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d *)arg3 canAlignToPixelsExactly:(BOOL)arg4;

@end

