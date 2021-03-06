//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanGestureRecognizer.h>

#import <AppKit/NSCoding-Protocol.h>

@interface NSPressureSensitivePanGestureRecognizer : NSPanGestureRecognizer <NSCoding>
{
    double _defaultPressure;
    double _pressure;
    long long _flags;
}

- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)_updatePropertiesWithEvent:(id)arg1;
- (void)_updateForMouseDownWithEvent:(id)arg1;
- (void)reset;
- (id)_desiredPressureBehavior;
@property(readonly) double pressure; // @synthesize pressure=_pressure;
@property double defaultPressure;
@property BOOL recognizesOnPressureChange;
- (void)_appendSubclassDescription:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_setHasCustomDefaultPressure:(BOOL)arg1;
- (BOOL)_hasCustomDefaultPressure;

@end

