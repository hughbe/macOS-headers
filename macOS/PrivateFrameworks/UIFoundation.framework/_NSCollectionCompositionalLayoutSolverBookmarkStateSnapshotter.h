//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSCollectionSectionSolutionBookmark;

@interface _NSCollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject
{
    _NSCollectionSectionSolutionBookmark *_bookmark;
    long long _originalSectionIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long originalSectionIndex; // @synthesize originalSectionIndex=_originalSectionIndex;
- (void)applyStateToBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2;

@end

