//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _OSLogCatalogFilter, _OSLogIndex, _OSLogTracepointBuffer;

__attribute__((visibility("hidden")))
@interface _OSLogIndexEnumerator : NSObject
{
    NSMutableArray *_subchunkStartQ;
    NSMutableArray *_subchunkEndQ;
    NSMutableArray *_catalogStartQ;
    NSMutableArray *_fileStartQ;
    NSMutableArray *_fileEndQ;
    NSMutableArray *_fileBootQ;
    NSMutableArray *_oversizeChunks;
    struct os_timesync_range_s *_bounds[6];
    struct os_timesync_range_s *_live_bound;
    _OSLogTracepointBuffer *_tracepoints;
    _OSLogIndex *_index;
    _OSLogCatalogFilter *_catalogFilter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *oversizeChunks; // @synthesize oversizeChunks=_oversizeChunks;
- (void)enumerateTracepointsInRange:(struct os_timesync_range_s *)arg1 timesync:(struct _os_timesync_db_s *)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_initTimesyncBounds:(CDStruct_42ec109f *)arg1;
- (void)dealloc;
- (id)initWithIndex:(id)arg1 metadata:(CDStruct_42ec109f *)arg2 fileBootList:(id)arg3 catalogFilter:(id)arg4;

@end

