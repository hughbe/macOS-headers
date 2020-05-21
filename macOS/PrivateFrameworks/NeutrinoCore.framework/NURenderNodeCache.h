//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)retrieveAndCacheNode:(id)arg1;
- (id)cachedNodeForNode:(id)arg1;
- (void)addNode:(id)arg1;
- (void)_addNode:(id)arg1;
- (id)init;

@end

