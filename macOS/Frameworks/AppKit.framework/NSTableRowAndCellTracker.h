//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSPointerArray, NSTableView;

__attribute__((visibility("hidden")))
@interface NSTableRowAndCellTracker : NSObject
{
    NSPointerArray *_pointerArray;
    NSMapTable *_mapTable;
    long long _deleteCount;
    long long _nextSpecifierComponent;
    long long _deleteForMoveIndex;
    long long _deleteForMoveShift;
    NSTableView *_tableView;
}

- (void)removeAll;
- (void)unregisterCellsOfRowIndexes:(id)arg1 columnIndexes:(id)arg2;
- (void)shiftIndex:(long long)arg1 shiftAmount:(long long)arg2 isDeleteForMove:(BOOL)arg3;
- (void)unregisterCellsOfTableColumns:(id)arg1;
- (id)_elementSpecifiersForTableColumns:(id)arg1;
- (void)insertSpecifierComponent:(long long)arg1 atIndex:(long long)arg2;
- (void)insertIndex:(long long)arg1;
- (void)removeChildrenOfIndex:(long long)arg1;
- (void)removeIndex:(long long)arg1 shiftsResults:(BOOL)arg2;
- (long long)indexForSpecifierComponent:(long long)arg1;
- (long long)indexForSpecifierComponent:(long long)arg1 inRange:(struct _NSRange)arg2;
- (long long)specifierComponentForIndex:(long long)arg1 registerIfNeeded:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithTableView:(id)arg1;

@end

