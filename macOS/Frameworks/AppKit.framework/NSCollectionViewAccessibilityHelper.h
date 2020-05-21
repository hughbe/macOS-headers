//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class NSArray, NSCollectionView, NSCollectionViewLayout, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSCollectionViewAccessibilityHelper : NSAccessibilityElement
{
    id _layout;
    NSMutableArray *__sectionCache;
    Class _sectionAccessibilityClass;
    unsigned long long __sectionCacheOffset;
    NSArray *_accessibilityVisibleChildren;
}

@property(nonatomic) unsigned long long _sectionCacheOffset; // @synthesize _sectionCacheOffset=__sectionCacheOffset;
@property(nonatomic) Class sectionAccessibilityClass; // @synthesize sectionAccessibilityClass=_sectionAccessibilityClass;
- (void)accessibilitySelectedChildrenDidChange;
- (id)_dequeueSectionWithIndex:(unsigned long long)arg1;
- (void)_trimSectionCacheToVisibleSections:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *_sectionCache;
- (id)_visibleSections;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren;
@property(readonly, copy, nonatomic) NSArray *accessibilityVisibleChildren; // @synthesize accessibilityVisibleChildren=_accessibilityVisibleChildren;
- (long long)accessibilityColumnCount;
- (long long)accessibilityRowCount;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)nextSectionForSection:(id)arg1;
- (id)previousSectionForSection:(id)arg1;
- (id)accessibilityParentForView:(id)arg1;
- (id)accessibilityParentForItem:(id)arg1;
- (void)_dumpVisibleChildren;
- (void)accessibilityPrepareLayout;
- (void)accessibilityInvalidateLayout;
- (void)accessibilityDidEndScrolling;
@property(readonly, nonatomic) __weak NSCollectionView *collectionView;
@property(nonatomic) __weak NSCollectionViewLayout *layout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSArray *accessibilitySelectedCells; // @dynamic accessibilitySelectedCells;

@end

