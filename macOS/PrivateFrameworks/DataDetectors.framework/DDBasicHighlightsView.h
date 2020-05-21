//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAMediaTimingFunction, DDHighlightButton, DDHighlightObject, NSDate, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface DDBasicHighlightsView : NSView
{
    struct __DDHighlight *_highlight;
    DDHighlightButton *_button;
    int _state;
    DDHighlightObject *_highlightObject;
    unsigned long long _highlightStyle;
    struct CGRect _globalVisibleRect;
    NSString *_toolTipString;
    BOOL _layerOnly;
    struct OpaqueWKBundlePageOverlay *_overlay;
    BOOL _mouseDown;
    NSTimer *_timer;
    NSDate *_startDate;
    double _targetOpacity;
    double _initialOpacity;
    CAMediaTimingFunction *_timingFunction;
}

+ (id)defaultAnimationForKey:(id)arg1;
- (void).cxx_destruct;
@property struct OpaqueWKBundlePageOverlay *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) BOOL mouseDown; // @synthesize mouseDown=_mouseDown;
@property(nonatomic) BOOL layerOnly; // @synthesize layerOnly=_layerOnly;
@property(retain, nonatomic) NSString *toolTipString; // @synthesize toolTipString=_toolTipString;
@property(nonatomic) unsigned long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(retain, nonatomic) DDHighlightObject *highlightObject; // @synthesize highlightObject=_highlightObject;
- (void)highlight:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)drawsSomething;
- (BOOL)wantsRolloverEffect;
- (id)trackingAreaRects:(BOOL)arg1;
- (BOOL)pointIsOnButton:(struct CGPoint)arg1;
- (BOOL)pointIsOnHighlight:(struct CGPoint)arg1 onTriangle:(char *)arg2;
- (void)setGlobalVisibleRect:(struct CGRect)arg1;
- (void)setSublayerRects:(id)arg1 withArrow:(BOOL)arg2 textDirection:(long long)arg3 endsWithEOL:(BOOL)arg4;
- (struct CGRect)actionRect;
- (void)_finishSetup;
- (void)updateToolTip;
- (void)setButtonPressed:(BOOL)arg1;
- (int)currentState;
- (void)setHighlightState:(int)arg1 disableAnimation:(BOOL)arg2;
- (void)_setOpacity:(float)arg1 disableAnimation:(BOOL)arg2;
- (double)overlayAlphaValue;
- (void)setOverlayAlphaValue:(double)arg1;
- (void)setAnimatedOverlayAlphaValue:(id)arg1;
- (void)stopAnimation;
- (void)setAnimatedAlphaValue:(double)arg1;
- (void)dealloc;
- (id)init;

@end

