//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalSpotlightQueryPendingSearchProtocol-Protocol.h>
#import <CalendarFoundation/MDSearchQueryDelegate-Protocol.h>

@class MDSearchQuery, NSMutableOrderedSet, NSString;

@interface CalSpotlightPendingSearch : NSObject <MDSearchQueryDelegate, CalSpotlightQueryPendingSearchProtocol>
{
    CDUnknownBlockType _completionHandler;
    NSMutableOrderedSet *_searchableItemIdentifiers;
    NSMutableOrderedSet *_searchableItems;
    MDSearchQuery *_query;
    NSString *_clientBundleID;
}

+ (id)_resultsForSearchableItems:(id)arg1;
+ (id)_resultForSearchableItem:(id)arg1;
+ (id)_createSearchQueryWithPredicate:(id)arg1 options:(id)arg2;
+ (id)_pendingSearches;
+ (id)_queue;
- (void).cxx_destruct;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain) MDSearchQuery *query; // @synthesize query=_query;
@property(retain) NSMutableOrderedSet *searchableItems; // @synthesize searchableItems=_searchableItems;
@property(retain) NSMutableOrderedSet *searchableItemIdentifiers; // @synthesize searchableItemIdentifiers=_searchableItemIdentifiers;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)cancel;
- (void)searchWithString:(id)arg1;
- (void)_searchEnded;
- (void)_startSearchWithQuery:(id)arg1;
- (id)initWithString:(id)arg1 clientBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

