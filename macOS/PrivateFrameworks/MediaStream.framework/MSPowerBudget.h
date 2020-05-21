//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPBTimerContext, NSString;
@protocol MSPowerBudgetDelegate, OS_dispatch_queue;

@interface MSPowerBudget : NSObject
{
    BOOL _workQueueIsFileTransferAllowed;
    BOOL _workQueueIsExternalPowered;
    BOOL _workQueueIsForeground;
    id <MSPowerBudgetDelegate> _delegate;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSString *_personID;
    MSPBTimerContext *_workQueuePushTimerContext;
    MSPBTimerContext *_workQueuePostForegroundTimerContext;
    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext; // @synthesize workQueueGlobalResetSyncTimerContext=_workQueueGlobalResetSyncTimerContext;
@property(retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext; // @synthesize workQueuePostForegroundTimerContext=_workQueuePostForegroundTimerContext;
@property(retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext; // @synthesize workQueuePushTimerContext=_workQueuePushTimerContext;
@property(nonatomic, setter=workQueueSetForeground:) BOOL workQueueIsForeground; // @synthesize workQueueIsForeground=_workQueueIsForeground;
@property(nonatomic, setter=workQueueSetExternalPowered:) BOOL workQueueIsExternalPowered; // @synthesize workQueueIsExternalPowered=_workQueueIsExternalPowered;
@property(nonatomic, setter=workQueueSetFileTransferAllowed:) BOOL workQueueIsFileTransferAllowed; // @synthesize workQueueIsFileTransferAllowed=_workQueueIsFileTransferAllowed;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
@property(retain, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property(nonatomic) __weak id <MSPowerBudgetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (void)didEndExternalPower;
- (void)didBeginExternalPower;
- (void)didReceiveGlobalResetSync;
- (void)didEndForegroundFocus;
- (void)didBeginForegroundFocus;
- (void)didReceivePushNotification;
- (void)workQueueCommitPersistedValues;
- (void)setIsFileTransferAllowed:(BOOL)arg1;
- (void)workQueueSetIsFileTransferAllowed:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasActiveTimers;
@property(readonly, nonatomic, getter=hasForegroundFocus) BOOL foregroundFocus;
@property(readonly, nonatomic, getter=isFileTransferAllowed) BOOL fileTransferAllowed;
- (void)workQueueRecomputeFileTransferAllowed;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
@property(nonatomic) double maxActiveTimeAfterLossOfForeground; // @synthesize maxActiveTimeAfterLossOfForeground=_maxActiveTimeAfterLossOfForeground;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
@property(nonatomic) double maxActiveTimeAfterGlobalResetSync; // @synthesize maxActiveTimeAfterGlobalResetSync=_maxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterPush;
@property(nonatomic) double maxActiveTimeAfterPush; // @synthesize maxActiveTimeAfterPush=_maxActiveTimeAfterPush;
- (void)shutDown;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;
- (id)init;

@end

