//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/DocFormatAddressValidation-Protocol.h>

@class NSAttributedString, NSDictionary, NSMutableArray, NSMutableData, NSRunStorage;

@interface NSDocFormatWriter : NSObject <DocFormatAddressValidation>
{
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSMutableData *_primaryData;
    NSMutableData *_secondaryData;
    NSMutableData *_primaryIndex;
    NSMutableData *_secondaryIndex;
    NSMutableData *_tableOfContents;
    NSMutableData *_documentData;
    NSMutableData *_tableData;
    NSMutableData *_charData;
    NSMutableData *_parData;
    NSMutableData *_summaryInfoData;
    NSMutableData *_documentSummaryInfoData;
    NSMutableArray *_fontArray;
    NSRunStorage *_charFlags;
    BOOL _needsTrailingBreak;
}

- (void)setDocumentAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (id)docFormatData;
- (void)_writeSummaryData:(BOOL)arg1;
- (void)_writeInfoStringForKey:(id)arg1 number:(unsigned int)arg2 headerData:(id)arg3 contentsData:(id)arg4;
- (void)_writeDocumentData;
- (void)_writeParagraphData;
- (void)_writeCharacterData;
- (BOOL)validateAddress:(const char *)arg1 numberOfBytes:(unsigned long long)arg2;

@end

