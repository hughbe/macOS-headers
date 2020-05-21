//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (void).cxx_destruct;
- (id)description;
- (id)newRunIterator;
- (id)runIterator;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (int)nestingLevel;
- (int)blockType;
- (void)clearRows;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (id)addRow;
- (id)rowAt:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)clearProperties;
- (id)properties;
- (id)initWithText:(id)arg1;

@end

