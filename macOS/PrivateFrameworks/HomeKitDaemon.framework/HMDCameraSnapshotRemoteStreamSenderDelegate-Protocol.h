//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotRemoteStreamSender, HMDCameraSnapshotSessionID, NSError;

@protocol HMDCameraSnapshotRemoteStreamSenderDelegate <NSObject>
- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotStreamSender:(HMDCameraSnapshotRemoteStreamSender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end

