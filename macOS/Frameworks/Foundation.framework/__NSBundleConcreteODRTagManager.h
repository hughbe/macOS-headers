//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSBundleODRTagManager.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface __NSBundleConcreteODRTagManager : _NSBundleODRTagManager
{
    NSMutableDictionary *_tagToPreservationPriority;
    struct os_unfair_lock_s _lock;
}

- (void)dealloc;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (id)init;

@end

