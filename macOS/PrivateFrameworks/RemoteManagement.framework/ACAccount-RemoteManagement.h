//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (RemoteManagement)
@property(setter=rm_setmanagedByOlympus:) BOOL rm_managedByOlympus;
@property(copy, setter=rm_setPersonaIdentifier:) NSString *rm_personaIdentifier;
@property(copy, setter=rm_setRemoteManagingAccountIdentifier:) NSString *rm_remoteManagingAccountIdentifier;
@property(copy, setter=rm_setManagementSourceIdentifier:) NSString *rm_managementSourceIdentifier;
@property(copy, setter=rm_setEnrollmentToken:) NSString *rm_enrollmentToken;
@property(copy, setter=rm_setAltDSID:) NSString *rm_altDSID;
@property(copy, setter=rm_setDSID:) NSNumber *rm_DSID;
@end

