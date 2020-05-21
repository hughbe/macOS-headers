//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PXSearchResultsSectionedDataSourceManager, PXSearchTopAssetsResult;
@protocol PXSearchResultsLayoutDataSource;

@interface PXSearchResultsViewModel : NSObject
{
    id <PXSearchResultsLayoutDataSource> _delegate;
    unsigned long long _configurationType;
    PXSearchResultsSectionedDataSourceManager *_dataSourceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXSearchResultsSectionedDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(nonatomic) unsigned long long configurationType; // @synthesize configurationType=_configurationType;
@property(nonatomic) __weak id <PXSearchResultsLayoutDataSource> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *suggestions;
@property(readonly, nonatomic) NSArray *wordEmbeddingSubstitutions;
@property(readonly, nonatomic) NSArray *attachmentURLs;
- (long long)_adjustedSectionForSection:(long long)arg1;
- (id)_adjustedIndexPathForIndexPath:(id)arg1;
- (unsigned long long)_displayableSuggestionCount;
- (BOOL)isValidSection:(long long)arg1;
- (BOOL)_sectionIsTopAssetsSection:(long long)arg1;
- (id)_selectedWordEmbeddingTextAtRow:(long long)arg1;
- (BOOL)_resultsAreWordEmbeddingsOnly;
- (BOOL)shouldShowTableFooterView;
- (BOOL)hasNoResults;
- (id)_sugestionForIndexPath:(id)arg1;
- (id)suggestionItemForIndexPath:(id)arg1;
@property(readonly, nonatomic) PXSearchTopAssetsResult *topAssetsSearchResult;
- (BOOL)topAssetsExistForSection:(long long)arg1;
- (double)numberOfTopAssetRows;
- (double)calculatedRowHeightForTopAssets;
- (double)heightForRowType:(unsigned long long)arg1 info:(id)arg2;
- (id)wordEmbeddingForIndexPath:(id)arg1;
- (BOOL)shouldDisplayHeaderViewForSection:(long long)arg1;
- (id)titleForHeaderButtonInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)allSearchResultsForSection:(long long)arg1;
- (long long)numberOfSearchResultsInSection:(long long)arg1;
- (long long)numberOfVisibleSearchResultsInSection:(long long)arg1;
- (id)topAssetAtIndexPath:(id)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (BOOL)sectionIsExpanded:(long long)arg1;
- (BOOL)sectionIsExpandable:(long long)arg1;
- (id)collapseSection:(long long)arg1;
- (id)expandSection:(long long)arg1;
- (BOOL)hasDisplayableSuggestions;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)searchResultDataForIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)startingSectionNumberForType:(unsigned long long)arg1;
- (unsigned long long)rowTypeForIndexPath:(id)arg1;
- (unsigned long long)sectionTypeForSection:(long long)arg1;
- (void)fetchImageForPerson:(id)arg1 targetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSearchSectionedDataSource:(id)arg1 configurationType:(unsigned long long)arg2;
- (id)initWithSectionedDataSourceManager:(id)arg1 configurationType:(unsigned long long)arg2;

@end

