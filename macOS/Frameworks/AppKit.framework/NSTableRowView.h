//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibilityRow.h"

@class NSArray, NSColor, NSString, NSTableViewActionButton;

@interface NSTableRowView : NSView <NSAccessibilityRow>
{
    id *_columnViews;
    long long _columnCount;
    long long _selectionHighlightStyle;
    long long _draggingDestinationFeedbackStyle;
    double _dropOperationIndentation;
    NSColor *_backgroundColor;
    double _selectionAlpha;
    unsigned int _targetForDropOperation:1;
    unsigned int _groupRowStyle:2;
    unsigned int _priorRowSelected:1;
    unsigned int _nextRowSelected:1;
    unsigned int _selected:1;
    unsigned int _emphasized:1;
    unsigned int _hasAssociatedViews:1;
    unsigned int _backgroundStylesDirty:1;
    unsigned int _isFloating:1;
    unsigned int _hasCustomGridColor:1;
    unsigned int _usingCachedImageOnly:1;
    unsigned int _gridStyleMask:4;
    unsigned int _updatingBackgroundStyle:1;
    unsigned int _locationNeedsUpdating:1;
    unsigned int _isStatic:1;
    unsigned int _hasSelectedBackgroundView:1;
    unsigned int _selectionBlendingMode:1;
    unsigned int _checkingFontRefColor:1;
    unsigned int _forDeletion:1;
    unsigned int _emphasizedForDropOperation:1;
}

+ (id)defaultAnimationForKey:(id)arg1;
@property double indentationForDropOperation; // @synthesize indentationForDropOperation=_dropOperationIndentation;
@property long long draggingDestinationFeedbackStyle; // @synthesize draggingDestinationFeedbackStyle=_draggingDestinationFeedbackStyle;
- (long long)accessibilityIndex;
- (void)removeViewAtUnknownColumn:(id)arg1;
- (id)associatedViewsForColumn:(long long)arg1;
- (void)performHandler:(CDUnknownBlockType)arg1 onAssociatedViewsWithColumn:(long long)arg2;
- (id)associatedViewWithReuseIdentifier:(id)arg1;
- (id)extractAssociatedViewWithReuseIdentifier:(id)arg1;
- (void)removeAssociatedView:(id)arg1;
- (void)associateView:(id)arg1 withColumn:(long long)arg2;
@property(setter=_setLocationNeedsUpdating:) BOOL _locationNeedsUpdating;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)_selectionNeedsRedrawingOnFrameChange;
- (BOOL)preservesContentDuringLiveResize;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)insertColumnAtIndex:(long long)arg1;
- (void)moveViewsFromColumn:(long long)arg1 toColumn:(long long)arg2;
- (void)_setAssociatedViews:(id)arg1;
- (id)_associatedViews;
- (id)updateKeyViewLoop;
- (BOOL)_ignoreForKeyViewLoop;
- (void)setView:(id)arg1 atColumn:(long long)arg2;
@property(setter=_setUsingCachedImageOnly:) BOOL _usingCachedImageOnly;
- (id)viewAtColumn:(long long)arg1;
- (void)_ensureColumnViews;
- (long long)columnCount;
@property long long numberOfColumns;
- (struct CGRect)overlayBounds;
- (void)drawOverlayRect:(struct CGRect)arg1;
- (BOOL)_needsOverlayDrawing;
- (void)drawRect:(struct CGRect)arg1;
- (void)_didRemoveLayer;
- (void)layout;
- (BOOL)_shouldHaveDropFeedback;
@property(retain) NSArray *editActionButtons;
@property(retain) NSView *grayView;
@property(retain) NSTableViewActionButton *consumingRowActionButton;
- (void)updateLayer;
- (void)_removeBackgroundDropAboveFeedbackLayer;
- (void)_udpateBackgroundDropAboveFeedbackLayer;
- (void)_removeBackgroundDropFeedbackLayer;
- (void)_updateBackgroundDropFeedbackLayer;
- (id)_makeLayerForDropFeedbackThatIsAbove:(BOOL)arg1;
- (id)_flashingKeyForLayerContentsProvider;
- (void)_removeSeparatorBackgroundLayer;
- (void)_updateSeparatorBackgroundLayer;
- (void)_setDropAboveFeedbackLayer:(id)arg1;
- (id)_dropAboveFeedbackLayer;
- (void)_setDropFeedbackLayer:(id)arg1;
- (id)_dropFeedbackLayer;
- (void)_setSeparatorLayer:(id)arg1;
- (id)_separatorLayer;
- (id)_currentLayerBackgroundColor;
- (void)_setupBackgroundLayer:(id)arg1;
- (id)_contentsFacetForSelectedBackground;
- (long long)_realSelectionHighlightStyle;
- (id)_springLoadedBlendColor;
- (BOOL)_canDisableBaseVibrancy;
- (void)_removeSelectedBackgroundView;
- (BOOL)_alwaysNeedsSelectedBackgroundView;
- (void)_updateSelectedBackgroundView;
- (BOOL)_needsSelectionBackgroundView;
- (BOOL)_shouldRemoveSelectedBackgroundViewWhenNotSelected;
- (id)_makeBlurBackgroundView;
- (void)_updateSelectionStateForVisualEffectView:(id)arg1;
- (id)_preferredAppearance;
- (void)setSelectionBlendingMode:(long long)arg1;
- (long long)selectionBlendingMode;
- (id)_makeSelectedBackgroundView;
- (id)_selectedBackgroundView;
- (void)_setSelectedBackgroundView:(id)arg1;
- (BOOL)wantsUpdateLayer;
- (void)drawDraggingDestinationFeedbackInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (BOOL)drawsBackground;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (id)_floatingBackgroundColor;
- (BOOL)_shouldUseBackgroundColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (id)_backgroundColorForFontSmoothing;
- (id)_selectedBackgroundColorForFontSmoothing;
- (id)fontSmoothingBackgroundColor;
- (BOOL)_needsBlurBackgroundView;
- (BOOL)_hasSourceListBackgroundColorOrNil;
- (void)_drawSourceListBackgroundInnerEdgeInRect:(struct CGRect)arg1;
- (void)drawGroupRowStyleGrayInverseInRect:(struct CGRect)arg1;
- (void)drawGroupRowStyleGrayInRect:(struct CGRect)arg1;
- (void)drawGroupRowStyleFinderInRect:(struct CGRect)arg1;
- (id)_backgroundColorForFloatingGroupFromColor:(id)arg1;
- (struct CGRect)_backgroundRect;
- (struct CGRect)_backgroundRectForDirtyRect:(struct CGRect)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (BOOL)drawsSeparator;
- (void)_drawSeparatorInRect:(struct CGRect)arg1 withColor:(id)arg2;
- (id)_finderStyleGroupRowTopSeparatorColor;
@property(retain) NSColor *separatorColor;
- (struct CGRect)_separatorRectAtTop;
- (struct CGRect)_separatorRect;
- (void)_drawRowNumberBadge;
- (id)_enclosingTableView;
- (BOOL)_shouldShowRowNumbers;
- (void)_drawRowNumber:(long long)arg1;
- (struct CGRect)_dropTargetRect;
- (id)dropHighlightColor;
- (id)dropHighlightBackgroundColor;
- (id)secondarySelectedControlColor;
@property(readonly, copy) NSString *description;
- (long long)_row;
- (id)primarySelectionColor;
- (void)_setForDeletion:(BOOL)arg1;
- (BOOL)_forDeletion;
- (BOOL)isOpaque;
@property(getter=isTargetForDropOperation) BOOL targetForDropOperation; // @dynamic targetForDropOperation;
- (long long)groupRowStyle2;
- (void)setGroupRowStyle2:(long long)arg1;
@property(getter=isGroupRowStyle) BOOL groupRowStyle; // @dynamic groupRowStyle;
@property(getter=isNextRowSelected) BOOL nextRowSelected; // @dynamic nextRowSelected;
@property(getter=isPreviousRowSelected) BOOL previousRowSelected;
@property(getter=isPriorRowSelected) BOOL priorRowSelected; // @dynamic priorRowSelected;
@property(getter=isSelected) BOOL selected; // @dynamic selected;
@property(getter=isEmphasized) BOOL emphasized; // @dynamic emphasized;
- (void)_updateSelectedBackgroundViewForStateChange;
- (id)_containingBackdropView;
- (void)didAddSubview:(id)arg1;
- (void)_updateLightHighlightAttributesForView:(id)arg1;
- (void)_updateLightHighlightColorForSelectedTextField:(id)arg1;
- (id)_nonFirstResponderTextColor;
- (id)selectedTextColor;
- (void)viewDidMoveToSuperview;
- (void)_updateManagedAttributesForSubviews;
- (BOOL)_hasManagedAttributes;
- (void)_updateSourceListGroupRowAttributesForView:(id)arg1;
- (id)_textFieldFromView:(id)arg1;
- (void)_updateBackgroundStyles;
- (void)viewWillDraw;
- (void)_updateBackgroundStylesForReals;
- (void)_setBackgroundStyle:(long long)arg1 forView:(id)arg2;
- (void)_windowChangedKeyState;
- (long long)backgroundStyle;
@property(readonly) long long interiorBackgroundStyle;
- (BOOL)_hasSourceListBackground;
- (BOOL)_isSourceListBackgroundColor:(id)arg1;
- (BOOL)_appearsSelected;
- (BOOL)_shouldDrawSelection;
- (BOOL)_isFadingSelection;
@property unsigned long long gridStyleMask; // @dynamic gridStyleMask;
- (void)_invalidateLayoutOrRedisplay;
- (BOOL)_isUsingUpdateLayer;
@property(getter=isFloating) BOOL floating; // @dynamic floating;
- (BOOL)floatingStyle;
@property double selectionAlpha;
@property(copy) NSColor *backgroundColor;
@property long long selectionHighlightStyle;
@property BOOL emphasizedForDropOperation; // @dynamic emphasizedForDropOperation;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_decodeStaticContentWithCoder:(id)arg1;
- (void)_encodeStaticContentWithCoder:(id)arg1;
@property BOOL isStatic;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonTRVInit;
- (id)accessibilityFocusedUIElement;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)accessibilityParentAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

