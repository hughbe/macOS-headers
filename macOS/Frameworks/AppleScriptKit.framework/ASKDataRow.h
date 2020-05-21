//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptKit/NSCopying-Protocol.h>

@class ASKDataSource, NSMutableArray;

@interface ASKDataRow : NSObject <NSCopying>
{
    ASKDataSource *_dataSource;
    NSMutableArray *_cells;
    NSObject *_representedObject;
}

+ (id)rowForDataSource:(id)arg1;
- (id)objectSpecifier;
- (unsigned long long)objectIndex_ask;
- (id)valueInCellsWithUniqueID:(long long)arg1;
- (void)replaceInColumns:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromColumnsAtIndex:(unsigned long long)arg1;
- (void)insertInColumns:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllCells;
- (void)replaceInCells:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromCellsAtIndex:(unsigned long long)arg1;
- (void)insertInCells:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInCells:(id)arg1;
- (long long)compareDataRow:(id)arg1;
- (id)cellWithName:(id)arg1;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (id)cells;
- (id)columns;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initForDataSource:(id)arg1;

@end

