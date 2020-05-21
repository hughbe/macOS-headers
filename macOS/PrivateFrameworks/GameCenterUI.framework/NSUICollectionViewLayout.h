//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet, NSUICollectionView, NSUICollectionViewLayoutInvalidationContext;

@interface NSUICollectionViewLayout : NSObject
{
    NSUICollectionView *_collectionView;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSUICollectionViewLayout *_transitioningFromLayout;
    NSUICollectionViewLayout *_transitioningToLayout;
    BOOL _inTransitionFromTransitionLayout;
    BOOL _inTransitionToTransitionLayout;
    NSUICollectionViewLayoutInvalidationContext *_invalidationContext;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)indexPathOfItemBelow:(id)arg1;
- (id)indexPathOfItemAbove:(id)arg1;
- (id)indexPathOfItemAfter:(id)arg1;
- (id)indexPathOfItemBefore:(id)arg1;
- (id)indexPathsForItemRangeSelectionFrom:(id)arg1 to:(id)arg2;
- (id)lastSelectableItemIndexPath;
- (id)firstSelectableItemIndexPath;
- (BOOL)_selectableItemAtIndexPath:(id)arg1;
- (BOOL)_isValidSection:(long long)arg1 item:(long long)arg2;
- (struct NSEdgeInsets)insetsForScrollingItemAtIndexPath:(id)arg1 toScrollPosition:(unsigned long long)arg2;
- (struct CGRect)backingAlignedRect:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (long long)userInterfaceLayoutDirection;
- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)finalizeLayoutTransition;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)_finalizeLayoutTransition;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGRect)bounds;
- (struct CGSize)collectionViewContentSize;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_accessibilityLayoutChanged;
- (id)_accessibilityCollectionViewLayoutContext;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (id)accessibilityVisibleChildrenAttribute;
- (void)accessibilitySetSelectedChildrenAttribute:(id)arg1;
- (BOOL)accessibilityIsSelectedChildrenAttributeSettable;
- (id)accessibilitySelectedChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)_indexPathsForItemAccessibilityProxies:(id)arg1;
- (id)indexPathForItemAccessibilityProxy:(id)arg1;
- (id)_accessibilityProxiesForItemsAtIndexPaths:(id)arg1;
- (id)accessibilityProxyForItemAtIndexPath:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (id)_accessibilityProxyForChild:(id)arg1;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)_accessibilityAttributeNamesFromDefinedSelectors;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityNotificationsPostedOnLayoutChange;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)_finalizeCollectionViewItemAnimations;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)_animateView:(id)arg1 withAction:(long long)arg2 fromLayoutAttributes:(id)arg3 toLayoutAttributes:(id)arg4 fromLayout:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;
- (void)_setCollectionView:(id)arg1;

@end

