//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class NSArray, NSString, NSUUID, _HMContext;
@protocol HMUserCloudShareManagerDelegate, OS_dispatch_queue;

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver>
{
    BOOL _registered;
    id <HMUserCloudShareManagerDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_identifier;
    NSArray *_containerIDs;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *containerIDs; // @synthesize containerIDs=_containerIDs;
@property(nonatomic, getter=isRegistered) BOOL registered; // @synthesize registered=_registered;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property __weak id <HMUserCloudShareManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_registerWithCompletion:(CDUnknownBlockType)arg1;
- (void)reconnect;
- (void)registerForContainerIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleDidReceiveShare:(id)arg1;
- (void)__registerForMessages;
- (void)configure;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

