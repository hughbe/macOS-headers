//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class PXImageViewSpec, PXTitleSubtitleLabelSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec
{
    PXTitleSubtitleLabelSpec *_titleSubtitleSpec;
    PXImageViewSpec *_imageSpec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXImageViewSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec; // @synthesize titleSubtitleSpec=_titleSubtitleSpec;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

