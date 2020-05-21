//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSMutableDictionary, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet
{
    int _cd_rc;
    struct _NSFaultingMutableOrderedSetFlags _flags;
    id _realSet;
    NSManagedObject *_source;
    unsigned int *_orderKeys;
    id _grottyHack;
    NSMutableDictionary *_forcedKeys;
}

+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)allObjects;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (BOOL)_isIdenticalFault:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectEnumerator;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;
- (BOOL)_hasOrderKeys;
- (id)_newOrderKeys;
- (unsigned int)_orderKeyForObject:(id)arg1;
- (void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned long long **)arg3 reorderedIndexes:(char **)arg4;
- (void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1;
- (void)_assignOrderKeysUsingCount:(unsigned int)arg1;
- (void)_setProcessingIdempotentKVO:(BOOL)arg1;
- (BOOL)_shouldProcessKVOChange;
- (void)willChange;
- (void)willReadWithContents:(id)arg1;
- (void)willRead;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isFault) BOOL fault;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id *)arg2;
- (id)_orderedObjectsAndKeys;

@end

