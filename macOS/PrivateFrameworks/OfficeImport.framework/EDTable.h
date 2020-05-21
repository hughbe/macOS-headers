//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject
{
    EDResources *mResources;
    unsigned long long mStyleIndex;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    unsigned long long mHeaderRowBorderDxfIndex;
    unsigned long long mTotalsRowBorderDxfIndex;
    unsigned long long mDataAreaBorderDxfIndex;
    unsigned long long mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    unsigned long long mHeaderRowCount;
    unsigned long long mTotalsRowCount;
    _Bool mShowFirstColumn;
    _Bool mShowLastColumn;
    _Bool mShowRowStripes;
    _Bool mShowColumnStripes;
    EDCollection *mTableColumns;
    EDCollection *mColumnFilters;
}

+ (id)tableWithResources:(id)arg1;
- (void).cxx_destruct;
- (void)setTableRange:(id)arg1;
- (void)setShowColumnStripes:(_Bool)arg1;
- (_Bool)showColumnStripes;
- (void)setShowRowStripes:(_Bool)arg1;
- (_Bool)showRowStripes;
- (void)setShowLastColumn:(_Bool)arg1;
- (_Bool)showLastColumn;
- (void)setShowFirstColumn:(_Bool)arg1;
- (_Bool)showFirstColumn;
- (id)columnFilters;
- (id)tableColumns;
- (void)setTotalsRowCount:(unsigned long long)arg1;
- (unsigned long long)totalsRowCount;
- (void)setHeaderRowCount:(unsigned long long)arg1;
- (unsigned long long)headerRowCount;
- (id)tableRange;
- (void)setStyleName:(id)arg1;
- (id)styleName;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setTableBorderDxf:(id)arg1;
- (id)tableBorderDxf;
- (void)setDataAreaBorderDxf:(id)arg1;
- (id)dataAreaBorderDxf;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (id)totalsRowBorderDxf;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (id)headerRowBorderDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)headerRowDxf;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)initWithResources:(id)arg1;
- (id)description;
- (void)setTableBorderDxfIndex:(unsigned long long)arg1;
- (unsigned long long)tableBorderDxfIndex;
- (void)setDataAreaBorderDxfIndex:(unsigned long long)arg1;
- (unsigned long long)dataAreaBorderDxfIndex;
- (void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1;
- (unsigned long long)totalsRowBorderDxfIndex;
- (void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1;
- (unsigned long long)headerRowBorderDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (unsigned long long)dataAreaDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)totalsRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)headerRowDxfIndex;
- (void)setStyleIndex:(unsigned long long)arg1;
- (unsigned long long)styleIndex;

@end

