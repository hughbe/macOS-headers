//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSURLCompletionDatabase.h>

#import <Safari/WBSURLCompletionDataSource-Protocol.h>

@class NSObject, NSString, WebBookmarkList;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _reloadNotificationPending;
    BOOL _enumeratingBookmarkMatches;
    BOOL _enumeratingHistoryMatches;
    WebBookmarkList *_topBookmark;
}

+ (id)sharedCompletionDatabase;
- (void).cxx_destruct;
@property __weak WebBookmarkList *topBookmark; // @synthesize topBookmark=_topBookmark;
@property(readonly, nonatomic, getter=isEnumeratingHistoryMatches) BOOL enumeratingHistoryMatches; // @synthesize enumeratingHistoryMatches=_enumeratingHistoryMatches;
@property(readonly, nonatomic, getter=isEnumeratingBookmarkMatches) BOOL enumeratingBookmarkMatches; // @synthesize enumeratingBookmarkMatches=_enumeratingBookmarkMatches;
- (void)_historyOrBookmarksDidChange:(id)arg1;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(BOOL)arg3;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id *)arg2 matches:(id *)arg3 limit:(unsigned long long)arg4 forQueryID:(long long)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

