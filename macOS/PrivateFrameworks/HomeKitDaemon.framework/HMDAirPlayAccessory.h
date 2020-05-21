//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessory.h>

#import <HomeKitDaemon/HMDAccessoryDisassociation-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryMinimumUserPrivilegeCapable-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryUserManagement-Protocol.h>
#import <HomeKitDaemon/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFExponentialBackoffTimer, HMFPairingIdentity, NSString;

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging>
{
    HMFPairingIdentity *_pairingIdentity;
    NSString *_password;
    long long _minimumUserPriviledge;
    HMFExponentialBackoffTimer *_configurationRetryTimer;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // @synthesize configurationRetryTimer=_configurationRetryTimer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (BOOL)supportsDeviceWithCapabilities:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL supportsUserManagement;
- (void)disassociateUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)backingStoreObjects:(long long)arg1;
- (void)setMinimumUserPriviledge:(long long)arg1;
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (BOOL)supportsMinimumUserPrivilege;
- (void)setReachable:(BOOL)arg1;
- (void)_handleUpdatedName:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (id)advertisement;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

