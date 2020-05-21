//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/_NSCollectionLayoutAPIRespresenting-Protocol.h>

@class NSArray, NSIndexSet, _NSCollectionLayoutGroup;

@interface _NSCollectionLayoutSection : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting>
{
    _NSCollectionLayoutGroup *_layoutGroup;
    struct NSDirectionalEdgeInsets _contentInsets;
    double _interGroupSpacing;
    long long _orthogonalScrollingBehavior;
    NSArray *_boundarySupplementaryItems;
    BOOL _supplementariesFollowContentInsets;
    CDUnknownBlockType _visibleItemsTransformer;
    NSArray *_decorationItems;
    NSArray *_supplementaryItems;
    NSIndexSet *_pinnedSupplementaryItemIndexes;
}

+ (id)layoutSectionWithLayoutGroup:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // @synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property(copy, nonatomic) CDUnknownBlockType visibleItemsTransformer; // @synthesize visibleItemsTransformer=_visibleItemsTransformer;
@property(nonatomic) BOOL supplementariesFollowContentInsets; // @synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(nonatomic) long long orthogonalScrollingBehavior; // @synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior;
@property(nonatomic) double interGroupSpacing; // @synthesize interGroupSpacing=_interGroupSpacing;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLayoutGroup:(id)arg1;
- (id)initWithLayoutGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 interGroupSpacing:(double)arg3 orthogonalScrollingBehavior:(long long)arg4 boundarySupplementaryItems:(id)arg5 supplementariesFollowContentInsets:(BOOL)arg6 visibleItemsTransformer:(CDUnknownBlockType)arg7 decorationItems:(id)arg8 supplementaryItems:(id)arg9 pinnedSupplementaryItemIndexes:(id)arg10;

@end

