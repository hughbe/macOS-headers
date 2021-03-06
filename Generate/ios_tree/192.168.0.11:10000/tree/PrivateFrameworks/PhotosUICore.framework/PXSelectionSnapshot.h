/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSelectionSnapshot : NSObject {
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _cursorIndexPath;
    PXSectionedDataSource * _dataSource;
    bool  _isSelectionLimitReached;
    struct PXSimpleIndexPath { 
        unsigned long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _pendingIndexPath;
    PXIndexPathSet * _selectedIndexPaths;
}

@property (nonatomic, readonly) <PXFastEnumeration> *allItemsEnumerator;
@property (nonatomic, readonly) <PXFastEnumeration> *allObjectsEnumerator;
@property (nonatomic, readonly) <PXFastEnumeration> *allSectionsEnumerator;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } cursorIndexPath;
@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } firstSelectedIndexPath;
@property (nonatomic, readonly) bool isSelectionLimitReached;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } lastSelectedIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } pendingIndexPath;
@property (nonatomic, readonly) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property (nonatomic, readonly) PXIndexPathSet *selectedIndexPaths;

- (void).cxx_destruct;
- (id)allItemsEnumerator;
- (id)allObjectsEnumerator;
- (id)allSectionsEnumerator;
- (bool)areAllItemsSelected;
- (bool)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })cursorIndexPath;
- (id)dataSource;
- (id)description;
- (void)enumerateSelectedObjectsUsingBlock:(id /* block */)arg1;
- (id)fetchSelectedObjects;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })firstSelectedIndexPath;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathOfObjectPassingTest:(id /* block */)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1 selectedIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3 pendingIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4 selectionLimitReached:(bool)arg5;
- (bool)isAnyItemSelected;
- (bool)isAnySectionSelected;
- (bool)isIndexPathSelected:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)isSelectionLimitReached;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })lastSelectedIndexPath;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })pendingIndexPath;
- (id)sectionIndexPathsContainingSelection;
- (id)selectedIndexPaths;

@end
