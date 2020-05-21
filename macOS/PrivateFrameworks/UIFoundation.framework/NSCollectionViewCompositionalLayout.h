//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSCollectionViewLayout.h>

@class NSCollectionLayoutSection, NSCollectionViewCompositionalLayoutConfiguration, _NSCollectionCompositionalLayoutSolver, _NSCollectionCompositionalLayoutSolverUpdate, _NSDataSourceSnapshotter, _NSUpdateVisibleCellsContext;
@protocol _NSCollectionCompositionalLayoutSolverResolveResult;

@interface NSCollectionViewCompositionalLayout : NSCollectionViewLayout
{
    NSCollectionViewCompositionalLayoutConfiguration *_configuration;
    BOOL _defersInitialSolveUntilPrepare;
    BOOL _isInUpdateVisibleCellsPass;
    BOOL _layoutRTL;
    BOOL _roundsToScreenScale;
    NSCollectionLayoutSection *_layoutSectionTemplate;
    CDUnknownBlockType _layoutSectionProvider;
    _NSCollectionCompositionalLayoutSolver *_solver;
    _NSDataSourceSnapshotter *_dataSourceSnapshotter;
    _NSUpdateVisibleCellsContext *_updateVisibleCellsContext;
    _NSCollectionCompositionalLayoutSolverUpdate *_currentUpdate;
    id <_NSCollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
    struct NSEdgeInsets _memoizedDynamicAnimatorWorldAdjustingInsets;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL roundsToScreenScale; // @synthesize roundsToScreenScale=_roundsToScreenScale;
@property(nonatomic) BOOL layoutRTL; // @synthesize layoutRTL=_layoutRTL;
@property(retain, nonatomic) id <_NSCollectionCompositionalLayoutSolverResolveResult> currentResolveResult; // @synthesize currentResolveResult=_currentResolveResult;
@property(retain, nonatomic) _NSCollectionCompositionalLayoutSolverUpdate *currentUpdate; // @synthesize currentUpdate=_currentUpdate;
@property(retain, nonatomic) _NSUpdateVisibleCellsContext *updateVisibleCellsContext; // @synthesize updateVisibleCellsContext=_updateVisibleCellsContext;
@property(nonatomic) BOOL isInUpdateVisibleCellsPass; // @synthesize isInUpdateVisibleCellsPass=_isInUpdateVisibleCellsPass;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(retain, nonatomic) _NSDataSourceSnapshotter *dataSourceSnapshotter; // @synthesize dataSourceSnapshotter=_dataSourceSnapshotter;
@property(nonatomic) struct NSEdgeInsets memoizedDynamicAnimatorWorldAdjustingInsets; // @synthesize memoizedDynamicAnimatorWorldAdjustingInsets=_memoizedDynamicAnimatorWorldAdjustingInsets;
@property(nonatomic) BOOL defersInitialSolveUntilPrepare; // @synthesize defersInitialSolveUntilPrepare=_defersInitialSolveUntilPrepare;
@property(retain, nonatomic) _NSCollectionCompositionalLayoutSolver *solver; // @synthesize solver=_solver;
@property(copy, nonatomic) CDUnknownBlockType layoutSectionProvider; // @synthesize layoutSectionProvider=_layoutSectionProvider;
@property(retain, nonatomic) NSCollectionLayoutSection *layoutSectionTemplate; // @synthesize layoutSectionTemplate=_layoutSectionTemplate;
- (void)_invokeVisibleItemsInvalidationHandlerIfNeeded;
- (id)_containerFromCollectionView;
- (id)_supplementaryElementKindsAssociatedWithItemIndexPath:(id)arg1;
- (BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
- (struct CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect)arg2;
- (BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (struct CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (struct CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (int)_orthogonalScrollingAxis;
- (BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
- (struct CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
- (double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
- (struct CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1;
- (void)_setOffset:(struct CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
- (id)_orthogonalScrollingSections;
- (BOOL)_hasOrthogonalScrollingSections;
- (id)_updateContainerOffsetForPinnedSupplementarySectionItems;
- (void)_computeAndUpdateAdjustedContentFrame;
- (id)_dataSourceSnapshotter;
- (BOOL)_shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2;
- (id)_boundsChangeResolve;
- (id)_updateResolve;
- (void)_fullResolve;
- (BOOL)_layoutCannotBeRendered;
- (int)_layoutAxis;
- (void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct NSEdgeInsets)arg1;
- (BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (void)_didPerformUpdateVisibleCellsPass;
- (void)_willPerformUpdateVisibleCellsPass;
- (BOOL)_estimatesSupplementaryItems;
- (BOOL)_estimatesSizes;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (id)boundarySupplementaryItems;
- (long long)scrollDirection;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;
- (id)initWithLayoutSection:(id)arg1;
@property(copy) NSCollectionViewCompositionalLayoutConfiguration *configuration;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 sectionProvider:(CDUnknownBlockType)arg2 configuration:(id)arg3;

@end

