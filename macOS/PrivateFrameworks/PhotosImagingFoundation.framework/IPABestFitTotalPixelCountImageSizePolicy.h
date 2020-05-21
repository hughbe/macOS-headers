//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy
{
    long long _totalPixelCount;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGSize)_transformSize:(struct CGSize)arg1 scale:(double *)arg2;
- (BOOL)isBestFitPolicy;
- (id)initWithTotalPixelCount:(long long)arg1;

@end

