//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableColumnInfo, WMTableStyle;

__attribute__((visibility("hidden")))
@interface WMTableMapper : CMMapper
{
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}

+ (BOOL)isTableDeleted:(id)arg1;
- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setInsideBorders:(id)arg1;
- (id)columnInfo;
- (id)insideBorders;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)copyStopArrayForRow:(unsigned long long)arg1;
- (id)copyColumnInfo;

@end

