//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSColor;

@interface NSColorWell : NSControl
{
    NSColor *_color;
    id _reserved;
    SEL _reserved2;
    struct __cwFlags {
        unsigned int isActive:1;
        unsigned int isBordered:1;
        unsigned int cantDraw:1;
        unsigned int isNotContinuous:1;
        unsigned int refusesFR:1;
        unsigned int reservedColorWell:27;
    } _cwFlags;
}

+ (void)_delayedDeactiveWindowlessWell:(id)arg1;
+ (void)_deactivateAllColorWells;
+ (id)_exclusiveColorPanelOwner;
+ (void)colorPanelColorChanged:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfObjectValue;
+ (void)initialize;
+ (BOOL)accessibilityIsSingleCelled;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)isOpaque;
- (id)initWithCoder:(id)arg1;
- (id)_old_initWithCoder_NSColorWell:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)refusesFirstResponder;
- (void)setRefusesFirstResponder:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
@property(copy) NSColor *color;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)acceptColor:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)windowWillClose:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)shiftModifySelection:(id)arg1;
- (void)altModifySelection:(id)arg1;
- (void)performClick:(id)arg1;
- (void)_performActivationClickWithShiftDown:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (void)activate:(BOOL)arg1;
- (BOOL)_ownsColorPanelExclusively;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
@property(readonly, getter=isActive) BOOL active;
- (void)takeColorFrom:(id)arg1;
- (void)deactivate;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBorderInRect:(struct CGRect)arg1;
- (struct __CFDictionary *)_coreUIBorderDrawOptions;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_windowChangedKeyState;
- (void)drawWellInside:(struct CGRect)arg1;
- (BOOL)drawColor;
- (void)setNeedsDisplay:(BOOL)arg1;
- (BOOL)_hasKeyboardFocus;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_colorWellCommonAwake;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
@property(getter=isBordered) BOOL bordered;
- (id)_takeColorFromDoAction:(id)arg1;
- (id)_takeColorFromAndSendActionIfContinuous:(id)arg1;
- (id)_takeColorFrom:(id)arg1 andSendAction:(BOOL)arg2;
- (BOOL)_shouldOrderFront;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityAttributeNames;

@end

