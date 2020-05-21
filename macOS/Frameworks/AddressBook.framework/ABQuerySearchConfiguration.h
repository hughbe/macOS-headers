//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABPersonSearchConfiguration.h>

@class ABAddressBook, NSOperationQueue;
@protocol ABContactSearching, ABPersonListHeadlining;

@interface ABQuerySearchConfiguration : ABPersonSearchConfiguration
{
    id <ABContactSearching> _searchNode;
    ABAddressBook *_addressBook;
    NSOperationQueue *_searchQueue;
    id <ABPersonListHeadlining> _headliner;
}

@property(retain) id <ABContactSearching> searchNode; // @synthesize searchNode=_searchNode;
- (void)operation:(id)arg1 dependsOnAllOperations:(id)arg2;
- (id)makeFinishOperation;
- (void)addPersonDictionariesToResults:(id)arg1;
- (void)cacheKnownPropertiesForClass:(Class)arg1 dictionaryRepresentations:(id)arg2;
- (id)dictionaryRepresentationsOfRecords:(id)arg1;
- (id)groupSearchResultsByRecordClass:(id)arg1;
- (void)updateSearchResults:(id)arg1 forMatchingQuery:(id)arg2;
- (id)makeSearchOperationsForSearchString:(id)arg1;
- (void)incrementSearchCount;
- (void)beginSearchForString:(id)arg1;
- (void)searchForString:(id)arg1;
- (void)searchFieldDidChange:(id)arg1;
- (void)clearSearchResults;
- (void)configurePersonListForSearch:(id)arg1;
- (void)configureForSearchingNode:(id)arg1;
- (void)fetchContacts;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

