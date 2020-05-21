//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATRemoteTaskOperation, NSArray;

@interface DMFBatchRequestOperation : CATOperation
{
    CATOperationQueue *_queue;
    CATRemoteTaskOperation *_activityTransactionOperation;
    NSArray *_subOperations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *subOperations; // @synthesize subOperations=_subOperations;
@property(retain, nonatomic) CATRemoteTaskOperation *activityTransactionOperation; // @synthesize activityTransactionOperation=_activityTransactionOperation;
@property(retain, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
- (void)activityTransactionOperationDidFinish:(id)arg1;
- (void)activityTransactionOperationDidStart:(id)arg1;
- (void)main;
- (BOOL)isAsynchronous;
- (void)setName:(id)arg1;
- (id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2;

@end

