//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionViewCell.h>

#import <PhotoPrintProduct/NSAccessibilityGroup-Protocol.h>

@class CALayer, NSImage, NSString, UXImageView, UXLabel, UXView;

@interface KHThemeChooserCell : UXCollectionViewCell <NSAccessibilityGroup>
{
    CALayer *_selectionLayer;
    NSImage *_themePreviewImage;
    UXView *_imageViewOverlay;
    BOOL _cloudImageViewVisible;
    UXLabel *_themeTitleLabel;
    UXImageView *_themePreviewImageView;
    UXImageView *_cloudImageView;
    NSString *_themeTitle;
    NSString *_themeDescription;
    struct CGSize _additionalCloudSpace;
    struct NSEdgeInsets _selectionEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *themeDescription; // @synthesize themeDescription=_themeDescription;
@property(retain, nonatomic) NSString *themeTitle; // @synthesize themeTitle=_themeTitle;
@property(nonatomic) struct CGSize additionalCloudSpace; // @synthesize additionalCloudSpace=_additionalCloudSpace;
@property(nonatomic) struct NSEdgeInsets selectionEdgeInsets; // @synthesize selectionEdgeInsets=_selectionEdgeInsets;
@property(nonatomic) BOOL cloudImageViewVisible; // @synthesize cloudImageViewVisible=_cloudImageViewVisible;
@property(readonly, nonatomic) UXImageView *cloudImageView; // @synthesize cloudImageView=_cloudImageView;
@property(readonly, nonatomic) UXImageView *themePreviewImageView; // @synthesize themePreviewImageView=_themePreviewImageView;
@property(readonly, nonatomic) UXLabel *themeTitleLabel; // @synthesize themeTitleLabel=_themeTitleLabel;
- (BOOL)accessibilityPerformPress;
- (struct CGRect)accessibilityFrame;
- (void)setSelected:(BOOL)arg1;
- (void)_layoutSelectionLayerIfNeeded;
- (void)indicateSelectionState:(BOOL)arg1 animated:(BOOL)arg2;
- (id)selectionLayer;
- (void)setThemePreviewImage:(id)arg1 animated:(BOOL)arg2;
- (void)animateView:(id)arg1 visible:(BOOL)arg2 duration:(double)arg3;
- (void)layout;
- (void)initConstraints;
- (void)initCloudImageView;
- (void)initThemeTitleLabel;
- (void)initThemePreviewImageView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

