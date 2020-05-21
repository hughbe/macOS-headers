//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NCNotificationExtensionContext;

@interface NSViewController (NCWidgetProvidingPresentationStyles)
- (void)presentViewControllerInWidget:(id)arg1;
- (void)_invalidatePreferredContentSize;
- (void)_animatePreferredContentSize:(CDUnknownBlockType)arg1 animationStart:(CDUnknownBlockType)arg2 animationComplete:(CDUnknownBlockType)arg3;
@property struct CGSize _preferredContentSize;
@property(readonly, nonatomic) NCNotificationExtensionContext *notificationExtensionContext;
@end

