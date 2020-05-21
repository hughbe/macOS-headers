//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISyncPlan, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer;

@interface ISyncPlanWatcher : NSObject
{
    ISyncPlan *_currentPlan;
    NSMutableSet *_syncingDataClasses;
    NSMutableDictionary *_syncingDataClassesPerClient;
    BOOL _isSyncing;
    NSString *_syncProgressString;
    NSSet *_clients;
    NSSet *_types;
    BOOL _startNotificationSent;
    NSTimer *_delayedStopTimer;
    id _delegate;
}

- (void)cancelSyncs;
- (id)syncProgressString;
- (BOOL)_bruteForceIsSyncingCheck;
- (BOOL)isSyncing;
- (id)syncingDataClasses;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithClients:(id)arg1 andTypes:(id)arg2;
- (void)_delayedStop;
- (void)_syncStatusChanged:(id)arg1;
- (void)_syncStatusChangedThread:(id)arg1;
- (id)_outstandingPendingPlan;
- (void)_updateSyncingDataClases;
- (BOOL)_planContainsClientsWeCareAbout:(id)arg1;
- (BOOL)_checkCurrentPlanIsSyncing;
- (id)currentPlan;
- (void)setCurrentPlan:(id)arg1;

@end

