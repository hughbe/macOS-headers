//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFUnfairLock, HMSoftwareUpdate, NSString, NSUUID, _HMContext;
@protocol HMSoftwareUpdateManagerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    BOOL _started;
    HMSoftwareUpdate *_availableUpdate;
    id <HMSoftwareUpdateManagerDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_identifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(nonatomic, getter=isStarted) BOOL started; // @synthesize started=_started;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property __weak id <HMSoftwareUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleStartUpdate:(id)arg1;
- (void)_handleFetch:(id)arg1;
- (void)updateAvailableUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdatedAvailableUpdate:(id)arg1;
- (void)setAvailableUpdate:(id)arg1;
@property(readonly) HMSoftwareUpdate *availableUpdate; // @synthesize availableUpdate=_availableUpdate;
- (void)stop;
- (void)_reallyStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reconnect;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__registerForMessages;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

