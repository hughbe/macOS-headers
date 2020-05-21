//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDDevice, NSMutableDictionary, NSString;

@interface HMDCameraSessionID : HMFObject <NSCopying>
{
    BOOL _spiClient;
    NSString *_sessionID;
    NSString *_descriptionString;
    NSString *_cameraSessionAppID;
    HMDDevice *_remoteDevice;
    NSMutableDictionary *_milestones;
    NSString *_deviceSectionName;
    NSMutableDictionary *_deviceMilestones;
}

+ (id)millisecondsSince1970;
+ (id)applicationIdentiferForMessage:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *deviceMilestones; // @synthesize deviceMilestones=_deviceMilestones;
@property(readonly) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(readonly) NSMutableDictionary *milestones; // @synthesize milestones=_milestones;
@property(readonly, getter=isSPIClient) BOOL spiClient; // @synthesize spiClient=_spiClient;
@property(readonly) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly) NSString *cameraSessionAppID; // @synthesize cameraSessionAppID=_cameraSessionAppID;
@property(readonly) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)_prepareDeviceMilestones;
- (void)addParameterFor:(id)arg1 value:(id)arg2;
- (void)setParameterForPath:(id)arg1 value:(id)arg2;
- (void)setParameterFor:(id)arg1 value:(id)arg2;
- (void)markMilestoneForPath:(id)arg1;
- (void)markMilestoneFor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5;

@end

