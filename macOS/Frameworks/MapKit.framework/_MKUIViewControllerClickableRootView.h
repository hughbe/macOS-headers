//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSInvocation;

@interface _MKUIViewControllerClickableRootView : _MKUIViewControllerRootView
{
    BOOL _trackingClick;
    NSInvocation *_actionInvocation;
}

- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_shouldTrackEvent:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

@end

