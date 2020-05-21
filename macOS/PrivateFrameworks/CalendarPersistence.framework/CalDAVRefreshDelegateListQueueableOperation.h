//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class NSArray;

@interface CalDAVRefreshDelegateListQueueableOperation : CalDAVQueueableOperation
{
    NSArray *_delegateInfos;
    BOOL _serverSupportsDelegates;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (BOOL)serverSupportsDelegates;
- (void)finishOperation;
- (void)refreshWithExceptionHandling;
- (void)performOperation;
- (id)readableDescription;
- (void)refresh;

@end

