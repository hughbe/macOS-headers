//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMCameraClip, HMCameraClipSignificantEvent, HMDCameraClipManager, HMDCameraClipSignificantEventNotification;
@protocol HMDHomePresenceCheck;

@protocol HMDCameraClipManagerDelegate <NSObject>

@optional
- (void)clipManagerDidDisableCloudStorage:(HMDCameraClipManager *)arg1;
- (void)clipManager:(HMDCameraClipManager *)arg1 didDeleteClip:(HMCameraClip *)arg2;
- (void)clipManager:(HMDCameraClipManager *)arg1 didAddSignificantEventNotification:(HMDCameraClipSignificantEventNotification *)arg2;
- (BOOL)clipManager:(HMDCameraClipManager *)arg1 shouldAddNotificationForSignificantEvent:(HMCameraClipSignificantEvent *)arg2 withHomePresence:(id <HMDHomePresenceCheck>)arg3;
- (void)clipManagerDidBecomeUnavailable:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidBecomeAvailable:(HMDCameraClipManager *)arg1;
@end

