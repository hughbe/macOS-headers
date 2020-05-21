//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface ICSectionedSearchResults : NSObject
{
    BOOL _disableAutomaticUpdates;
    NSMutableDictionary *_searchResultsBySection;
}

+ (id)newSearchResultsBySection;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *searchResultsBySection; // @synthesize searchResultsBySection=_searchResultsBySection;
@property(nonatomic) BOOL disableAutomaticUpdates; // @synthesize disableAutomaticUpdates=_disableAutomaticUpdates;
- (void)updateForSortTypeChange;
- (BOOL)replaceSearchResultObject:(id)arg1 withObject:(id)arg2;
- (id)indexPathOfObject:(id)arg1;
- (id)indexPathOfSearchResult:(id)arg1;
- (BOOL)hideSearchResultsForObjects:(id)arg1;
- (BOOL)hideSearchResultsForIdentifier:(id)arg1;
- (void)filterSearchResultsUsingVisiblityTesting:(id)arg1;
- (unsigned long long)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 passingVisibilityTesting:(id)arg3;
- (unsigned long long)addSearchResultsBySection:(id)arg1;
- (id)searchResultsBySectionForSearchResults:(id)arg1 passingVisibilityTesting:(id)arg2;
- (BOOL)passesVisibilityTesting:(id)arg1 forSearchResult:(id)arg2;
- (unsigned long long)removeSearchResultsWithIdentifiers:(id)arg1 forHiding:(BOOL)arg2;
- (BOOL)removeSearchResultWithIdentifier:(id)arg1 forHiding:(BOOL)arg2;
- (BOOL)removeSearchResultWithIdentifier:(id)arg1 fromSection:(unsigned long long)arg2 forHiding:(BOOL)arg3;
- (id)removeSearchResultAtRow:(long long)arg1 section:(unsigned long long)arg2;
- (void)addSearchResults:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addSearchResult:(id)arg1 toSection:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setSearchResults:(id)arg1 forSection:(unsigned long long)arg2;
- (id)searchResultObjectsInSection:(unsigned long long)arg1;
- (id)searchResultsInSection:(unsigned long long)arg1;
- (id)searchResultSectionForSectionIndex:(unsigned long long)arg1;
- (id)searchResultWithObject:(id)arg1;
- (id)searchResultAtRow:(long long)arg1 section:(unsigned long long)arg2;
- (unsigned long long)sectionForSearchResult:(id)arg1;
- (unsigned long long)countForSection:(unsigned long long)arg1;
- (BOOL)hasSearchResults;
- (void)clear;
@property(readonly, nonatomic) NSArray *allSearchResults;
- (void)noteWillBeUndeletedOrUntrashed:(id)arg1;
- (void)objectsDidChange:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

