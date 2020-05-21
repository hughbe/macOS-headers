//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)unscriptRange:(struct _NSRange)arg1;
- (void)subscriptRange:(struct _NSRange)arg1;
- (void)superscriptRange:(struct _NSRange)arg1;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;
- (void)applyFontTraits:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_attributeFixingInProgress;
- (void)updateAttachmentsFromPath:(id)arg1;
@end

