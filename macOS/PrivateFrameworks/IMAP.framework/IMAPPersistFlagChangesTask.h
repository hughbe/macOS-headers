//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTask.h>

#import <IMAP/IMAPGetServerMessagesOperationDelegate-Protocol.h>
#import <IMAP/IMAPPersistFlagChangesOperationDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMAPPersistFlagChangesTask : IMAPPersistenceTask <IMAPGetServerMessagesOperationDelegate, IMAPPersistFlagChangesOperationDelegate>
{
    NSMutableDictionary *_flagsByUIDs;
    NSMutableDictionary *_flagChangesByServerMessage;
}

- (void).cxx_destruct;
- (void)persistFlagChangesOperation:(id)arg1 persistedFlagChangesForRemoteIDs:(id)arg2;
- (void)getServerMessagesOperation:(id)arg1 gotServerMessages:(id)arg2 uidsNotFound:(id)arg3;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)initWithDataSource:(id)arg1;
- (id)initWithFlagsByUIDs:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

