//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSArray, NSIndexSet, NSString, PLManagedObject, PLObjectSnapshot;

@interface PLContainerChangeNotification : PLChangeNotification
{
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    BOOL _didCalculateDiffs;
    BOOL _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSIndexSet *_changedIndexes;
    BOOL _countDidChange;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) struct __CFArray *movedFromIndexes; // @synthesize movedFromIndexes=_movedFromIndexes;
@property(readonly, nonatomic) NSIndexSet *movedIndexes; // @synthesize movedIndexes=_movedIndexes;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
@property(readonly, nonatomic) NSArray *changedObjects;
@property(readonly, nonatomic) NSArray *insertedObjects;
@property(readonly, nonatomic) NSArray *deletedObjects;
@property(readonly, nonatomic) BOOL countDidChange;
@property(readonly, nonatomic) NSIndexSet *changedIndexesRelativeToSnapshot;
@property(readonly, nonatomic) NSIndexSet *changedIndexes;
@property(readonly, nonatomic) BOOL hasMoves;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes;
@property(readonly, nonatomic) NSIndexSet *deletedIndexes;
@property(readonly, nonatomic) BOOL shouldReload;
- (id)name;
- (id)object;
- (void)dealloc;
- (id)init;
- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
@property(readonly, retain, nonatomic) NSString *_diffDescription;
@property(readonly, retain, nonatomic) PLObjectSnapshot *snapshot;
@property(readonly, retain, nonatomic) NSString *_contentRelationshipName;
@property(readonly, retain, nonatomic) NSArray *_changedObjects;
@property(readonly, retain, nonatomic) PLManagedObject *_managedObject;
@property(nonatomic, setter=_setDidCalculateDiffs:) BOOL _didCalculateDiffs;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;
- (id)_init;

@end

