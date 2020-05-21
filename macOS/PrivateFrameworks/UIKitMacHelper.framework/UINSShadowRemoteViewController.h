//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <UIKitMacHelper/NSRemoteViewControllerSPI_50629596-Protocol.h>
#import <UIKitMacHelper/UINSShadowRemoteViewController-Protocol.h>

@class NSString, UINSWindow, UIView, UIViewController;
@protocol UINSShadowRemoteViewController_UIView, UINSShadowRemoteViewController_UIViewController, UINSShadowRemoteViewController_UIWindow;

__attribute__((visibility("hidden")))
@interface UINSShadowRemoteViewController : NSRemoteViewController <NSRemoteViewControllerSPI_50629596, UINSShadowRemoteViewController>
{
    id <UINSShadowRemoteViewController_UIViewController> _trackedViewController;
    id <UINSShadowRemoteViewController_UIView> _trackedView;
    id <UINSShadowRemoteViewController_UIWindow> _trackedUIWindow;
    UINSWindow *_hostWindow;
    struct CGRect _lastViewFrameInUIWindow;
}

+ (void)maybeReestablishFirstResponderStateForUIWindow:(id)arg1 uiFirstResponder:(id)arg2;
- (void).cxx_destruct;
- (BOOL)shouldLayerBackRemoteView:(id)arg1;
- (void)updateTrackedViewPosition:(id)arg1;
- (void)startTrackingView;
@property(nonatomic) __weak UIView *trackedView;
@property(nonatomic) __weak UIViewController *trackedViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

