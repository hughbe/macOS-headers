//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotData, HMDVideoStreamInterface;

@protocol HMDVideoStreamLastDecodedFrameDelegate <NSObject>
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didGetLastDecodedFrame:(HMDCameraSnapshotData *)arg2;
@end

