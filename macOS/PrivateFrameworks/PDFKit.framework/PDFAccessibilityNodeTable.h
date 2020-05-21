//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAccessibilityNode.h>

@class PDFAccessibilityNodeTablePrivate;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityNodeTable : PDFAccessibilityNode
{
    PDFAccessibilityNodeTablePrivate *_private3;
}

- (void).cxx_destruct;
- (id)_cells;
- (id)_rows;
- (void)buildAccessibilityHierarchy;
- (long long)accessibilityColumnCount;
- (long long)accessibilityRowCount;
- (id)accessibilityColumnHeaderUIElements;
- (id)accessibilityHeader;
- (id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
- (id)accessibilityVisibleCells;
- (id)accessibilitySelectedCells;
- (id)accessibilitySelectedRows;
- (id)accessibilityVisibleRows;
- (id)accessibilityRows;
- (id)accessibilityRole;
- (id)initWithParent:(id)arg1 nodeRef:(struct CGPDFTaggedNode *)arg2;

@end

