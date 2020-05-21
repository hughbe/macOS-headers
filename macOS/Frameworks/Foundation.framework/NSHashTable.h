//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSPointerFunctions, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)hashTableWithOptions:(unsigned long long)arg1;
+ (id)weakObjectsHashTable;
+ (id)hashTableWithWeakObjects;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSSet *setRepresentation;
- (id)mutableSet;
- (void)minusHashTable:(id)arg1;
- (void)unionHashTable:(id)arg1;
- (void)intersectHashTable:(id)arg1;
- (BOOL)isSubsetOfHashTable:(id)arg1;
- (BOOL)isEqualToHashTable:(id)arg1;
- (BOOL)intersectsHashTable:(id)arg1;
- (BOOL)containsObject:(id)arg1;
@property(readonly, nonatomic) id anyObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)member:(id)arg1;
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (void)removeAllItems;
- (id)copy;
- (void)removeItem:(const void *)arg1;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)addObject:(id)arg1;
- (void *)getItem:(const void *)arg1;
- (unsigned long long)weakCount;
@property(readonly, copy) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)objectEnumerator;
- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;

@end

