//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mondrian/MOMediaViewSupplementary.h>

#import <Mondrian/MOMediaSectionFormattingDelegate-Protocol.h>
#import <Mondrian/NSAccessibilityGroup-Protocol.h>

@class AXTextField, CAShapeLayer, NSColor, NSString, NSTextField, NSVisualEffectView;

@interface MOPhotosSupplementaryHeader : MOMediaViewSupplementary <NSAccessibilityGroup, MOMediaSectionFormattingDelegate>
{
    NSVisualEffectView *_backdropView;
    AXTextField *_titleTextField;
    NSTextField *_subtitleTextField;
    BOOL _showFooterLine;
    BOOL _showHeaderLine;
    BOOL _wasShowingHeaderLine;
    BOOL _wasShowingFooterLine;
    CAShapeLayer *_shapeLayer;
    BOOL _showBlurBackground;
    BOOL _propogatedMouseDownToCollectionView;
    BOOL _needsSizingSubviews;
    double _titleTextFieldMinimumWidth;
    double _titleTextFieldMaximumWidth;
    double _subtitleTextFieldMinimumWidth;
    double _subtitleTextFieldMaximumWidth;
    double _horizontalPadding;
    double _textFieldInset;
    double _textFieldSpacing;
    NSColor *_lineColor;
    double _relativeDistanceFromFloatingPosition;
}

+ (struct CGSize)defaultSize;
- (void).cxx_destruct;
@property(nonatomic) double relativeDistanceFromFloatingPosition; // @synthesize relativeDistanceFromFloatingPosition=_relativeDistanceFromFloatingPosition;
@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double textFieldSpacing; // @synthesize textFieldSpacing=_textFieldSpacing;
@property(nonatomic) double textFieldInset; // @synthesize textFieldInset=_textFieldInset;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double subtitleTextFieldMaximumWidth; // @synthesize subtitleTextFieldMaximumWidth=_subtitleTextFieldMaximumWidth;
@property(nonatomic) double subtitleTextFieldMinimumWidth; // @synthesize subtitleTextFieldMinimumWidth=_subtitleTextFieldMinimumWidth;
@property(nonatomic) double titleTextFieldMaximumWidth; // @synthesize titleTextFieldMaximumWidth=_titleTextFieldMaximumWidth;
@property(nonatomic) double titleTextFieldMinimumWidth; // @synthesize titleTextFieldMinimumWidth=_titleTextFieldMinimumWidth;
@property(nonatomic) BOOL showBlurBackground; // @synthesize showBlurBackground=_showBlurBackground;
@property(nonatomic) BOOL showHeaderLine; // @synthesize showHeaderLine=_showHeaderLine;
@property(nonatomic) BOOL showFooterLine; // @synthesize showFooterLine=_showFooterLine;
@property(readonly, nonatomic) NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property(readonly, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)mediaSection:(id)arg1 stringForRangeFromDate:(id)arg2 toDate:(id)arg3;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateWithMediaSection:(id)arg1;
- (double)headerLineWidth;
- (double)textFieldsSpacing;
- (void)prepareForRecycling;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)_updateShapeLayer;
- (void)_showHideHeaderFooter;
- (BOOL)isOpaque;
- (double)constrainedWidth:(double)arg1 withMinimumWidth:(double)arg2 maximumWidth:(double)arg3 availableWidth:(double)arg4;
- (BOOL)resizeTextFields;
- (void)_drawHeaderFooterLine;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)canUseBlurBackground;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)MOPhotosSupplementaryHeaderCommonInit;
- (void)accessibilityPerformPressWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

