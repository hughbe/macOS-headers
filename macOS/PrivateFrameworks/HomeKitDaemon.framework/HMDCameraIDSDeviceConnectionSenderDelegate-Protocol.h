//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraIDSDeviceConnectionSender, NSError;

@protocol HMDCameraIDSDeviceConnectionSenderDelegate <NSObject>
- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didEndSession:(NSError *)arg2;
- (void)deviceConnectionSender:(HMDCameraIDSDeviceConnectionSender *)arg1 didSetup:(NSError *)arg2;
@end

