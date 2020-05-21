//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSCloudBookmarksMigrationCoordinatorLocalDataProvider-Protocol.h>
#import <Safari/WBSCloudBookmarksMigrationCoordinatorStorage-Protocol.h>

@class NSDictionary, NSString, WBSCloudBookmarksMigrationCoordinator;

__attribute__((visibility("hidden")))
@interface CloudBookmarksMigrationCoordinationConsul : NSObject <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSCloudBookmarksMigrationCoordinatorStorage>
{
    BOOL _didDeferMigrationCoordinationRequest;
    WBSCloudBookmarksMigrationCoordinator *_migrationCoordinator;
    long long _localMigrationState;
}

- (void).cxx_destruct;
@property(nonatomic) long long localMigrationState; // @synthesize localMigrationState=_localMigrationState;
- (void)_syncAgentDidFinish:(id)arg1;
@property(nonatomic) BOOL migrationReadinessDataInvalidated;
- (id)_migrationEligibilityLogsDirectoryURL;
- (id)_migrationReadinessDeciderDictionaryURL;
- (id)_migrationCoordinatorDirectoryURL;
@property(copy, nonatomic) NSDictionary *migrationReadinessDeciderDictionaryRepresentation;
- (void)getLocalMigrationStateForMigrationCoordinator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceStartMigration;
@property(readonly, nonatomic) BOOL canForceStartMigration;
- (void)_createMigrationCoordinatorIfNeeded;
- (void)startCoordinatingMigrationIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

