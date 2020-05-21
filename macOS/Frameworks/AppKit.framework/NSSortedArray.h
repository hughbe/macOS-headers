//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface NSSortedArray : NSMutableArray
{
    NSMutableArray *_array;
    SEL _compareSelector;
    unsigned long long _cachedCount;
    id _cachedFirstObject;
}

+ (void)initialize;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)setArray:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)_insertObjectInSortOrder:(id)arg1;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
@property SEL compareSelector;
- (id)init;
- (id)initWithCompareSelector:(SEL)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 compareSelector:(SEL)arg2;

@end

