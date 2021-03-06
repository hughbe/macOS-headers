//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface NSCollectionViewIndexMapper : NSObject
{
    long long _oldIndexCount;
    long long _newIndexCount;
    long long *_oldIndexMap;
    long long *_newIndexMap;
    NSMutableIndexSet *_oldMovedRows;
    NSMutableIndexSet *_addedRows;
    NSMutableIndexSet *_items;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_deletedRows;
    BOOL _cleanupForMoves;
    BOOL _hasPendingDeletes;
}

- (void).cxx_destruct;
- (void)getNewIndexCount:(long long *)arg1 newIndexMap:(long long **)arg2;
- (void)finishModifications;
- (void)_flushPendingInserts;
- (void)insertItemAtIndex:(long long)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_flushPendingDeletes;
- (void)deleteItemAtIndex:(long long)arg1;
- (BOOL)didDeleteIndex:(long long)arg1;
- (BOOL)didInsertIndex:(long long)arg1;
- (long long)newIndexAt:(long long)arg1;
- (long long)oldIndexAt:(long long)arg1;
- (long long *)newIndexMap;
- (long long *)oldIndexMap;
- (long long)newIndexCount;
- (long long)oldIndexCount;
- (id)initWithOldIndexCount:(long long)arg1 newIndexCount:(long long)arg2;
- (void)dealloc;

@end

