//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WBSHistoryService, WBSURLCompletionHistorySnapshot;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionDataStore : NSObject
{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    NSDate *_snapshotLastModifiedDate;
    WBSURLCompletionHistorySnapshot *_snapshot;
}

- (void).cxx_destruct;
- (void)_loadFromDatabaseIfNecessary;
- (RefPtr_ed2a6bdb)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Ref_acc025bb)_completionItemFromRow:(id)arg1;
- (void)getSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHistoryService:(id)arg1;

@end

