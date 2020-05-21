//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CFPrefsSynchronizer : NSObject
{
    NSObject<OS_dispatch_source> *_synchTimer;
    NSObject<OS_dispatch_queue> *_synchQueue;
    struct __CFSet *_dirtySources;
    struct _opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
    BOOL _active;
}

+ (id)sharedInstance;
- (void)clear;
- (void)clear_alreadyLocked;
- (void)synchronize;
- (void)synchronizeForDaemonTermination;
- (const struct __CFSet *)copyDirtySourcesSnapshotAndClear;
- (void)noteDirtySource:(id)arg1;
- (void)disableTimer_alreadyLocked;
- (void)enableTimer_alreadyLocked;
- (id)init;

@end

