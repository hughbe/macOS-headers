//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <MailUI/NSScrollViewDelegate-Protocol.h>

@class MUICollectionHeightStorage, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString;
@protocol MUICollectionViewDelegate;

@interface MUICollectionView : NSView <NSScrollViewDelegate>
{
    NSMutableArray *_activeCellViews;
    NSMutableSet *_spareCellViews;
    NSMutableIndexSet *_faultedIndexes;
    NSMutableIndexSet *_lockedIndexes;
    NSMutableIndexSet *_selectionIndexes;
    unsigned long long _focusedIndex;
    BOOL _emphasized;
    BOOL _inScroll;
    BOOL _adjustHeightForPinning;
    BOOL _adjustScrollForPinning;
    id <MUICollectionViewDelegate> _delegate;
    MUICollectionHeightStorage *_heightStorage;
    unsigned long long _pinnedIndex;
    unsigned long long _pinnedCellEdge;
    unsigned long long _pinnedEdge;
    double _pinnedOffset;
    double _pinnedHeightAdjustment;
}

+ (id)keyPathsForValuesAffectingNumberOfCells;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) BOOL adjustScrollForPinning; // @synthesize adjustScrollForPinning=_adjustScrollForPinning;
@property(nonatomic) BOOL adjustHeightForPinning; // @synthesize adjustHeightForPinning=_adjustHeightForPinning;
@property(nonatomic) double pinnedHeightAdjustment; // @synthesize pinnedHeightAdjustment=_pinnedHeightAdjustment;
@property(nonatomic) double pinnedOffset; // @synthesize pinnedOffset=_pinnedOffset;
@property(nonatomic) unsigned long long pinnedEdge; // @synthesize pinnedEdge=_pinnedEdge;
@property(nonatomic) unsigned long long pinnedCellEdge; // @synthesize pinnedCellEdge=_pinnedCellEdge;
@property(nonatomic) unsigned long long pinnedIndex; // @synthesize pinnedIndex=_pinnedIndex;
@property(readonly, nonatomic) MUICollectionHeightStorage *heightStorage; // @synthesize heightStorage=_heightStorage;
@property(nonatomic) BOOL inScroll; // @synthesize inScroll=_inScroll;
@property(nonatomic) __weak id <MUICollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_scrollToNextCell:(id)arg1 contiguously:(BOOL)arg2;
- (BOOL)_scrollToPreviousCell:(id)arg1 contiguously:(BOOL)arg2;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)keyDown:(id)arg1;
- (BOOL)_hasFirstResponder;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)scrollToCellAtIndex:(unsigned long long)arg1 constrainScroll:(BOOL)arg2;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)_scrollEdge:(unsigned long long)arg1 to:(CDUnknownBlockType)arg2;
- (id)enclosingScrollView;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)didScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)_scrollViewDidScroll:(id)arg1;
- (void)_updateGeometryIfNeeded;
- (void)_updateConstraintsForCellAtIndex:(unsigned long long)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)layout;
- (void)updateConstraints;
- (void)noteHeightOfCellAtIndex:(unsigned long long)arg1;
- (void)_updateSelectionIfNeeded;
- (void)_updateEmphasisIfNeeded;
- (void)deselectCellsAtIndexes:(id)arg1;
- (void)selectCellsAtIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)mouseUp:(id)arg1;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (struct CGRect)_adjustRectForPinning:(struct CGRect)arg1;
- (void)_pinToCellAtIndex:(unsigned long long)arg1 cellEdge:(unsigned long long)arg2 edge:(unsigned long long)arg3 offset:(double)arg4;
- (void)pinToCellAtIndex:(unsigned long long)arg1 cellEdge:(unsigned long long)arg2 edge:(unsigned long long)arg3;
- (void)_pinTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;
- (void)enumerateCellViewsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCellViewsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexForView:(id)arg1;
- (unsigned long long)indexForResponder:(id)arg1;
- (id)cellViewAtIndex:(unsigned long long)arg1;
- (struct CGRect)rectForCellAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfCellsInRect:(struct CGRect)arg1;
- (unsigned long long)_indexOfCellView:(id)arg1;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (id)_claimUnusedCell;
- (id)reusableCellViewWithIdentifier:(id)arg1;
- (void)_faultCellsAtIndexesInRange:(struct _NSRange)arg1;
- (void)updateVisibleCells;
- (void)unlockCellsAtIndexes:(id)arg1;
- (void)unlockCellsAtIndexesInRange:(struct _NSRange)arg1;
- (void)unlockCellAtIndex:(unsigned long long)arg1;
- (void)lockCellsAtIndexes:(id)arg1;
- (void)lockCellsAtIndexesInRange:(struct _NSRange)arg1;
- (void)lockCellAtIndex:(unsigned long long)arg1;
- (void)removeAllCells;
- (void)removeCellsAtIndexes:(id)arg1;
- (void)removeCellsAtIndexesInRange:(struct _NSRange)arg1;
- (void)removeCellAtIndex:(unsigned long long)arg1;
- (void)moveCellAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)insertCellsAtIndexes:(id)arg1;
- (void)insertCellsAtIndexesInRange:(struct _NSRange)arg1;
- (void)insertCellAtIndex:(unsigned long long)arg1;
- (void)_updateCellIndexes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) struct _NSRange visibleRange;
@property(copy, nonatomic) NSIndexSet *selectionIndexes;
@property(readonly, nonatomic) unsigned long long numberOfCells;
@property(readonly, nonatomic) unsigned long long firstResponderIndex;
@property(nonatomic) unsigned long long focusedIndex;
@property(nonatomic) BOOL emphasized;
@property(nonatomic) struct NSEdgeInsets margins;
@property(nonatomic) struct CGSize cellSpacing;
- (BOOL)isFlipped;
- (BOOL)acceptsFirstResponder;
- (void)_muiCollectionViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

