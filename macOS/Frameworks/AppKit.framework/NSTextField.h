//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSAccessibilityNavigableStaticText-Protocol.h>
#import <AppKit/NSTextViewDelegate-Protocol.h>
#import <AppKit/NSUserInterfaceValidations-Protocol.h>

@class CUIStyleEffectConfiguration, NSAttributedString, NSColor, NSNumber, NSString;
@protocol NSTextFieldDelegate;

@interface NSTextField : NSControl <NSTextViewDelegate, NSUserInterfaceValidations, NSAccessibilityNavigableStaticText>
{
    double _maxLayoutWidth;
    long long _maximumNumberOfLines;
    BOOL _finishedFirstConstraintsPass;
    NSNumber *_layoutEngineWidth;
    NSNumber *_cachedLayoutEngineWidth;
    struct CGSize _cachedIntrinsicContentSize;
    unsigned long long _textAlignmentPolicy;
    long long _updateConstraintsPassCounter;
    unsigned long long _lineBreakStrategy;
    struct NSEdgeInsets _cachedLanguageAwareOutsets;
    BOOL _shouldUpdateCachedLanguageAwareOutsets;
    BOOL _shouldCheckCurrentContentsForBoundsOutsets;
    BOOL _contentsRequiresBoundsOutsets;
    SEL _errorAction;
    id _delegate;
}

+ (id)_fieldsContainingString:(id)arg1;
+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (BOOL)_shouldUseBoundsOutsetsForString:(id)arg1;
+ (struct __CFCharacterSet *)_tooBigChars;
+ (void)initialize;
+ (id)textFieldWithString:(id)arg1;
+ (id)labelWithAttributedString:(id)arg1;
+ (id)wrappingLabelWithString:(id)arg1;
+ (id)labelWithString:(id)arg1;
+ (id)_newBaseLabelWithoutTitle;
+ (id)editableTextFieldWithString:(id)arg1;
+ (id)textFieldWithAttributedString:(id)arg1;
+ (id)wrappingTextFieldWithString:(id)arg1 preferredMaxLayoutWidth:(double)arg2;
- (void)viewDidEndLiveResize;
- (void)textView:(id)arg1 prepareMenu:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3 withEvent:(id)arg4;
- (id)accessibilityValue;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (BOOL)_shouldPrintByCallingDrawRect;
- (CDStruct_6b6ad735)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (double)baselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (void)setAttributedStringValue:(id)arg1;
- (void)_deriveLineBreakModeFromAttributedString:(id)arg1;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_allowRoundingToChangeSize;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)updateConstraints;
- (void)_resetUpdateConstraintsPassCounter;
- (void)_updateConstraintsFinished;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)_performMultiPassIntrinsicSize;
- (BOOL)_hasLayoutEngine;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_updateLayoutDependentMetricsIfNeeded;
- (unsigned long long)_lineBreakStrategyForCurrentConfiguration;
@property unsigned long long lineBreakStrategy;
@property long long maximumNumberOfLines;
@property double preferredMaxLayoutWidth;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)becomeFirstResponder;
@property(readonly) BOOL acceptsFirstResponder;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property __weak id <NSTextFieldDelegate> delegate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)selectText:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
@property unsigned long long textAlignmentPolicy;
- (BOOL)textView:(id)arg1 shouldSelectCandidateAtIndex:(unsigned long long)arg2;
- (id)textView:(id)arg1 candidates:(id)arg2 forSelectedRange:(struct _NSRange)arg3;
- (id)textView:(id)arg1 candidatesForSelectedRange:(struct _NSRange)arg2;
- (void)setAutomaticTextCompletionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticTextCompletionEnabled;
- (void)setAllowsCharacterPickerTouchBarItem:(BOOL)arg1;
- (BOOL)allowsCharacterPickerTouchBarItem;
@property BOOL allowsDefaultTighteningForTruncation;
@property(copy, nonatomic) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property unsigned long long bezelStyle;
- (void)setImportsGraphics:(BOOL)arg1;
- (BOOL)importsGraphics;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (BOOL)allowsEditingTextAttributes;
@property(getter=isSelectable) BOOL selectable;
@property(getter=isEditable) BOOL editable;
@property(getter=isBezeled) BOOL bezeled;
@property(getter=isBordered) BOOL bordered;
- (void)setEnabled:(BOOL)arg1;
@property(copy) NSColor *textColor;
@property BOOL drawsBackground;
@property(copy) NSColor *backgroundColor;
@property(copy) NSAttributedString *placeholderAttributedString;
@property(copy) NSString *placeholderString;
- (void)updateCell:(id)arg1;
- (struct NSEdgeInsets)boundsOutsetsForTextLayer:(id)arg1;
- (struct NSEdgeInsets)_languageAwareOutsetsWithFont:(id)arg1;
- (void)_invalidateCachedLanguageAwareOutsets;
- (BOOL)_shouldUseBoundsOutsetsForCurrentConfig;
- (void)_invalidateEffectiveVibrantBlendingStyle;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (void)drawForegroundOfTextLayer:(id)arg1;
- (void)displayTextLayer:(id)arg1;
- (id)_preferredAppearance;
- (void)setCell:(id)arg1;
- (long long)_preferredLayerContentsRedrawPolicy;
- (id)makeBackingLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (void)setErrorAction:(SEL)arg1;
- (SEL)errorAction;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

