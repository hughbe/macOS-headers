//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPTask.h>

#import <IMAP/EFSignpostable-Protocol.h>
#import <IMAP/IMAPFetchMailboxStatusOperationDelegate-Protocol.h>

@class IMAPTaskManager, NSMutableArray, NSMutableSet, NSProgress, NSString;
@protocol IMAPAccount;

@interface IMAPAccountSyncTask : IMAPTask <EFSignpostable, IMAPFetchMailboxStatusOperationDelegate>
{
    NSMutableArray *_mailboxesNeedingStatus;
    NSMutableSet *_missedMailboxes;
    BOOL _userInitiated;
    id <IMAPAccount> _account;
    IMAPTaskManager *_taskManager;
    NSProgress *_checkProgress;
}

+ (id)signpostLog;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property(readonly) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly) id <IMAPAccount> account; // @synthesize account=_account;
- (void)fetchMailboxStatusOperation:(id)arg1 missedMailboxes:(id)arg2;
- (void)fetchMailboxStatusOperation:(id)arg1 fetchedStatusesForMailboxNames:(id)arg2;
- (void)end;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (long long)_nextNetworkPriorityAndOperation:(id *)arg1;
- (id)nextNetworkOperation;
- (void)cancel;
@property(nonatomic) BOOL userInitiated;
- (id)mailboxNameWithoutPII;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithAccount:(id)arg1 taskManager:(id)arg2;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

