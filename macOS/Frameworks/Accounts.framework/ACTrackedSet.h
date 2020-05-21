//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSCoding-Protocol.h>
#import <Accounts/NSCopying-Protocol.h>
#import <Accounts/NSMutableCopying-Protocol.h>
#import <Accounts/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

+ (id)setWithArray:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (id)set;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateModificationsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModificationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqualToTrackedSet:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)anyObject;
- (id)allModifications;
- (id)allObjects;
- (id)objectEnumerator;
- (id)member:(id)arg1;
@property(readonly) unsigned long long count;
- (id)_initWithEnumerable:(id)arg1 count:(unsigned long long)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)_initWithUnderlyingSet:(id)arg1 changesDictionary:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

