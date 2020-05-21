//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentStoreCoordinator;

@interface ABPersistentStoreCoordinatorResults : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    BOOL _pristineDatabase;
    BOOL _didMigrate;
}

+ (id)resultsWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2 didMigrate:(BOOL)arg3;
+ (id)resultsWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2;
@property(readonly) BOOL didMigrate; // @synthesize didMigrate=_didMigrate;
@property(readonly, getter=isPristineDatabase) BOOL pristineDatabase; // @synthesize pristineDatabase=_pristineDatabase;
@property(readonly, retain) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2 didMigrate:(BOOL)arg3;

@end

