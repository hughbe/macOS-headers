//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewFlowLayout.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit21ParticipantListLayout : NSCollectionViewFlowLayout
{
    MISSING_TYPE *indexPathLayoutAttributes;
    MISSING_TYPE *lastInvalidatedSize;
    MISSING_TYPE *calculatedContentSize;
}

- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

