//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSScrollingBehavior : NSObject
{
}

- (void)dealloc;
- (void)automateLiveScrollOfScrollView:(id)arg1;
- (void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2;
- (void)snapRubberBandOfScrollView:(id)arg1;
- (void)scrollView:(id)arg1 panGestureRecognizerFailed:(id)arg2;
- (BOOL)scrollView:(id)arg1 panGestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)scrollView:(id)arg1 panWithGestureRecognizer:(id)arg2;
- (void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2;
- (long long)axisForSwipeTrackingGivenScrollWheelEvent:(id)arg1;
- (void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardMayBeginScrollEvent:(id)arg2;
- (BOOL)supportsConcurrentScrolling;

@end

