//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

#import <AppKit/NSCoding-Protocol.h>

@interface NSAcceleratorGestureRecognizer : NSGestureRecognizer <NSCoding>
{
    struct CGPoint _location;
    long long _stage;
    double _pressure;
}

@property(readonly) long long stage; // @synthesize stage=_stage;
@property(readonly) double pressure; // @synthesize pressure=_pressure;
- (id)_desiredPressureBehavior;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_appendSubclassDescription:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

