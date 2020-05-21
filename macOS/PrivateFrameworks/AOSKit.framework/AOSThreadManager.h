//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface AOSThreadManager : NSObject
{
    NSLock *_proxyLock;
}

+ (id)sharedManager;
+ (void)initialize;
- (void)AOSKUpdateAccountProperties:(id)arg1;
- (void)AOSKVerifyQuota:(id)arg1;
- (id)_createDictionaryFromAlias:(id)arg1;
- (id)_aliasesFromXMLData:(id)arg1;
- (id)_mailPrefsDataFromDict:(id)arg1;
- (id)_aliasInfoFromJSONData:(id)arg1;
- (void)AOSKPersistMailAliases:(id)arg1;
- (void)AOSKPersistMailProperties:(id)arg1;
- (id)_updateDelegateInfo:(id)arg1 usingStoredInfo:(id)arg2 forAccount:(struct AOSAccount *)arg3;
- (id)_updateDerivedInfoUsingOldInfo:(id)arg1 andNewInfo:(id)arg2 forAccount:(struct AOSAccount *)arg3;
- (void)runStorageAlertThreadWithContext:(id)arg1;
- (void)AOSKPersistExpirationDate:(id)arg1;
- (BOOL)AOSKPersistFullUsername;
- (void)runStorageUsageThreadWithContext:(id)arg1;
- (void)runQuotaUsageThreadWithContext:(id)arg1;
- (void)runInitiateVettingThreadWithContext:(id)arg1;
- (void)AOSKPersistAccountData:(id)arg1;
- (void)runDataclassConfigThreadWithContext:(id)arg1;
- (void)runSystemCheckThreadWithContext:(id)arg1;
- (void)runConfigQueryThreadWithContext:(id)arg1;
- (void)runBuddyHelpThreadWithContext:(id)arg1;
- (void)runDelegateLoginThreadWithContext:(id)arg1;
- (void)runBuddyLoginThreadWithContext:(id)arg1;
- (void)runDeviceListRetrievalThreadWithContext:(id)arg1;
- (void)runDocumentsMigrationTriggerThreadWithContext:(id)arg1;
- (void)runDocumentsMigrationDevicesThreadWithContext:(id)arg1;
- (void)runDocumentsMigrationStatusThreadWithContext:(id)arg1;
- (void)runRampStateRetrievalThreadWithContext:(id)arg1;
- (void)runDeregisterDeviceThreadWithContext:(id)arg1;
- (void)runRegisterDeviceThreadWithContext:(id)arg1;
- (void)runPushTokenRetrievalThreadWithContext:(id)arg1;
- (void)runEmailLookupThreadWithContext:(id)arg1;
- (void)AOSKPersistAccountAttributes:(id)arg1;
- (void)AOSKPersistEmailAliasURL:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)init;

@end

