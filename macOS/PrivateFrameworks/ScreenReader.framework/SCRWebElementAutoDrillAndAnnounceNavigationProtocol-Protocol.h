//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCREvent, SCROutputRequest;

@protocol SCRWebElementAutoDrillAndAnnounceNavigationProtocol
- (void)focusOntoAutoDrillAndAnnouceWebElement:(SCROutputRequest *)arg1;
- (BOOL)webElementSuperInteractRightWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (BOOL)webElementSuperInteractLeftWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (BOOL)webElementSuperInteractDownWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (BOOL)webElementSuperInteractUpWithEvent:(SCREvent *)arg1 request:(SCROutputRequest *)arg2;
- (void)addEndBookendToRequest:(SCROutputRequest *)arg1;
- (void)addStartBookendToRequest:(SCROutputRequest *)arg1;
@end

