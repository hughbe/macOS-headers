//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScrollView, NSScrollerImp, NSTimer, NSTrackingArea;
@protocol NSScrollerImpPairDelegate;

@interface NSScrollerImpPair : NSObject
{
    NSScrollView *scrollView;
    id <NSScrollerImpPairDelegate> delegate;
    NSScrollerImp *verticalScrollerImp;
    NSScrollerImp *horizontalScrollerImp;
    long long scrollerStyle;
    NSTimer *overlayScrollerHideTimer;
    struct {
        unsigned int isFlipped:1;
        unsigned int wantsToFlashOverlayScrollers:1;
        unsigned int windowIsVisible:1;
        unsigned int inScrollGesture:1;
        unsigned int scrollerKnobStyle:2;
        unsigned int scrollerFlashPending:1;
        unsigned int overlayScrollerStateLocked:1;
        unsigned int inVertScroller:1;
        unsigned int inHorzScroller:1;
        unsigned int areScrollersCatchable:1;
        unsigned int shouldFadeCaughtScroller:1;
        unsigned int reserved:20;
    } flags;
    struct {
        unsigned int reserved:32;
    } flags2;
    NSTrackingArea *contentViewTrackingArea;
    struct CGPoint lastMouseInContentPoint;
    id reserved2;
    id reserved3;
}

+ (long long)scrollerLayoutDirection;
+ (void)setSuppressScrollerFlash:(BOOL)arg1 forDecendantsOfView:(id)arg2;
+ (void)_scrollerStyleRecommendationChanged:(id)arg1;
+ (void)_updateAllScrollerImpPairsForNewRecommendedScrollerStyle:(long long)arg1;
+ (void)initialize;
@property id <NSScrollerImpPairDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)updateTrackingAreas;
- (void)_addRemoveTrackingAreasAsNeeded;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(readonly) BOOL inScrollGesture;
- (void)cancelScrollGesture;
- (void)endScrollGesture;
- (void)_endScrollGestureWithCancel:(BOOL)arg1;
- (void)beginScrollGesture;
- (void)endTrackingInScrollerImp:(id)arg1;
- (void)endLiveResize;
- (void)contentAreaDidResize;
- (void)startLiveResize;
- (void)mouseExitedContentArea;
- (void)mouseMovedInContentArea;
- (void)mouseEnteredContentArea;
- (void)windowOrderedIn;
- (void)windowOrderedOut;
- (void)movedToNewWindow;
- (void)removedFromSuperview;
- (void)contentAreaDidHide;
- (void)contentAreaWillDraw;
- (void)_doWork:(CDUnknownBlockType)arg1;
- (void)contentAreaScrolledInDirection:(struct CGPoint)arg1;
- (void)contentAreaScrolled;
- (BOOL)overlayScrollerStateIsLocked;
- (void)unlockOverlayScrollerState;
- (void)lockOverlayScrollerState:(unsigned long long)arg1;
- (void)hideOverlayScrollers;
- (void)flashScrollers;
- (void)_updateOverlayScrollersStateWithReason:(id)arg1 forceAtLeastKnobsVisible:(BOOL)arg2;
- (void)_updateOverlayScrollersStateWithReason:(id)arg1 forcingVisibilityForHorizontalKnob:(long long)arg2 verticalKnob:(long long)arg3;
- (void)_rescheduleOverlayScrollerHideTimerWithDelay:(double)arg1;
- (void)_cancelOverlayScrollerHideTimer;
- (void)_overlayScrollerHideTimerFired:(id)arg1;
- (void)_beginHideOverlayScrollers;
@property(readonly) BOOL overlayScrollersShown;
- (void)_setOverlayScrollerState:(unsigned long long)arg1 forScrollerImp:(id)arg2 forceImmediately:(BOOL)arg3;
@property long long scrollerKnobStyle;
@property(retain) NSScrollerImp *horizontalScrollerImp;
@property(retain) NSScrollerImp *verticalScrollerImp;
@property long long scrollerStyle;
@property NSScrollView *scrollView;
@property(getter=isFlipped) BOOL flipped;
- (id)init;

@end

