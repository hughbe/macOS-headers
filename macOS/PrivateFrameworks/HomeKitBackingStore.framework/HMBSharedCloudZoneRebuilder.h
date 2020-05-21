//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBCloudZoneRebuilder-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NAFuture, NSString;

__attribute__((visibility("hidden")))
@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder>
{
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
    NAFuture *_rebuildCompleteFuture;
    HMBCloudZone *_cloudZone;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(nonatomic) __weak HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain, nonatomic) NAFuture *rebuildCompleteFuture; // @synthesize rebuildCompleteFuture=_rebuildCompleteFuture;
@property(copy) HMBCloudZoneRebuilderStatus *rebuilderStatus; // @synthesize rebuilderStatus=_rebuilderStatus;
- (id)logIdentifier;
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;
- (void)handleZoneChanged;
- (void)handleIdentityLost;
- (id)zoneStartUp;
- (void)rebuild;
- (id)initWithCloudZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

