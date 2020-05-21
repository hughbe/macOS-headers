//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSTimer;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject
{
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}

+ (id)accountSyncPropertiesForAccount:(id)arg1;
+ (id)duchessHostnames;
+ (id)translatedKeys;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)sharedAccountSyncServer;
- (void).cxx_destruct;
- (void)setiOSVersion;
- (id)getiOSVersion;
- (BOOL)isMigrated;
- (void)markMigrated;
- (id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2;
- (id)translateSettings:(id)arg1;
- (BOOL)migrate;
- (id)ldapAccounts;
- (void)fixLDAP;
- (id)smtpAccounts;
- (void)fixSMTP;
- (BOOL)locallyMigrated;
- (void)queueSync;
- (void)scheduleSync;
- (BOOL)supportedType:(id)arg1;
- (BOOL)unsupportedType:(id)arg1;
- (BOOL)isDataclassActionRequired:(id)arg1;
- (void)deleteAccounts:(id)arg1;
- (id)processHostnameDeletes;
- (id)processDeletes;
- (void)postNotificationFor:(id)arg1;
- (void)createKeychainItems:(id)arg1;
- (void)createAccounts:(id)arg1;
- (id)getAccountsOfType:(id)arg1;
- (id)primaryiCloudAccount;
- (id)remoteHostnameAccounts;
- (id)remoteAccounts;
- (id)localHostnameAccounts;
- (id)localAccounts;
- (id)processHostnameAdds;
- (id)processAdds;
- (BOOL)detectDuchess;
- (void)sync;
- (void)kvsChanges:(id)arg1;
- (void)accountChanges:(id)arg1;
- (void)registerForNotifications;
- (BOOL)checkCircleState;
- (void)devices;
- (void)setupAccountSync;
- (void)dealloc;
- (id)init;

@end

