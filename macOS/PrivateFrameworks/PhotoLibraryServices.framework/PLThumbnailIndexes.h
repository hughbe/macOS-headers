//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject
{
    NSObject<OS_dispatch_queue> *_isolation;
    NSMutableIndexSet *_unusedIndexes;
    long long _usedMax;
    unsigned long long _fetchTimestamp;
}

+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3;
+ (void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1;
+ (void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)arg1;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2;

@end

