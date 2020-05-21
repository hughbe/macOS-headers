//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSBLookupContext : NSObject
{
    struct shared_ptr<SafeBrowsing::LookupContext> _lookupContext;
    unsigned int _observerToken;
}

+ (id)sharedLookupContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lookUpURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)_setSafeBrowsingEnabledStateNeedsUpdate;
- (void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_getLastDatabaseUpdateTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchCellularDataPlanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_deleteAllDatabasesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getServiceStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getDatabaseStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceDatabaseUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

