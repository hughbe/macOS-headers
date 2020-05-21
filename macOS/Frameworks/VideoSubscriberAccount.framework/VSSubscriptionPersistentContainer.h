//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSPersistentStoreCoordinator, NSString, NSURL, VSOptional;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPersistentContainer : NSObject
{
    BOOL _didSetupPersistence;
    BOOL _skipMigration;
    NSOperationQueue *_migrationQueue;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    VSOptional *_viewContext;
    NSString *_persistentStoreType;
    NSURL *_persistentStoreURL;
    NSURL *_subscriptionsPropertyListURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *subscriptionsPropertyListURL; // @synthesize subscriptionsPropertyListURL=_subscriptionsPropertyListURL;
@property(copy, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
@property(copy, nonatomic) NSString *persistentStoreType; // @synthesize persistentStoreType=_persistentStoreType;
@property(nonatomic) BOOL skipMigration; // @synthesize skipMigration=_skipMigration;
@property(retain, nonatomic) VSOptional *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(nonatomic) BOOL didSetupPersistence; // @synthesize didSetupPersistence=_didSetupPersistence;
@property(retain, nonatomic) NSOperationQueue *migrationQueue; // @synthesize migrationQueue=_migrationQueue;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 andWait:(BOOL)arg2;
- (BOOL)_setupPersistenceIfNeeded:(id *)arg1;
- (void)_removePersistentStore;
- (id)init;

@end

