//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanGestureRecognizer.h>

#import <AnnotationKit/AKPenDetectionGestureRecognizerProtocol-Protocol.h>

@class NSString;

@interface AKPanGestureRecognizer : NSPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>
{
    BOOL _penGestureDetected;
    double _currentWeight;
    double _currentMaxWeight;
    struct CGPoint _locationOfFirstTouch;
}

@property(nonatomic) BOOL penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
@property(nonatomic) double currentMaxWeight; // @synthesize currentMaxWeight=_currentMaxWeight;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

