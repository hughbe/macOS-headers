//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItem-Protocol.h>

@class NSArray, NSDate, NSDateComponents, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, PHAsset;
@protocol PGHighlightItem;

@interface PGHighlightItemList : NSObject <PGHighlightItem>
{
    unsigned short _type;
    unsigned short _visibilityState;
    unsigned short _enrichmentState;
    unsigned short _kind;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSMutableOrderedSet *_internalHighlightItems;
    NSMutableSet *_internalAddedHighlightItems;
    NSMutableSet *_internalRemovedHighlightItems;
    id <PGHighlightItem> _parentHighlightItem;
    NSString *_dateDescription;
    NSString *_smartDescription;
    PHAsset *_keyAsset;
    NSArray *_extendedCuratedAssets;
    id _modelObject;
    double _promotionScore;
}

+ (void)updateParentHighlightItemLists:(id)arg1 withChildHighlightItems:(id)arg2;
+ (id)timeSortDescriptors;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) unsigned short enrichmentState; // @synthesize enrichmentState=_enrichmentState;
@property(nonatomic) unsigned short visibilityState; // @synthesize visibilityState=_visibilityState;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
@property(nonatomic) double promotionScore; // @synthesize promotionScore=_promotionScore;
@property(retain, nonatomic) id modelObject; // @synthesize modelObject=_modelObject;
@property(retain, nonatomic) NSArray *extendedCuratedAssets; // @synthesize extendedCuratedAssets=_extendedCuratedAssets;
@property(retain, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSString *smartDescription; // @synthesize smartDescription=_smartDescription;
@property(copy, nonatomic) NSString *dateDescription; // @synthesize dateDescription=_dateDescription;
@property(readonly, nonatomic) id <PGHighlightItem> parentHighlightItem; // @synthesize parentHighlightItem=_parentHighlightItem;
@property(readonly, nonatomic) NSMutableSet *internalRemovedHighlightItems; // @synthesize internalRemovedHighlightItems=_internalRemovedHighlightItems;
@property(readonly, nonatomic) NSMutableSet *internalAddedHighlightItems; // @synthesize internalAddedHighlightItems=_internalAddedHighlightItems;
@property(retain, nonatomic) NSMutableOrderedSet *internalHighlightItems; // @synthesize internalHighlightItems=_internalHighlightItems;
@property(readonly, copy) NSString *description;
- (void)_updateHighlightItemsOrdering;
- (void)removeHighlightItem:(id)arg1;
- (void)addHighlightItem:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *removedHighlightItems;
@property(readonly, copy, nonatomic) NSSet *addedHighlightItems;
@property(readonly, copy, nonatomic) NSArray *sortedChildHighlightItems;
@property(readonly, nonatomic) BOOL isNewList;
@property(readonly, nonatomic) BOOL hasChanges;
@property(readonly, nonatomic) BOOL isCandidateForReuse;
@property(readonly, copy, nonatomic) NSArray *sortedHighlightItemModelObjects;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSDateComponents *localDateComponents;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initAsNewList;
- (id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

