//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHProjectLayoutsDataSource.h>

#import <PhotoPrintProduct/KHEditorDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface KHCardProjectLayoutsDataSource : KHProjectLayoutsDataSource <KHEditorDataSource>
{
    NSMutableArray *_collectionLayouts;
    NSArray *_displayFilters;
}

- (void).cxx_destruct;
- (id)accessibilityValuesForLayout:(id)arg1;
- (id)accessibilityValues;
- (id)editorDisplayFilterForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageIndexForDisplayFilter:(id)arg1;
- (id)editorDisplayFilters;
- (id)editorDisplayFiltersAccessibilityLabel;
- (void)clearEditorPlacedPhotos;
- (void)clearEditorPlacedPhotosForLayouts:(id)arg1;
- (long long)numberOfSpreadEditorLayoutsInRange:(struct _NSRange)arg1;
- (void)exchangeEditorLayoutAtIndex:(long long)arg1 withEditorLayoutAtIndex:(long long)arg2;
- (void)moveEditorLayoutAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)canMoveEditorLayoutAtIndex:(long long)arg1;
- (id)selectionIndicesForProposedSelectionIndex:(long long)arg1;
- (BOOL)shouldSelectEditorLayoutAtIndex:(long long)arg1;
- (double)editorScaleForReferenceSize:(struct CGSize)arg1;
- (double)bestFitScaleForLayout:(id)arg1 referenceSize:(struct CGSize)arg2;
- (id)editorTitleForLayoutsAtPageIndex:(long long)arg1;
- (long long)pageIndexForEditorLayout:(id)arg1;
- (id)editorLayoutsForPageAtIndex:(long long)arg1;
- (unsigned long long)numberOfVisibleEditorPagesPerPage;
- (long long)numberOfEditorPages;
- (long long)indexOfEditorLayout:(id)arg1;
- (id)editorLayoutForSelection:(id)arg1;
- (id)editorLayoutAtIndex:(long long)arg1;
- (long long)numberOfEditorLayouts;
- (id)editorTitle;
- (id)undoManager;
- (id)collectionLayouts;
- (void)resetCollectionLayouts;
- (BOOL)editorLayoutAtIndexIsHidden:(long long)arg1;
- (BOOL)adjustEditorPageCount:(unsigned long long)arg1;
- (id)editorIndexSetForSelectAllTrailing;
- (id)editorIndexSetForSelectAllLeading;
- (id)editorIndexSetForSelectAll;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

