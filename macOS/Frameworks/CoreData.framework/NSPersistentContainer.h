//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface NSPersistentContainer : NSObject
{
    NSString *_name;
    NSManagedObjectContext *_viewContext;
    NSPersistentStoreCoordinator *_storeCoordinator;
    NSArray *_storeDescriptions;
}

+ (id)_newModelForName:(id)arg1;
+ (id)defaultDirectoryURL;
+ (id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithName:(id)arg1;
+ (Class)persistentStoreDescriptionClass;
+ (id)persistentContainerUsingCachedModelWithPath:(id)arg1;
+ (id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1;
@property(copy) NSArray *persistentStoreDescriptions; // @synthesize persistentStoreDescriptions=_storeDescriptions;
@property(readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_storeCoordinator;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;
- (id)newBackgroundContext;
- (void)_loadStoreDescriptons:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 managedObjectModel:(id)arg2;
- (id)initWithName:(id)arg1;
@property(readonly) NSManagedObjectModel *managedObjectModel;
- (id)init;
@property(readonly) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
- (BOOL)load:(id *)arg1;

@end

