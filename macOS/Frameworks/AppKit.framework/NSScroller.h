//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSScrollerImpDelegate.h"

@interface NSScroller : NSControl <NSScrollerImpDelegate>
{
    double _curValue;
    double _percent;
    double _knobSize;
    struct __sFlags2 {
        unsigned int hitPart:4;
        unsigned int controlSize:2;
        unsigned int inMaxEnd:1;
        unsigned int setFloatValueOverridden:1;
        unsigned int setFloatValueKnobProportionOverridden:1;
        unsigned int style:1;
        unsigned int styleCompatibility:1;
        unsigned int overlayScrollerState:2;
        unsigned int knobStyle:2;
        unsigned int sbPaused:1;
        unsigned int isAnimatingKnob:1;
        unsigned int isTrackingMouse:1;
        unsigned int reserved:14;
    } _sFlags2;
    id _reserved;
    SEL _reserved2;
    struct _sFlags {
        unsigned int isHoriz:1;
        unsigned int arrowsLoc:2;
        unsigned int partsUsable:2;
        unsigned int fine:1;
        unsigned int needsEnableFlush:1;
        unsigned int thumbing:1;
        unsigned int slotDrawn:1;
        unsigned int knobDrawn:1;
        unsigned int lit:1;
        unsigned int knobLit:1;
        unsigned int reserved:1;
        unsigned int controlTint:3;
        unsigned int repeatCount:16;
    } sFlags;
}

+ (void)_drawEndCapInRect:(struct CGRect)arg1;
+ (void)_setArrowsConfig:(int)arg1;
+ (int)_arrowsConfig;
+ (long long)preferredScrollerStyle;
+ (void)initialize;
+ (double)scrollerWidth;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1 scrollerStyle:(long long)arg2;
+ (void)_aquaScrollerVariantChanged:(id)arg1;
+ (void)_aquaScrollerBehaviorChanged:(id)arg1;
+ (BOOL)isCompatibleWithOverlayScrollers;
+ (id)defaultAnimationForKey:(id)arg1;
+ (BOOL)scrollerSubclassIsCompatibleWithOverlayScrollers;
+ (BOOL)accessibilityIsSingleCelled;
- (unsigned int)_CAViewFlags;
- (void)_windowChangedKeyState;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setFloatValue:(float)arg1 knobProportion:(double)arg2;
@property double knobProportion;
- (double)doubleValue;
- (float)floatValue;
@property(readonly) unsigned long long hitPart;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateTrackingAreas;
- (BOOL)_windowResizeMouseLocationIsInVisibleScrollerThumb:(struct CGPoint)arg1;
- (void)trackPagingArea:(id)arg1;
- (void)trackScrollButtons:(id)arg1;
- (void)trackKnob:(id)arg1;
- (void)_postScrollerDidEndTrackingNotification;
- (void)_postScrollerDidBeginTrackingNotification;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (unsigned long long)testPart:(struct CGPoint)arg1;
- (unsigned long long)_testPartUsingDestinationFloatValue:(struct CGPoint)arg1;
- (void)highlight:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_compositeScrollerPart:(unsigned long long)arg1 inRect:(struct CGRect)arg2 withAlpha:(double)arg3 drawHandler:(CDUnknownBlockType)arg4;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)_old_drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)drawKnob;
- (void)_old_drawKnob;
- (void)drawArrow:(unsigned long long)arg1 highlight:(BOOL)arg2;
- (void)drawArrow:(unsigned long long)arg1 highlightPart:(unsigned long long)arg2;
- (void)_old_drawArrow:(unsigned long long)arg1 highlightPart:(unsigned long long)arg2;
- (id)_vibrancyFilter;
- (BOOL)allowsVibrancy;
- (struct __CFDictionary *)_copyCompositeCoreUIDrawOptions;
- (void)setEnabled:(BOOL)arg1;
- (unsigned long long)_realControlTint;
@property unsigned long long controlSize;
@property unsigned long long controlTint;
@property unsigned long long arrowsPosition;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
@property(readonly) unsigned long long usableParts;
- (void)checkSpaceForParts;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (void)drawParts;
@property long long knobStyle;
@property long long scrollerStyle;
- (void)_really_setLionScrollerStyle:(long long)arg1;
- (BOOL)wantsLayer;
- (void)_updateWantsLayer;
- (BOOL)_scrollerWantsLayer;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_routeAroundScrollerStyleAccessors;
- (void)_setWindow:(id)arg1;
- (double)_repeatTime;
- (BOOL)_useTigerMetrics;
- (BOOL)_desiredLayerSizeMeritsTiledBackingLayer:(struct CGSize)arg1;
- (long long)_orientation;
- (void)_setIsHorizontal:(BOOL)arg1;
- (void)_setNeedsDisplayIfNotLayerBackedOverlayCompatibleInRect:(struct CGRect)arg1;
- (void)_setNeedsDisplayIfNotLayerBackedOverlayCompatible;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)_setOverlayScrollerState:(unsigned long long)arg1 forceImmediately:(BOOL)arg2;
- (void)scrollerImp:(id)arg1 overlayScrollerStateChangedTo:(unsigned long long)arg2;
- (void)scrollerImp:(id)arg1 animateTrackAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 animateKnobAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 animateExpansionTransitionWithDuration:(double)arg2;
- (void)scrollerImp:(id)arg1 animateUIStateTransitionWithDuration:(double)arg2;
- (struct CGPoint)mouseLocationInScrollerForScrollerImp:(id)arg1;
- (BOOL)shouldUseLayerPerPartForScrollerImp:(id)arg1;
- (void)_setAvoidingOtherScrollerThumb:(BOOL)arg1;
- (BOOL)_avoidingOtherScrollerThumb;
- (void)resetCursorRects;
- (double)_expansionTransitionProgress;
- (void)setExpansionTransitionProgress:(double)arg1;
- (double)_uiStateTransitionProgress;
- (void)setUiStateTransitionProgress:(double)arg1;
- (void)setOverlayScrollerTrackAlpha:(double)arg1;
- (void)setOverlayScrollerKnobAlpha:(double)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)setLayer:(id)arg1;
- (BOOL)_needsMasksToBounds;
- (void)_setTrackingInKnob:(BOOL)arg1;
- (BOOL)_isTrackingInKnob;
- (BOOL)_fixScrollerImpForSwizzlers;
- (void)_replaceScrollerImp;
- (void)_setLionScrollerStyle:(long long)arg1;
- (long long)_lionScrollerStyle;
- (struct CGRect)_drawingRectForPart:(unsigned long long)arg1;
- (void)_setThumbingKnobProportion:(double)arg1;
- (double)_thumbingKnobProportion;
- (void)_setThumbingDoubleValue:(double)arg1;
- (double)_thumbingDoubleValue;
- (void)_scrollByDelta:(double)arg1;
- (void)_incrementPage:(id)arg1;
- (void)_decrementPage:(id)arg1;
- (void)_incrementLine:(id)arg1;
- (void)_decrementLine:(id)arg1;
- (void)setUsePresentationValue:(BOOL)arg1;
- (void)setPresentationValue:(double)arg1;
- (double)overlayScrollerTrackAlpha;
- (double)overlayScrollerKnobAlpha;
- (unsigned long long)_overlayScrollerState;
- (id)scrollerImp;
- (void)_automateLiveScroll;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilityUIElementForPartCode:(unsigned long long)arg1;
- (BOOL)_accessibilityIsSupportedPartCode:(unsigned long long)arg1;
- (const unsigned long long *)_accessibilitySupportedPartCodes;
- (void)accessibilitySetHiddenAttribute:(id)arg1;
- (BOOL)accessibilityIsHiddenAttributeSettable;
- (id)accessibilityHiddenAttribute;
- (id)_accessibilityScrollView;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

