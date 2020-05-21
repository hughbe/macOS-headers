//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKList : NSObject
{
    unsigned int *_items;
    unsigned long long _count;
    unsigned long long _size;
    struct _opaque_pthread_mutex_t _lock;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)print;
- (void)unlock;
- (void)lock;
- (id)allMatchingObjectsFromTable:(id)arg1;
- (void)removeAllIDs;
- (void)removeID:(unsigned int)arg1;
- (void)addIDsFromList:(id)arg1;
- (void)copyItemsInto:(id)arg1;
- (void)addID:(unsigned int)arg1;
- (BOOL)hasID:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1;
- (id)init;

@end

