//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICCollapsibleBaseView.h>

@class ICImageAndMovieThumbnailView, NSImage;

@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView
{
    BOOL _showAsMovie;
    NSImage *_image;
    unsigned long long _imageScaling;
    ICImageAndMovieThumbnailView *_thumbnailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) BOOL showAsMovie; // @synthesize showAsMovie=_showAsMovie;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)performSetup;

@end

