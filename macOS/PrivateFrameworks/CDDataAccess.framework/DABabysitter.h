//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DABabysitter : NSObject
{
    struct os_unfair_lock_s _lock;
    NSString *_buildVersion;
    NSMutableDictionary *_l_refreshingWaiters;
    NSMutableDictionary *_l_failedWaiters;
    NSMutableDictionary *_l_restrictedWaiters;
}

+ (id)sharedBabysitter;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *l_restrictedWaiters; // @synthesize l_restrictedWaiters=_l_restrictedWaiters;
@property(retain, nonatomic) NSMutableDictionary *l_failedWaiters; // @synthesize l_failedWaiters=_l_failedWaiters;
@property(retain, nonatomic) NSMutableDictionary *l_refreshingWaiters; // @synthesize l_refreshingWaiters=_l_refreshingWaiters;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void)_diagnosticReportWithWaiterID:(id)arg1 failureCount:(int)arg2;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (void)_l_giveAccountWithIDAnotherChance:(id)arg1;
- (BOOL)accountShouldContinue:(id)arg1;
- (BOOL)accountWithIDShouldContinue:(id)arg1;
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;
- (id)tokenByRegisteringAccount:(id)arg1 forOperationWithName:(id)arg2;
- (BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2;
- (void)_l_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_l_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_l_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)_init;
- (void)_reloadBabysitterProperties;
- (void)_l_reloadBabysitterWaitersWithRefreshingWaitersPrefs:(id)arg1 failedWaitersPrefs:(id)arg2 restrictedWaitersPrefs:(id)arg3;

@end

