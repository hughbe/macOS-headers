//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WDSafariDriver : NSObject
{
}

+ (id)dictionaryForSafariDriverAllowRight;
+ (id)dictionaryForIsWebDeveloperRight;
+ (id)dictionaryForAuthenticateWebDeveloperRight;
+ (BOOL)validateSafariAllowsRemoteAutomationRepairingIfNeeded;
+ (BOOL)validateGroupMembershipRepairingIfNeeded:(BOOL)arg1 withUser:(id)arg2 password:(id)arg3;
+ (BOOL)validateGroupsRepairingIfNeeded:(BOOL)arg1 withUser:(id)arg2 password:(id)arg3;
+ (BOOL)validateRightsRepairingIfNeeded:(BOOL)arg1 withAuthorization:(struct AuthorizationOpaqueRef *)arg2;
+ (BOOL)existingRight:(id)arg1 matchesExpectedRight:(id)arg2;
+ (struct AuthorizationOpaqueRef *)authorizationWithUser:(id)arg1 password:(id)arg2;
+ (id)promptForPassword;

@end

