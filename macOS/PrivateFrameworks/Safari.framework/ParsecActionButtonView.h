//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBox, NSImage, NSImageView, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface ParsecActionButtonView : NSView
{
    NSImage *_image;
    NSLayoutConstraint *_captionLabelBaselineToImageViewBottomConstraint;
    long long _backgroundStyle;
    BOOL _selected;
    NSImageView *_imageView;
    NSTextField *_captionLabel;
    NSBox *_separatorView;
    NSLayoutConstraint *_imageViewTopConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTopConstraint; // @synthesize imageViewTopConstraint=_imageViewTopConstraint;
@property(nonatomic) __weak NSBox *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak NSTextField *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void)_updateSeparatorAppearance;
- (void)_updateCaptionLabelAppearance;
- (void)_updateImageViewAppearance;
- (void)_updateAppearance;
- (long long)_currentAppearance;
- (void)_setShowsCaption:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;
- (void)setImage:(id)arg1 caption:(id)arg2;

@end

