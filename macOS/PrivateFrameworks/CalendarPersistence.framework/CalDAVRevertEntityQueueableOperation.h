//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDAVQueueableOperation.h>

#import <CalendarPersistence/CoreDAVGetTaskDelegate-Protocol.h>

@class CalDAVCalendarSource, NSString;

@interface CalDAVRevertEntityQueueableOperation : CalDAVQueueableOperation <CoreDAVGetTaskDelegate>
{
    int _revertOperationType;
    CalDAVCalendarSource *_source;
    NSString *_entityLocalUID;
    NSString *_entitySharedUID;
    NSString *_serverFilename;
}

- (void).cxx_destruct;
- (id)serverFilename;
- (id)entitySharedUID;
- (id)entityLocalUID;
- (void)enqueue;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)performOperation;
- (id)readableDescription;
- (id)initWithPreviousOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

