//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface LPHighlightGestureRecognizer : NSGestureRecognizer
{
    struct CGPoint _startPointInWindowCoordinates;
}

- (struct CGPoint)_locationInWindow;
- (void)cancelHighlight;
- (void)updateHighlight;
- (void)startHighlightIfPossible;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

