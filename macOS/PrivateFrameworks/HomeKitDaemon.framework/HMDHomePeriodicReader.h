//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDHome, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDBackgroundTaskAgentTimer *_btaReadTimer;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer; // @synthesize btaReadTimer=_btaReadTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
- (void)_startTimer;
- (void)_issueCharacteristicRequests:(id)arg1;
- (void)_checkToIssueRead;
- (void)checkToIssueRead;
- (void)startReadTimer;
- (id)_characteristicsToRead;
- (void)residentUpdated;
- (void)timerFired:(id)arg1;
- (void)handleCharacteristicBasedEventAdded:(id)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (void)configure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

