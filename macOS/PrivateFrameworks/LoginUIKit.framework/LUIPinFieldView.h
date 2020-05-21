//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSImage, NSObject, NSProgressIndicator, NSString;

@interface LUIPinFieldView : NSView
{
    NSProgressIndicator *_progressView;
    NSButton *_tryButton;
    NSImage *_digitField;
    NSImage *_digitFieldHightlight;
    struct CGRect *_digitRects;
    struct CGRect _progressRect;
    NSString *_localizedString;
    NSString *_pinString;
    int _position;
    double _maxFontHeight;
    BOOL _enabled;
    NSObject *_target;
    SEL _action;
}

+ (struct CGSize)viewSize;
+ (struct CGSize)digitViewSize;
+ (int)PINLength;
+ (void)setPINLength:(int)arg1;
- (int)activeInputIndex;
- (struct CGRect)rectForIndex:(int)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)clearPIN;
- (id)PINString;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)_axChildren;
- (id)_axBoxChildren;
- (void)_delayedPostAccessibilityFocusChange;
- (void)_sendAction:(id)arg1;
- (id)_digitFontAttributes;
- (void)_setupDigitRectsWithFrame:(struct CGRect)arg1;

@end

