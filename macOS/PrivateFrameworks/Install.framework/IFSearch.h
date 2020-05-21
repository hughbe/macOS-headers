//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface IFSearch : NSObject
{
    NSString *_identifier;
    NSMutableArray *_childSearches;
    NSArray *_results;
    double _searchTime;
    BOOL _resultsRetrieved;
}

+ (BOOL)backupContainsResult:(struct __CFString *)arg1;
+ (id)searchWithTokenDefinitions:(id)arg1 forTokenID:(id)arg2;
+ (id)searchWithXMLElement:(id)arg1;
- (id)childSearches;
- (BOOL)resultsRetrieved;
- (id)results;
- (id)identifier;
- (void)dealloc;
- (double)searchTime;
- (void)setResultsRetrieved:(BOOL)arg1;
- (void)setSearchTime:(double)arg1;
- (void)addChildSearch:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithXMLElement:(id)arg1;

@end

