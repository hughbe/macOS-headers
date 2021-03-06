//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/NSProTextField.h>

@interface NSProScrubber : NSProTextField
{
    long long _incrementTrackingTag;
    long long _decrementTrackingTag;
    unsigned int _proReserved4;
}

+ (void)initialize;
- (BOOL)_isFirstRepsonder;
- (BOOL)_shouldInvertScrollWheel;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)sizeToFit;
- (void)cancel:(id)arg1;
- (void)drawCell:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetCursorRects;
- (void)_resetTrackingRects;
- (void)_removeTrackingRects;
- (void)scrollWheel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_hasMouseOverDecrementArrow;
- (BOOL)_hasMouseOverIncrementArrow;
- (void)setNeedsDisplay:(BOOL)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setTintIndex:(long long)arg1;
- (long long)tintIndex;
- (id)_binderForBinding:(id)arg1 withBinders:(id)arg2 createAutoreleasedInstanceIfNotFound:(BOOL)arg3;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (long long)actionType;
- (BOOL)continuous;
- (void)setContinuous:(BOOL)arg1;
- (void)setAutorepeat:(BOOL)arg1;
- (BOOL)autorepeat;
- (double)fineIncrement;
- (void)setFineIncrement:(double)arg1;
- (double)normalIncrement;
- (void)setNormalIncrement:(double)arg1;
- (double)coarseIncrement;
- (void)setCoarseIncrement:(double)arg1;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (void)setCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

