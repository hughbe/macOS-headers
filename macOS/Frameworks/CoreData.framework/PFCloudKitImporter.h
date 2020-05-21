//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSArray, NSCloudKitMirroringImportRequest, NSMutableArray, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporter : NSObject
{
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
    NSArray *_workItems;
    NSMutableArray *_workItemResults;
    CKServerChangeToken *_updatedDatabaseChangeToken;
    unsigned long long _totalImportedBytes;
}

@property(readonly, nonatomic) unsigned long long totalImportedBytes; // @synthesize totalImportedBytes=_totalImportedBytes;
@property(readonly, nonatomic) CKServerChangeToken *updatedDatabaseChangeToken; // @synthesize updatedDatabaseChangeToken=_updatedDatabaseChangeToken;
@property(readonly, nonatomic) NSArray *workItems; // @synthesize workItems=_workItems;
@property(readonly, nonatomic) NSArray *workItemResults; // @synthesize workItemResults=_workItemResults;
@property(readonly, nonatomic) NSCloudKitMirroringImportRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) PFCloudKitImporterOptions *options; // @synthesize options=_options;
- (void)workItemFinished:(id)arg1 withResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dequeueWorkItem;
- (void)processWorkItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processDatabaseImportContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)databaseFetchFinishWithContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

@end

