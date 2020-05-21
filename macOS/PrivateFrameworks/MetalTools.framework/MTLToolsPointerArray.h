//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MTLToolsPointerArray : NSObject
{
    unsigned long long _pointerAdditions;
    struct unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *>> _pointerSet;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned int _options;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumeratePointersUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectAssociatedWithBaseObject:(id)arg1;
- (id)newObjectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)objectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_objectAssociatedWithBaseObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removePointer:(void *)arg1;
- (void)addPointer:(void *)arg1;
- (void)_addPointer:(void *)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned int)arg1;

@end

