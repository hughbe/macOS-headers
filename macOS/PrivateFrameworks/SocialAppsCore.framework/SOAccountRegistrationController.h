//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SocialAppsCore/IMCloudKitEventHandlerAccountInfoProvider-Protocol.h>

@class IMAccount, IMServiceImpl, NSTimer, SOAccountAliasController;

@interface SOAccountRegistrationController : NSObject <IMCloudKitEventHandlerAccountInfoProvider>
{
    BOOL _isSigningOut;
    BOOL _isSignedIn;
    long long _registrationState;
    long long _enabledState;
    IMAccount *_account;
    SOAccountAliasController *_aliasController;
    IMServiceImpl *_serviceType;
    NSTimer *_authenticationTimer;
}

+ (id)stringForAccountRegistrationFailure:(long long)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)registrationControllerForAccount:(id)arg1;
+ (id)faceTimeRegistrationController;
+ (id)registrationController;
+ (void)resetSharedInstance;
- (void).cxx_destruct;
@property(retain) NSTimer *authenticationTimer; // @synthesize authenticationTimer=_authenticationTimer;
@property(nonatomic) BOOL isSignedIn; // @synthesize isSignedIn=_isSignedIn;
@property(nonatomic) BOOL isSigningOut; // @synthesize isSigningOut=_isSigningOut;
@property(retain, nonatomic) IMServiceImpl *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) SOAccountAliasController *aliasController; // @synthesize aliasController=_aliasController;
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(nonatomic) long long enabledState; // @synthesize enabledState=_enabledState;
@property(nonatomic) long long registrationState; // @synthesize registrationState=_registrationState;
- (BOOL)cloudKitEventNotificationManagerAccountHasiMessageEnabled:(id)arg1;
- (void)_clearAliasController;
- (void)_setupAliasController;
- (void)_authenticationTimerTimedOut:(id)arg1;
- (void)_clearAuthenticationTimeout;
- (void)accountLoggedOut:(id)arg1;
- (void)activationStatusChanged:(id)arg1;
- (void)registrationStatusChanged:(id)arg1;
- (void)_accountAliasActivationStateChanged:(id)arg1;
- (void)_SOAccountAliasVerificationStateChanged:(id)arg1;
- (void)_accountAliasCountChanged:(id)arg1;
- (BOOL)accountOnlineAndRegistered;
- (BOOL)accountIsSignedIn;
- (id)loginName;
- (id)localizedRegistrationErrorMessage;
- (BOOL)readReceiptsEnabled;
- (void)enableReadReceipts:(BOOL)arg1;
- (void)confirmNewAlias:(id)arg1;
- (BOOL)addAndConfirmNewAlias:(id)arg1;
- (void)enableAccount:(BOOL)arg1;
- (BOOL)deleteAccount;
- (void)signOutAndUpdateDaemon:(BOOL)arg1;
- (void)signOut;
- (void)_registerAccountIfNecessary;
- (void)registerAccount;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)authenticateWithUsername:(id)arg1 authID:(id)arg2 authToken:(id)arg3;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2;
- (void)updateStateForAccountStatusAndPostNotification:(BOOL)arg1;
- (void)setEnabledState:(long long)arg1 andPostNotification:(BOOL)arg2;
- (void)setRegistrationState:(long long)arg1 andPostNotification:(BOOL)arg2;
- (void)dealloc;

@end

