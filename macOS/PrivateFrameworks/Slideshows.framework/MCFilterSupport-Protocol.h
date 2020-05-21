//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MCFilter, NSArray, NSIndexSet, NSSet, NSString, NSXMLElement;

@protocol MCFilterSupport
@property(readonly, nonatomic) unsigned long long countOfFilters;
@property(readonly) NSArray *orderedFilters;
@property(readonly) NSSet *filters;
- (void)unobserveFilter:(MCFilter *)arg1;
- (void)observeFilter:(MCFilter *)arg1;
- (void)moveFiltersAtIndices:(NSIndexSet *)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(NSIndexSet *)arg1;
- (MCFilter *)insertFilterWithFilterID:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (MCFilter *)addFilterWithFilterID:(NSString *)arg1;
- (MCFilter *)filterAtIndex:(unsigned long long)arg1;
- (void)addFiltersToXMLElement:(NSXMLElement *)arg1;
- (NSArray *)imprintsForFilters;
- (void)demolishFilters;
- (void)initFiltersWithImprints:(NSArray *)arg1;
@end

