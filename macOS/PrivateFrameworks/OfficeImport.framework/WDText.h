//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;
    int mTextType;
    WDDocument *mDocument;
    WDTableCell *mTableCell;
}

- (void).cxx_destruct;
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;
- (id)content;
- (BOOL)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)newBlockIterator;
- (id)blockIterator;
- (int)tableNestingLevel;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)addTableAtIndex:(int)arg1;
- (id)addTable;
- (id)paragraphs;
- (id)firstParagraph;
- (id)addParagraphAtIndex:(int)arg1;
- (id)addParagraph;
@property(readonly) __weak WDTableCell *tableCell; // @synthesize tableCell=mTableCell;
- (int)textType;
- (void)addBlock:(id)arg1;
- (unsigned long long)indexOfBlock:(id)arg1;
- (id)lastBlock;
- (id)blockAt:(unsigned long long)arg1;
- (unsigned long long)blockCount;
- (id)blocks;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;

@end

