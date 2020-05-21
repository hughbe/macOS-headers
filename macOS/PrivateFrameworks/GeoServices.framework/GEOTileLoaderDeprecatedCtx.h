//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderDeprecatedCtx : NSObject
{
    struct __CFRunLoop *_runloop;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_submittedList;
    GEOTileKeyList *_satisfiedList;
    GEOTileKeyList *_notLoaded;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _error;
    CDUnknownBlockType _finished;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) CDUnknownBlockType finished; // @synthesize finished=_finished;
@property(copy, nonatomic) CDUnknownBlockType error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
- (void)failure:(const struct _GEOTileKey *)arg1 error:(id)arg2 info:(id)arg3;
- (void)success:(const struct _GEOTileKey *)arg1 tile:(id)arg2 info:(id)arg3;
- (void)breakCycle;
- (void)cancel;
- (void)dealloc;
- (id)initWithList:(id)arg1;

@end

