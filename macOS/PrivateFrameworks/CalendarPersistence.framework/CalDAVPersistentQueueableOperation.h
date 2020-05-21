//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class NSManagedObjectID;

@interface CalDAVPersistentQueueableOperation : CalDAVQueueableOperation
{
    NSManagedObjectID *_changeRequestID;
    long long _sequenceNumber;
    int _crType;
}

- (void).cxx_destruct;
- (id)extraUserInfoForRebuiltError;
- (void)configureOperationDependencies;
- (void)enqueue;
- (void)removeOperationFromPersistence;
- (id)associatedChangeRequestInContext:(id)arg1;
- (id)createConsumerCalManagedObjectContext;
- (int)crType;
- (id)changeRequestID;
- (long long)sequenceNumber;
- (id)initWithChangeRequest:(id)arg1 andSession:(id)arg2;

@end

