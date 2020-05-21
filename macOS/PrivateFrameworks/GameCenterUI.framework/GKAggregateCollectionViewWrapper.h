//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKAggregateMapping, NSUICollectionView;

@interface GKAggregateCollectionViewWrapper : NSObject
{
    NSUICollectionView *_wrappedView;
    GKAggregateMapping *_mapping;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)wrapperForView:(id)arg1 mapping:(id)arg2;
@property(retain, nonatomic) GKAggregateMapping *mapping; // @synthesize mapping=_mapping;
@property(retain, nonatomic) NSUICollectionView *wrappedView; // @synthesize wrappedView=_wrappedView;
- (id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2;
- (void)_gkPerformWithoutViewReuse:(CDUnknownBlockType)arg1;
- (id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2;
- (void)_gkRegisterCellClass:(Class)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)indexPathsForVisibleItems;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (id)indexPathsForSelectedItems;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 mapping:(id)arg2;

@end

