//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCoordinatedRect.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString, PXImageRequester, PXTitleSubtitleLabelSpec, PXViewSpec;

@interface PXRegionOfInterest : PXCoordinatedRect <NSCopying>
{
    PXImageRequester *_imageRequester;
    PXViewSpec *_imageViewSpec;
    NSString *_title;
    NSString *_subtitle;
    PXTitleSubtitleLabelSpec *_textViewSpec;
    CDUnknownBlockType _placeholderViewFactory;
    struct CGRect _imageContentsRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType placeholderViewFactory; // @synthesize placeholderViewFactory=_placeholderViewFactory;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *textViewSpec; // @synthesize textViewSpec=_textViewSpec;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PXViewSpec *imageViewSpec; // @synthesize imageViewSpec=_imageViewSpec;
@property(nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;

@end

