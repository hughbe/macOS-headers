//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKConditionalPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _MKDirectionalPanGestureRecognizer : _MKConditionalPanGestureRecognizer
{
    long long _direction;
    struct CGPoint _mouseDownPoint;
    double _translation;
}

@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (double)directionalTranslationInView:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)_handleMouseDragged:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;

@end

