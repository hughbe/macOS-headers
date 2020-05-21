//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableSet;

@interface KHDBUniqueQueue : NSObject
{
    NSLock *m_lock;
    NSMutableSet *m_inQueue;
    NSMutableArray *m_front;
    NSMutableArray *m_back;
}

- (id)grabAllObjects;
- (id)popFrontObject;
- (void)removeAllObjects;
- (void)removeObjects:(id)arg1;
- (void)addObjectsToEnd:(id)arg1;
- (void)addObjectsToFront:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addAtEnd:(id)arg1;
- (void)addToFront:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

