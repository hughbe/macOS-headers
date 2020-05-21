//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXControl.h>

#import <PhotosUICore/PXAccessibilityView-Protocol.h>
#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, NSVisualEffectView, PXCuratedLibraryOverlayButtonConfiguration, UXImageView, UXLabel, UXView;

@interface PXCuratedLibraryOverlayButton : UXControl <PXGReusableView, PXAccessibilityView>
{
    PXCuratedLibraryOverlayButtonConfiguration *_userData;
    NSVisualEffectView *_effectView;
    UXView *_contentView;
    UXView *_solidBackgroundView;
    UXImageView *_iconImageView;
    UXLabel *_titleLabel;
    UXLabel *_captionLabel;
    struct CGRect _clippingRect;
    struct NSEdgeInsets _hitTestInsets;
}

+ (id)defaultTitleColor;
+ (id)defaultTitleFont;
+ (void)_getSize:(out struct CGSize *)arg1 titleFrame:(out struct CGRect *)arg2 captionFrame:(out struct CGRect *)arg3 iconFrame:(out struct CGRect *)arg4 forConfiguration:(id)arg5 title:(id)arg6;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
+ (struct CGSize)_sizeOfTitle:(id)arg1 withFont:(id)arg2;
+ (id)roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;
+ (id)buttonSizeCache;
+ (id)titleSizeCache;
- (void).cxx_destruct;
@property(nonatomic) struct NSEdgeInsets hitTestInsets; // @synthesize hitTestInsets=_hitTestInsets;
@property(retain, nonatomic) UXLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UXLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UXImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UXView *solidBackgroundView; // @synthesize solidBackgroundView=_solidBackgroundView;
@property(retain, nonatomic) UXView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData; // @synthesize userData=_userData;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isAccessibilityElement;
- (void)viewDidChangeEffectiveAppearance;
- (void)_updateEffectView;
- (void)_updateEffectViewBackgroundStyle;
- (void)_platformSpecificViewSetup;
- (void)_setupEffectView;
- (void)_performAction:(id)arg1;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_setupViews;
@property(readonly, copy, nonatomic) NSString *accessibilityRole;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) BOOL isContainedInAsset;
@property(readonly, nonatomic) BOOL isAccessible;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

