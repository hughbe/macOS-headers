//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICPaths : NSObject
{
}

+ (id)persistentStoreURL;
+ (id)oldManagedObjectModelURL;
+ (id)managedObjectModelURL;
+ (id)attributesForGroupContainerDirectory;
+ (id)URLForGroupContainerWithIdentifier:(id)arg1;
+ (id)previewImageDirectoryURLForAccount:(id)arg1;
+ (id)importDocumentsURL;
+ (id)accountsDirectoryURL;
+ (void)setApplicationDocumentsURL:(id)arg1;
+ (id)applicationDocumentsURL;
+ (void)setIsReadOnlyPersistentStore:(BOOL)arg1;
+ (BOOL)isReadOnlyPersistentStore;

@end

