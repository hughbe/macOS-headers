//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSString, STCoreUser;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>
{
}

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)_changeAppLimitsFromAskToWarn:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL allLimitsEnabled; // @dynamic allLimitsEnabled;
@property(nonatomic) long long communicationPolicy; // @dynamic communicationPolicy;
@property(nonatomic) long long communicationWhileLimitedPolicy; // @dynamic communicationWhileLimitedPolicy;
@property(nonatomic) long long contactManagementState; // @dynamic contactManagementState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL needsToSetPasscode; // @dynamic needsToSetPasscode;
@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property(readonly) Class superclass;
@property(retain, nonatomic) STCoreUser *user; // @dynamic user;

@end

