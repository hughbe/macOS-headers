//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import <HomeKitDaemon/HMDLocationDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CLRegion, NSString;

@interface HMDLocationEvent : HMDEvent <HMDLocationDelegate, NSSecureCoding>
{
    CLRegion *_region;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
- (id)metricData;
- (void)didExitRegion:(id)arg1;
- (void)didEnterRegion:(id)arg1;
- (void)informLocationEventOccuranceToResident;
- (void)_handleLocationEventOccured:(id)arg1;
- (void)locationEventOccured;
- (BOOL)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createPayload;
@property(readonly, copy, nonatomic) CLRegion *uniqueRegion;
- (id)dumpState;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (void)checkFMFStatus:(id)arg1;
- (void)fmfStatusUpdateNotification:(id)arg1;
- (void)_registerForMessages;
- (id)emptyModelObject;
- (BOOL)isActive;
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

