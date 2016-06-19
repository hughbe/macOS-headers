//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSFont, NSString;

@interface NSBox : NSView
{
    id _titleCell;
    id _contentView;
    struct CGSize _offsets;
    struct CGRect _borderRect;
    struct CGRect _titleRect;
    struct __bFlags {
        unsigned int borderType:2;
        unsigned int titlePosition:3;
        unsigned int backgroundTransparent:1;
        unsigned int orientation:2;
        unsigned int needsTile:1;
        unsigned int transparent:1;
        unsigned int colorAltInterpretation:1;
        unsigned int boxType:3;
        unsigned int useSuperAddSubview:1;
        unsigned int _RESERVED:17;
    } _bFlags;
    id _unused;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(copy) NSColor *fillColor;
@property(copy) NSColor *borderColor;
@property double cornerRadius;
@property double borderWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)_viewDidChangeAppearance:(id)arg1;
- (BOOL)_separatorBoxIsHorizontal;
- (id)_lineColor;
- (void)_setLineColor:(id)arg1;
@property unsigned long long boxType;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (void)_resetLayerContentsFromCustomBox;
- (void)_setLayerContentsForCustomBox;
- (void)layout;
- (BOOL)autoresizesSubviews;
- (void)_didRemoveLayer;
- (void)updateConstraints;
- (BOOL)_needsTitleTextField;
- (void)_updateTitleTextField;
- (BOOL)_isOldStyleBordered;
- (struct CGRect)_titleTextFieldFrame;
- (void)_removeTitleTextField;
- (BOOL)_needsBackgroundView;
- (BOOL)_isBoxSeparator;
- (void)_removeBackgroundView;
- (void)_updateSeparatorBackgroundView;
- (void)_updateGrooveBackgroundView;
- (struct CGRect)_grooveFrameRect;
- (void)_updateBackgroundView;
- (void)_setTitleTextField:(id)arg1;
- (id)_titleTextField;
- (void)_setBackgroundView:(id)arg1;
- (id)_backgroundView;
- (struct CGRect)_backgroundViewFrame;
- (struct CGRect)_borderRectForOldStyleLineBox;
- (void)_resetLayerContentsToEmpty;
- (BOOL)_justDrawsAGrooveOnOneSide;
- (BOOL)wantsUpdateLayer;
- (void)viewWillDraw;
- (BOOL)_drawRectIfEmpty;
- (void)setTitleWithMnemonic:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
@property NSView *contentView;
- (void)setFrameFromContentFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidLiveResizeFromRect:(struct CGRect)arg1;
- (BOOL)preservesContentDuringLiveResize;
@property(getter=isTransparent) BOOL transparent;
@property struct CGSize contentViewMargins;
@property(readonly) id titleCell;
@property(readonly) struct CGRect titleRect;
@property(readonly) struct CGRect borderRect;
@property(retain) NSFont *titleFont;
@property(copy) NSString *title;
@property unsigned long long titlePosition;
@property unsigned long long borderType;
- (void)_invalidateLayerContentsForStateChange;
- (unsigned long long)_effectiveTitlePosition;
- (void)dealloc;
- (void)_tile:(BOOL)arg1;
- (BOOL)canSmoothFontsInLayer;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupAuxiliaryStorage;
- (id)_auxiliaryStorage;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityTitleUIElementAttribute;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (id)accessibilityContentsAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)ns_widgetType;

@end

