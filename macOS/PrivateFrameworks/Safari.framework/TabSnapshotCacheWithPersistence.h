//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TabSnapshotVending;

__attribute__((visibility("hidden")))
@interface TabSnapshotCacheWithPersistence : NSObject
{
    id <TabSnapshotVending> _tabSnapshotVendor;
    double _snapshotWidth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double snapshotWidth; // @synthesize snapshotWidth=_snapshotWidth;
@property(readonly, nonatomic) id <TabSnapshotVending> tabSnapshotVendor; // @synthesize tabSnapshotVendor=_tabSnapshotVendor;
- (void)generateCachedSnapshotForTabViewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cachedSnapshotForTabViewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTabSnapshotVendor:(id)arg1;

@end

