//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/_NSCollectionViewCompositionalLayoutConfiguration-Protocol.h>

@class NSArray, NSString;

@interface NSCollectionViewCompositionalLayoutConfiguration : NSObject <_NSCollectionViewCompositionalLayoutConfiguration, NSCopying>
{
    long long _scrollDirection;
    double _interSectionSpacing;
    NSArray *_boundarySupplementaryItems;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(copy) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)differencesFromConfiguration:(id)arg1;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

