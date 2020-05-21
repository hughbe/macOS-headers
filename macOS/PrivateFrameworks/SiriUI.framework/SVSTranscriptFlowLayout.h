//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewFlowLayout.h>

@class NSMutableArray;
@protocol SVSTranscriptFlowLayoutDelegate;

__attribute__((visibility("hidden")))
@interface SVSTranscriptFlowLayout : NSCollectionViewFlowLayout
{
    id <SVSTranscriptFlowLayoutDelegate> _delegate;
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_reloadedIndexPaths;
    NSMutableArray *_handledIndexPaths;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_handledIndexPaths) NSMutableArray *handledIndexPaths; // @synthesize handledIndexPaths=_handledIndexPaths;
@property(readonly, nonatomic, getter=_reloadedIndexPaths) NSMutableArray *reloadedIndexPaths; // @synthesize reloadedIndexPaths=_reloadedIndexPaths;
@property(readonly, nonatomic, getter=_insertedIndexPaths) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property __weak id <SVSTranscriptFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)init;

@end

