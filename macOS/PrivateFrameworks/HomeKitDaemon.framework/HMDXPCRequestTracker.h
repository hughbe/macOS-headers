//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate>
{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFTimer *_timer;
    NSString *_clientName;
    NSMutableDictionary *_pendingRequests;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void)timerDidFire:(id)arg1;
- (void)clear;
- (void)setClientName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy) NSSet *requestIdentifiers;
- (BOOL)containsMessageWithIdentifier:(id)arg1;
- (void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 qualityOfService:(long long)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)__sendReponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

