//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitMacHelper/NSObject-Protocol.h>

@class UIView, UIViewController;

@protocol UINSShadowRemoteViewController <NSObject>
@property(nonatomic) __weak UIView *trackedView;
@property(nonatomic) __weak UIViewController *trackedViewController;
- (void)startTrackingView;
@end

