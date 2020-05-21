//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject
{
    BOOL _replayControllerNeedsSync;
    BOOL _ckChatSyncControllerNeedsSync;
    BOOL _idsTransportLogNeedsSync;
    id <IMDMessageHistorySyncTask> _currentlyExecutingSyncTask;
    id <IMDMessageHistorySyncTaskFactory> _syncTaskFactory;
}

@property(retain, nonatomic) id <IMDMessageHistorySyncTaskFactory> syncTaskFactory; // @synthesize syncTaskFactory=_syncTaskFactory;
@property(retain, nonatomic) id <IMDMessageHistorySyncTask> currentlyExecutingSyncTask; // @synthesize currentlyExecutingSyncTask=_currentlyExecutingSyncTask;
@property(nonatomic) BOOL idsTransportLogNeedsSync; // @synthesize idsTransportLogNeedsSync=_idsTransportLogNeedsSync;
@property(nonatomic) BOOL ckChatSyncControllerNeedsSync; // @synthesize ckChatSyncControllerNeedsSync=_ckChatSyncControllerNeedsSync;
@property(nonatomic) BOOL replayControllerNeedsSync; // @synthesize replayControllerNeedsSync=_replayControllerNeedsSync;
- (void)_scheduleNextEvaluation;
- (void)_evaluateStateAndActIfNeeded;
- (void)ckChatSyncControllerWantsToSync;
- (void)IDSTransportLogWantsToSync;
- (void)replayControllerWantsToSync;
- (void)dealloc;
- (id)initWithMessageHistorySyncTaskFactory:(id)arg1;

@end

