//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (IC_UI)
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(id)arg2;
- (long long)ic_writingDirectionAtIndex:(unsigned long long)arg1;
- (id)ic_attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(id)arg2;
- (id)ic_stringWithoutAttachments;
- (id)ic_stringByTrimmingLeadingTrailingWhitespace;
- (struct _NSRange)ic_rangeForAttachment:(id)arg1 withTextAttachment:(id *)arg2;
- (id)ic_textTablesInRange:(struct _NSRange)arg1;
- (unsigned long long)ic_numberOfTables;
- (struct _NSRange)ic_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (id)ic_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange *)arg2;
- (unsigned long long)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out unsigned long long *)arg2;
- (CDStruct_4bcfbbae)ic_tableSizeForTextTable:(id)arg1 inRange:(struct _NSRange)arg2;
@end

