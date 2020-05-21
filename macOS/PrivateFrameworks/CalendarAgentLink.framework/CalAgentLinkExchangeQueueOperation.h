//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSString;

@interface CalAgentLinkExchangeQueueOperation : CalAgentLinkOneWayOperation
{
    NSString *_queueAction;
    NSString *_persistentOperationManagedObjectID;
    NSString *_principalManagedObjectID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *principalManagedObjectID; // @synthesize principalManagedObjectID=_principalManagedObjectID;
@property(retain, nonatomic) NSString *persistentOperationManagedObjectID; // @synthesize persistentOperationManagedObjectID=_persistentOperationManagedObjectID;
@property(retain, nonatomic) NSString *queueAction; // @synthesize queueAction=_queueAction;
- (id)inputPayload;
- (id)description;
- (id)initWithAction:(id)arg1 principalManagedObjectID:(id)arg2 persistentOperationManagedObjectID:(id)arg3;
- (id)init;

@end

