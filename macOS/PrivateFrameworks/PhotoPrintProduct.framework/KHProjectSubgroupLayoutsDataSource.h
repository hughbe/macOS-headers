//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHLayoutCollectionDataSource.h>

@class KHProjectSubgroup, NSMutableArray;

@interface KHProjectSubgroupLayoutsDataSource : KHLayoutCollectionDataSource
{
    KHProjectSubgroup *_projectSubgroup;
    NSMutableArray *_observedLayouts;
}

+ (long long)physicalNumberOfItemsInProjectSubgroup:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *observedLayouts; // @synthesize observedLayouts=_observedLayouts;
@property(readonly, nonatomic) KHProjectSubgroup *projectSubgroup; // @synthesize projectSubgroup=_projectSubgroup;
- (id)debugDescription;
- (id)layoutAtIndexPath:(id)arg1;
- (id)indexPathForLayout:(id)arg1;
- (id)subtitleForSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (double)largestLayoutSideInSection:(long long)arg1;
- (long long)physicalNumberOfItemsInSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)theme;
- (void)removeObserverForLayouts;
- (void)addObserverForLayouts;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithProjectSubgroup:(id)arg1;

@end

