//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSRecursiveLock, NSSet;

@interface SGAccountsAdapter : NSObject
{
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSRecursiveLock *_primaryICloudAccountLock;
    ACAccount *_cachedPrimaryICloudAccount;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)primaryICloudCalendarAccount;
- (BOOL)hasCalendarAccount:(id)arg1;
- (void)removeNotificationObserver;
- (void)dealloc;
- (void)registerNotificationObserver;
- (void)refreshCacheFromAccountsService;
- (void)accountsStoreDidChange:(id)arg1;
- (id)init;

@end

