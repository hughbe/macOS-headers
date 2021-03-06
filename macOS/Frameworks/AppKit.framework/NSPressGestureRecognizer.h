//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface NSPressGestureRecognizer : NSGestureRecognizer <NSCoding>
{
    struct CGPoint _location;
    unsigned long long _buttonMask;
    double _minimumPressDuration;
    double _allowableMovement;
    long long _buttonCount;
    struct {
        unsigned int enoughTimeElapsed:1;
        unsigned int gotButtonUp:1;
        unsigned int hasCustomMinPressDuration:1;
        unsigned int hasCustomAllowableMovement:1;
        unsigned int cancelPastAllowableMovement:1;
        unsigned int reserved:27;
    } _lcflags;
    long long _numberOfTouchesRequired;
    long long _activeTouchCount;
    NSMutableArray *_trackingTouchIdentities;
    NSArray *_currentTouches;
}

@property long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)startTimer;
- (void)clearTimer;
- (void)enoughTimeElapsed:(id)arg1;
- (void)reset;
@property(readonly, retain) NSArray *touches;
- (struct CGPoint)locationInView:(id)arg1;
@property BOOL cancelPastAllowableMovement;
@property double allowableMovement;
@property double minimumPressDuration;
@property unsigned long long buttonMask;
- (void)_appendSubclassDescription:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)_descriptionForTouchBarLogging;
- (void)_setHasCustomAllowableMovement:(BOOL)arg1;
- (BOOL)_hasCustomAllowableMovement;
- (void)_setHasCustomMinimumPressDuration:(BOOL)arg1;
- (BOOL)_hasCustomMinimumPressDuration;

@end

