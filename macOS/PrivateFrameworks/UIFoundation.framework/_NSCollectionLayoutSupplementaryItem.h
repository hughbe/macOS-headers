//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/_NSCollectionLayoutItem.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/_NSCollectionLayoutAPIRespresenting-Protocol.h>

@class NSString, _NSCollectionLayoutAnchor, _NSCollectionLayoutEdgeSpacing;

@interface _NSCollectionLayoutSupplementaryItem : _NSCollectionLayoutItem <NSCopying, _NSCollectionLayoutAPIRespresenting>
{
    NSString *_elementKind;
    long long _zIndex;
    _NSCollectionLayoutAnchor *_containerAnchor;
    _NSCollectionLayoutAnchor *_itemAnchor;
    _NSCollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
    BOOL _canAdjustContentSize;
}

+ (id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4;
+ (id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL canAdjustContentSize; // @synthesize canAdjustContentSize=_canAdjustContentSize;
@property(readonly, nonatomic) _NSCollectionLayoutAnchor *itemAnchor; // @synthesize itemAnchor=_itemAnchor;
@property(readonly, nonatomic) _NSCollectionLayoutAnchor *containerAnchor; // @synthesize containerAnchor=_containerAnchor;
@property(readonly, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property(nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 zIndex:(long long)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4 containerAnchor:(id)arg5 itemAnchor:(id)arg6 edgeSpacing:(id)arg7 name:(id)arg8 canAdjustContentSize:(BOOL)arg9;

@end

