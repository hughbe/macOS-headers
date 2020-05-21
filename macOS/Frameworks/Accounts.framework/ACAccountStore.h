//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACRemoteAccountStoreSession, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACAccountStore : NSObject
{
    NSObject<OS_dispatch_queue> *_replyQueue;
    id _daemonAccountStoreDidChangeObserver;
    NSMutableDictionary *_accountCache;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
    ACRemoteAccountStoreSession *_longLivedRemoteAccountStoreSession;
    NSString *_effectiveBundleID;
}

+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (void)_setDefaultStore:(id)arg1;
+ (id)_defaultStore;
- (void).cxx_destruct;
@property(readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_effectiveBundleID;
@property(readonly, nonatomic) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession; // @synthesize longLivedRemoteAccountStoreSession=_longLivedRemoteAccountStoreSession;
@property(readonly, nonatomic) ACRemoteAccountStoreSession *remoteAccountStoreSession; // @synthesize remoteAccountStoreSession=_remoteAccountStoreSession;
- (void)resetDatabaseToVersion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;
- (id)_createSMTPAccountForServerAccount:(id)arg1;
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObsoleteAccounts:(CDUnknownBlockType)arg1;
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id *)arg3;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id *)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_unsanitizeError:(id)arg1;
- (id)_sanitizeOptionsDictionary:(id)arg1;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)clientTokenForAccount:(id)arg1;
- (void)handleURL:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (BOOL)hasAccountWithDescription:(id)arg1;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1 error:(id *)arg2;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id *)arg2;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id *)arg2;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id *)arg2;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1 error:(id *)arg2;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)childAccountsForAccount:(id)arg1 error:(id *)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1 error:(id *)arg2;
- (id)parentAccountForAccount:(id)arg1;
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;
- (id)allCredentialItems;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id *)arg3;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;
- (id)credentialForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)saveVerifiedAccount:(id)arg1 error:(id *)arg2;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDeleteSync:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)accountsWithAccountType:(id)arg1;
@property(readonly) __weak NSArray *accounts;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)_connectionFailureError;
- (void)disconnectFromRemoteAccountStore;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (void)dealloc;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)init;

@end

