//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNCDInfoFetcher : NSObject
{
}

+ (id)_persistentStoresForAccountsWithIdentifiers:(id)arg1 fromManagedObjectContext:(id)arg2;
+ (id)_accountIdentifierFromPersistentStoreURL:(id)arg1;
+ (id)allRemoteInfosWithPersistenceStack:(id)arg1 forAccountsWithIdentifiers:(id)arg2 error:(id *)arg3;
+ (id)allInfosWithPersistenceStack:(id)arg1 forAccountsWithIdentifiers:(id)arg2 error:(id *)arg3;
+ (id)allInfosWithManagedObjectContext:(id)arg1 inStores:(id)arg2 error:(id *)arg3;

@end

