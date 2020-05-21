//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, PXSectionedDataSourceChangeDetails;

@interface PXLegacySectionedDataSourceChangeDetails : NSObject
{
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    long long _shiftingSectionLocation;
    BOOL _prepared;
    BOOL _hasIncrementalChanges;
    BOOL _hasMoves;
    PXSectionedDataSourceChangeDetails *_sectionedDataSourceChangeDetails;
    NSArray *_contentItemsChangedIndexPaths;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *contentItemsChangedIndexPaths; // @synthesize contentItemsChangedIndexPaths=_contentItemsChangedIndexPaths;
@property(readonly, nonatomic) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails; // @synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails;
- (void)enumerateMovedIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_prepareIncrementalDetails;
- (void)prepareIfNeeded;
- (id)description;
- (id)contentChangedItemsIndexPaths;
@property(readonly, nonatomic) NSArray *changedItemsIndexPaths;
@property(readonly, nonatomic) NSArray *insertedItemsIndexPaths;
@property(readonly, nonatomic) NSArray *deletedItemsIndexPaths;
@property(readonly, nonatomic) NSIndexSet *changedSections;
@property(readonly, nonatomic) NSIndexSet *insertedSections;
@property(readonly, nonatomic) NSIndexSet *deletedSections;
@property(readonly, nonatomic) BOOL hasMoves;
@property(readonly, nonatomic) BOOL hasIncrementalChanges;
- (id)initWithSectionedDataSourceChangeDetails:(id)arg1 shiftedSection:(long long)arg2;

@end

