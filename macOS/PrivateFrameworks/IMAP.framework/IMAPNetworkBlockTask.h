//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPTask.h>

@class IMAPNetworkBlockOperation, IMAPTaskManager, NSString;

@interface IMAPNetworkBlockTask : IMAPTask
{
    IMAPNetworkBlockOperation *_operation;
    CDUnknownBlockType _block;
    IMAPTaskManager *_taskManager;
    long long _taskPriority;
    NSString *_blockDescription;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *blockDescription; // @synthesize blockDescription=_blockDescription;
@property(readonly, nonatomic) long long taskPriority; // @synthesize taskPriority=_taskPriority;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) IMAPNetworkBlockOperation *operation; // @synthesize operation=_operation;
- (void)operationFinished:(id)arg1;
- (void)cancel;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (id)mailboxNameWithoutPII;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithMailboxName:(id)arg1 priority:(long long)arg2 taskManager:(id)arg3 description:(id)arg4 block:(CDUnknownBlockType)arg5;

@end

