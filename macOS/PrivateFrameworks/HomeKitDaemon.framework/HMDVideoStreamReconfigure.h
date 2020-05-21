//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraStreamSessionID, HMFTimer, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol HMDVideoStreamReconfigureDelegate, OS_dispatch_queue;

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging>
{
    BOOL _reconfigurationMode;
    NSDictionary *_downlinkQualityInfo;
    NSMutableArray *_reconfigureEvents;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_sessionID;
    id <HMDVideoStreamReconfigureDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(nonatomic) BOOL reconfigurationMode; // @synthesize reconfigurationMode=_reconfigurationMode;
@property(readonly) __weak id <HMDVideoStreamReconfigureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *downgradeDebouceTimer; // @synthesize downgradeDebouceTimer=_downgradeDebouceTimer;
@property(retain, nonatomic) HMFTimer *upgradeDebouceTimer; // @synthesize upgradeDebouceTimer=_upgradeDebouceTimer;
@property(readonly, nonatomic) NSMutableArray *reconfigureEvents; // @synthesize reconfigureEvents=_reconfigureEvents;
@property(retain, nonatomic) NSDictionary *downlinkQualityInfo; // @synthesize downlinkQualityInfo=_downlinkQualityInfo;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (BOOL)_isReconfigureFlipFlop;
- (void)_addReconfigureEvent:(unsigned long long)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_processDownlinkQualityChanged:(id)arg1;
- (void)_processDownlinkQuality;
- (void)downlinkQualityChanged:(id)arg1;
- (void)updateReconfigurationMode:(BOOL)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

