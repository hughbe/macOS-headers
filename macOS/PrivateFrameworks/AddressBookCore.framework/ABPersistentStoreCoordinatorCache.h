//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersistentStoreCoordinatorMap, ABPersistentStoreCoordinatorUpdater, NSString;
@protocol ABAccountCollection;

@interface ABPersistentStoreCoordinatorCache : NSObject
{
    id <ABAccountCollection> _accountCollection;
    ABPersistentStoreCoordinatorMap *_coordinatorMap;
    ABPersistentStoreCoordinatorUpdater *_coordinatorUpdater;
}

+ (id)sharedInstance;
+ (id)os_log;
@property(readonly) id <ABAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
- (void)accountsDidChange:(id)arg1;
- (void)startObserving;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (id)coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (id)coordinatorForAllSources;
- (id)basePathForAccountWithIdentifier:(id)arg1;
@property(readonly, copy) NSString *basePath;
- (void)dealloc;
- (id)initWithDelegateInfos:(id)arg1;
- (id)initWithAccountCollection:(id)arg1 watchesForAccountChanges:(BOOL)arg2 readOnlyStores:(BOOL)arg3;
- (id)initWithAccountCollection:(id)arg1 readOnly:(BOOL)arg2;

@end

