//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>
#import <AppKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSCollectionViewLayout, NSCollectionViewLayoutAttributes;

@protocol NSCollectionViewElement <NSObject, NSUserInterfaceItemIdentification>

@optional
- (NSCollectionViewLayoutAttributes *)preferredLayoutAttributesFittingAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)didTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)willTransitionFromLayout:(NSCollectionViewLayout *)arg1 toLayout:(NSCollectionViewLayout *)arg2;
- (void)applyLayoutAttributes:(NSCollectionViewLayoutAttributes *)arg1;
- (void)prepareForReuse;
@end

