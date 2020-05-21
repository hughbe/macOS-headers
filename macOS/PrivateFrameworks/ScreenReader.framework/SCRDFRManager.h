//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/AXETrackingFlickGestureRecognizerDelegate-Protocol.h>
#import <ScreenReader/AXETrackingHoldGestureRecognizerDelegate-Protocol.h>
#import <ScreenReader/AXETrackingSplitTapGestureRecognizerDelegate-Protocol.h>
#import <ScreenReader/AXETrackingTapGestureRecognizerDelegate-Protocol.h>
#import <ScreenReader/AXETrackingTouchInputDeviceDelegate-Protocol.h>

@class AXEDFRDevice, AXETrackingFlickGestureRecognizer, AXETrackingHoldGestureRecognizer, AXETrackingSplitTapGestureRecognizer, AXETrackingTapGestureRecognizer, AXETrackingTouchEvent, NSDate, NSString, SCRApplicationManager, SCRCThreadKey, SCRDFRFocusManager, SCRElement, SCREventFactory, SCROutputManager, SCRThrottler;

__attribute__((visibility("hidden")))
@interface SCRDFRManager : NSObject <AXETrackingTouchInputDeviceDelegate, AXETrackingFlickGestureRecognizerDelegate, AXETrackingHoldGestureRecognizerDelegate, AXETrackingSplitTapGestureRecognizerDelegate, AXETrackingTapGestureRecognizerDelegate>
{
    BOOL _isProcessingDFRGestureEvents;
    BOOL __flickGestureRecognizerAborted;
    BOOL __singleTapAndHoldGestureRecognizerAborted;
    int __currentTouchCount;
    SCRCThreadKey *__threadKey;
    SCRDFRFocusManager *__dfrFocusManager;
    SCREventFactory *__eventFactory;
    SCROutputManager *__outputManager;
    SCRApplicationManager *__applicationManager;
    AXEDFRDevice *__dfrDevice;
    AXETrackingFlickGestureRecognizer *__flickGestureRecognizer;
    AXETrackingTapGestureRecognizer *__singleTapGestureRecognizer;
    AXETrackingTapGestureRecognizer *__doubleTapGestureRecognizer;
    AXETrackingHoldGestureRecognizer *__singleTapAndHoldGestureRecognizer;
    AXETrackingSplitTapGestureRecognizer *__splitTapGestureRecognizer;
    long long __currentState;
    SCRElement *__elementUnderFinger;
    NSDate *__lastEmptyHitTimestamp;
    AXETrackingTouchEvent *__lastTapEvent;
    SCRThrottler *__passthruFeedbackThrottler;
    struct CGPoint __lastEmptyHitPoint;
    struct CGPoint __lastTouchPoint;
    struct CGPoint __passthruTouchStartPoint;
    struct CGPoint __lastPassthruTouchPoint;
    struct CGSize __passthruTouchOffset;
    struct CGPoint __pointToMoveFocusTo;
}

- (void).cxx_destruct;
@property struct CGPoint _pointToMoveFocusTo; // @synthesize _pointToMoveFocusTo=__pointToMoveFocusTo;
@property(retain, nonatomic) SCRThrottler *_passthruFeedbackThrottler; // @synthesize _passthruFeedbackThrottler=__passthruFeedbackThrottler;
@property(nonatomic) struct CGSize _passthruTouchOffset; // @synthesize _passthruTouchOffset=__passthruTouchOffset;
@property(nonatomic) struct CGPoint _lastPassthruTouchPoint; // @synthesize _lastPassthruTouchPoint=__lastPassthruTouchPoint;
@property(nonatomic) struct CGPoint _passthruTouchStartPoint; // @synthesize _passthruTouchStartPoint=__passthruTouchStartPoint;
@property(retain, nonatomic) AXETrackingTouchEvent *_lastTapEvent; // @synthesize _lastTapEvent=__lastTapEvent;
@property(nonatomic) struct CGPoint _lastTouchPoint; // @synthesize _lastTouchPoint=__lastTouchPoint;
@property(retain, nonatomic) NSDate *_lastEmptyHitTimestamp; // @synthesize _lastEmptyHitTimestamp=__lastEmptyHitTimestamp;
@property(nonatomic) struct CGPoint _lastEmptyHitPoint; // @synthesize _lastEmptyHitPoint=__lastEmptyHitPoint;
@property(retain, nonatomic) SCRElement *_elementUnderFinger; // @synthesize _elementUnderFinger=__elementUnderFinger;
@property(nonatomic) int _currentTouchCount; // @synthesize _currentTouchCount=__currentTouchCount;
@property(nonatomic) long long _currentState; // @synthesize _currentState=__currentState;
@property(nonatomic) BOOL _singleTapAndHoldGestureRecognizerAborted; // @synthesize _singleTapAndHoldGestureRecognizerAborted=__singleTapAndHoldGestureRecognizerAborted;
@property(nonatomic) BOOL _flickGestureRecognizerAborted; // @synthesize _flickGestureRecognizerAborted=__flickGestureRecognizerAborted;
@property(retain, nonatomic) AXETrackingSplitTapGestureRecognizer *_splitTapGestureRecognizer; // @synthesize _splitTapGestureRecognizer=__splitTapGestureRecognizer;
@property(retain, nonatomic) AXETrackingHoldGestureRecognizer *_singleTapAndHoldGestureRecognizer; // @synthesize _singleTapAndHoldGestureRecognizer=__singleTapAndHoldGestureRecognizer;
@property(retain, nonatomic) AXETrackingTapGestureRecognizer *_doubleTapGestureRecognizer; // @synthesize _doubleTapGestureRecognizer=__doubleTapGestureRecognizer;
@property(retain, nonatomic) AXETrackingTapGestureRecognizer *_singleTapGestureRecognizer; // @synthesize _singleTapGestureRecognizer=__singleTapGestureRecognizer;
@property(retain, nonatomic) AXETrackingFlickGestureRecognizer *_flickGestureRecognizer; // @synthesize _flickGestureRecognizer=__flickGestureRecognizer;
@property(retain, nonatomic) AXEDFRDevice *_dfrDevice; // @synthesize _dfrDevice=__dfrDevice;
@property(retain, nonatomic) SCRApplicationManager *_applicationManager; // @synthesize _applicationManager=__applicationManager;
@property(retain, nonatomic) SCROutputManager *_outputManager; // @synthesize _outputManager=__outputManager;
@property(retain, nonatomic) SCREventFactory *_eventFactory; // @synthesize _eventFactory=__eventFactory;
@property(retain, nonatomic) SCRDFRFocusManager *_dfrFocusManager; // @synthesize _dfrFocusManager=__dfrFocusManager;
@property(retain, nonatomic) SCRCThreadKey *_threadKey; // @synthesize _threadKey=__threadKey;
@property(nonatomic) BOOL isProcessingDFRGestureEvents; // @synthesize isProcessingDFRGestureEvents=_isProcessingDFRGestureEvents;
- (void)_sendDFRBrailleLine;
- (void)_drawFocusRingAroundAndAnnounceElement:(id)arg1;
- (void)_drawFocusRingAroundElement:(id)arg1;
- (struct CGPoint)_dfrCoordinateFromNormalizedCoordinate:(struct CGPoint)arg1;
- (void)_exitDirectTouchMode;
- (void)_handleDirectTouchMoveToPoint:(struct CGPoint)arg1;
- (void)_enterDirectTouchModeAtPoint:(struct CGPoint)arg1;
- (void)_performDefaultActionOnFocusedElement;
- (void)_echoFocusedElement:(id)arg1;
- (void)_moveFocusToPoint:(struct CGPoint)arg1;
- (void)_trySwitchingToTrackingMode;
- (void)_transitionToState:(long long)arg1;
- (void)_resetLastEmptyHitPointAndTimestamp;
- (void)handleRefreshBrailleLineEvent:(id)arg1;
- (void)handleDFRBrailleRoutingEvent:(id)arg1 request:(id)arg2 uiElement:(id)arg3;
- (void)tapGestureRecognizer:(id)arg1 tapAborted:(id)arg2;
- (void)tapGestureRecognizer:(id)arg1 tapped:(id)arg2;
- (void)splitTapGestureRecognizer:(id)arg1 splitTapped:(id)arg2;
- (void)holdGestureRecognizer:(id)arg1 aborted:(id)arg2;
- (void)holdGestureRecognizer:(id)arg1 stabilized:(id)arg2;
- (void)flickGestureRecognizer:(id)arg1 aborted:(id)arg2;
- (void)flickGestureRecognizer:(id)arg1 flickedAngle:(double)arg2;
- (void)touchInputDevice:(id)arg1 capturedGestureEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)synthesizeTouchUpAtLocation:(struct CGPoint)arg1;
- (void)synthesizeTouchMoveToLocation:(struct CGPoint)arg1;
- (void)synthesizeTouchDownAtLocation:(struct CGPoint)arg1;
- (void)synthesizeTapAtLocation:(struct CGPoint)arg1;
- (void)handleContextualHelpEvent:(id)arg1;
- (void)dealloc;
- (id)initWithFocusManager:(id)arg1 outputManager:(id)arg2 applicationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

