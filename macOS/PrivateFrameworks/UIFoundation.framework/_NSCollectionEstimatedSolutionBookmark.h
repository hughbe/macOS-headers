//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSCollectionLayoutItemSolver;
@protocol _NSCollectionLayoutAuxiliaryOffsets;

__attribute__((visibility("hidden")))
@interface _NSCollectionEstimatedSolutionBookmark : NSObject
{
    _NSCollectionLayoutItemSolver *_solution;
    id <_NSCollectionLayoutAuxiliaryOffsets> _supplementaryOffsets;
    struct _NSRange _itemRange;
    struct CGRect _solutionFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <_NSCollectionLayoutAuxiliaryOffsets> supplementaryOffsets; // @synthesize supplementaryOffsets=_supplementaryOffsets;
@property(readonly, nonatomic) struct _NSRange itemRange; // @synthesize itemRange=_itemRange;
@property(readonly, nonatomic) struct CGRect solutionFrame; // @synthesize solutionFrame=_solutionFrame;
@property(readonly, nonatomic) _NSCollectionLayoutItemSolver *solution; // @synthesize solution=_solution;
- (id)description;
- (id)_supplementaryOffsetsForItemRange:(struct _NSRange)arg1 solution:(id)arg2 supplementaryOffsets:(id)arg3;
- (id)initWithSolution:(id)arg1 frame:(struct CGRect)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 maxItemFrameCount:(long long)arg5;

@end

