//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSString, SiriUISiriStatusView;

@protocol SiriUISiriStatusViewDelegate <NSObject>
- (void)siriStatusView:(SiriUISiriStatusView *)arg1 didReceiveTextInput:(NSString *)arg2;
- (void)siriStatusViewHoldDidEnd:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidBegin:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewWasClicked:(SiriUISiriStatusView *)arg1;
@end

