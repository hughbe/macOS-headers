//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalDAVRemoveCalendarQueueableOperation.h>

@class CalManagedCalDAVCalendar, CalManagedObjectContext, NSSet, NSURL;

@interface CalDAVCalendarSplitDualTypeCalendarQueueableOperation : CalDAVRemoveCalendarQueueableOperation
{
    CalManagedObjectContext *_context;
    int _state;
    CalManagedCalDAVCalendar *_sourceCalendar;
    CalManagedCalDAVCalendar *_destinationCalendar;
    NSURL *_destinationCalendarURI;
    BOOL _waitingForCompletionBlock;
    NSSet *_sourceCalendarRemoteEventHrefs;
    NSSet *_sourceCalendarRemoteTodoHrefs;
    unsigned long long _queryAndMoveIteration;
}

+ (id)queryTaskProperties;
- (void).cxx_destruct;
@property unsigned long long queryAndMoveIteration; // @synthesize queryAndMoveIteration=_queryAndMoveIteration;
@property(retain) NSSet *sourceCalendarRemoteTodoHrefs; // @synthesize sourceCalendarRemoteTodoHrefs=_sourceCalendarRemoteTodoHrefs;
@property(retain) NSSet *sourceCalendarRemoteEventHrefs; // @synthesize sourceCalendarRemoteEventHrefs=_sourceCalendarRemoteEventHrefs;
@property(retain) NSURL *destinationCalendarURI; // @synthesize destinationCalendarURI=_destinationCalendarURI;
@property(retain) CalManagedCalDAVCalendar *destinationCalendar; // @synthesize destinationCalendar=_destinationCalendar;
@property(retain) CalManagedCalDAVCalendar *sourceCalendar; // @synthesize sourceCalendar=_sourceCalendar;
@property int state; // @synthesize state=_state;
@property(retain) CalManagedObjectContext *opManagedObjectContext; // @synthesize opManagedObjectContext=_context;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)multiMoveTaskCompletedWithTaskGroup:(id)arg1 didUseFallback:(BOOL)arg2;
- (void)queryTodoTaskComplete:(id)arg1;
- (void)queryEventTaskComplete:(id)arg1;
- (void)mkCalendarComplete:(id)arg1;
- (void)removeOriginalCollection;
- (void)performMultiMoveOperation:(id)arg1 withPUTFallBack:(BOOL)arg2;
- (id)calendarItemServerURLsFromCoreDAVResponses:(id)arg1;
- (id)calendarItemsWithServerURLs:(id)arg1;
- (id)calendarItemWithServerURL:(id)arg1;
- (void)moveTargetedItemsToDestinationCollection;
- (id)coreDAVQueryResponseItemsForTargetItems;
- (void)addNewDestinationCollectionFromSource;
- (void)postFetchStateSwitch;
- (void)fetchEventsOrTodosFromRemoteSourceCollection;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_saveManagedObjectContext;
- (void)saveDestinationCollectionURIOnChangeRequest;
- (void)prepareOperation;
- (void)performOperation;
- (id)managedPrincipal;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 inboxURI:(id)arg4;

@end

