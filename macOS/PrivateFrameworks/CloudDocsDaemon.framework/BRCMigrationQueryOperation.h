//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class CKQueryCursor, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrationQueryOperation : BRCSyncDownOperation
{
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)allMigrationKeysOrdered;
+ (id)folderShareAliasesMigrationKey;
+ (id)folderSharesMigrationKey;
+ (id)documentSharesMigrationKey;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_performAfterQueryingForShareIDsOfFolders:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(CDUnknownBlockType)arg2 cursorUpdatedBlock:(CDUnknownBlockType)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)_updatedContinuationCursor:(id)arg1 error:(id *)arg2;
- (BOOL)_saveFetchedRecords:(id)arg1 cursor:(id)arg2 error:(id *)arg3;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;

@end

