//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/PLLocalUUIDConverter-Protocol.h>

@class NSManagedObjectID, NSString, PHObjectReference, PHPhotoLibrary;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying>
{
    BOOL _deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    unsigned long long _propertyHint;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)localIdentifierExpressionForFetchRequests;
+ (void)assertAllObjects:(id)arg1 forSelector:(SEL)arg2 areOfType:(Class)arg3;
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)propertyKeyForEntityKey:(id)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (BOOL)managedObjectSupportsMontage;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsFaceState;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsKeyFaces;
+ (BOOL)managedObjectSupportsPersonFilters;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsMomentShareExpiredState;
+ (BOOL)managedObjectSupportsMomentShareTrashedState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierPropertiesToFetch;
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
- (void).cxx_destruct;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property unsigned long long propertyHint; // @synthesize propertyHint=_propertyHint;
@property(readonly) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, getter=isDeleted) BOOL deleted; // @synthesize deleted=_deleted;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isTransient) BOOL transient;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) id identifier;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_shortObjectIDURI;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (BOOL)hasLoadedPropertySet:(id)arg1;
@property(readonly, nonatomic) PHObjectReference *objectReference;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

