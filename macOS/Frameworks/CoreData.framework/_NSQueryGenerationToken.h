//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSQueryGenerationToken.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSQueryGenerationToken : NSQueryGenerationToken
{
    NSString *_storeIdentifier;
    id _store;
    id _generationIdentifier;
    BOOL _isCompound;
    BOOL _isSingleton;
    BOOL _freeValueOnDealloc;
    BOOL _isUnmoored;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)identifierIsForNonGenerationalStore:(id)arg1;
- (void)_setPersistentStoreReference:(id)arg1;
- (id)_retainedPersistentStore;
- (id)persistentStoreCoordinator;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id *)arg2;
- (BOOL)_moor:(id)arg1 error:(id *)arg2;
- (void)_makeConcrete:(BOOL)arg1;
- (id)_expectedStores;
- (id)_generationalComponentForStore:(id)arg1;
- (id)_storeIdentifier;
- (id)_token;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)_setFreeValue:(BOOL)arg1;
- (void)_setIsUnmoored:(BOOL)arg1;
- (BOOL)isUnmoored;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForNonGenerationalStore:(id)arg1;
- (id)initWithCompoundValue:(id)arg1;
- (id)initWithValue:(id)arg1 store:(id)arg2;
- (id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(BOOL)arg3;
- (id)_initWithValue:(id)arg1 singleton:(BOOL)arg2;

@end

