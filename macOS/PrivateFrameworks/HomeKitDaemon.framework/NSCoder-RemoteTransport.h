//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class HMFMessage;

@interface NSCoder (RemoteTransport)
- (id)supportedFeatures;
- (BOOL)isAtLeastDataVersion4;
- (long long)dataVersion;
@property(readonly, getter=isSharedUser) BOOL sharedUser;
- (id)user;
- (BOOL)isForNonAdminSharedUser;
- (BOOL)isRemoteUserAdministrator;
- (BOOL)isRemoteGatewayCoder;
- (BOOL)isRemoteTransportOnSameAccount;
- (BOOL)isRemoteTransport;
- (BOOL)isLocalStore;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (BOOL)isEntitledToProvideAccessorySetupPayload;
- (BOOL)isEntitledForHomeLocationAccess;
- (BOOL)isAuthorizedForLocationAccess;
- (BOOL)isEntitledForSPIAccess;
- (id)applicationBundleIdentifier;
@property(readonly) unsigned long long hmd_homeManagerOptions;
@property(readonly) HMFMessage *hmd_message;
@property(readonly, getter=isXPCTransport) BOOL xpcTransport;
@end

