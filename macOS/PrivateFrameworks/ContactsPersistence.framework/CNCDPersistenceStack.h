//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNCDPersistenceStack : NSObject
{
    CDUnknownBlockType _backendProvider;
    id _notificationSource;
}

+ (void)_createContactsDirectoryIfNeededAtURL:(id)arg1;
+ (id)defaultContactsStoreDirectoryURL;
+ (id)persistenceStackWithPersistentStoreCoordinator:(id)arg1 accountCollection:(id)arg2;
+ (id)persistenceStackWithInMemoryBackend;
+ (id)accountIdentifierFromPersistentStoreURL:(id)arg1;
+ (id)accountIdentifierForManagedObject:(id)arg1;
+ (id)defaultAccountCollection;
+ (id)persistenceStackWithAccountCollection:(id)arg1;
+ (id)os_log_t;
- (void).cxx_destruct;
@property id notificationSource; // @synthesize notificationSource=_notificationSource;
- (id)makePersistenceContext;
- (id)initWithBackendProvider:(CDUnknownBlockType)arg1;

@end

