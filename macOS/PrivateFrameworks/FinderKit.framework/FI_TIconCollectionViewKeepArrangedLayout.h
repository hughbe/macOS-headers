//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface FI_TIconCollectionViewKeepArrangedLayout : NSCollectionViewFlowLayout
{
    vector_b67dfe3a _columnOffsets;
    _Bool _isJustifiedLayout;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(getter=isJustifiedLayout) _Bool justifiedLayout; // @synthesize justifiedLayout=_isJustifiedLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (id)_adjustItemLayoutAttributes:(id)arg1 byXOffset:(double)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)setInterItemSpacingForIconSize:(const struct CGSize *)arg1 titleOnBottom:(_Bool)arg2;

@end

