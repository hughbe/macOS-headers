//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSColor, NSData, NSFileWrapper, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableData, NSMutableDictionary, NSTextTable;

@interface NSRTFReader : NSObject
{
    NSMutableAttributedString *_topAttributedString;
    NSMutableAttributedString *_curAttributedString;
    NSMutableArray *_attributesStack;
    NSMutableDictionary *_curAttributes;
    unsigned int _level;
    NSData *_rtfData;
    NSMutableDictionary *_fontTable;
    NSFileWrapper *_document;
    union {
        unsigned char thin[128];
        unsigned short fat[128];
    } _textBuffer;
    unsigned long long _textBufferIndex;
    int _rtfVersion;
    int _cocoaVersion;
    int _cocoaSubVersion;
    int _readOnly;
    int _usesScreenFonts;
    int _colorTblColorSpace;
    unsigned int _defaultToUniCharEncoding;
    struct _NSAttributeInfo _attributeInfo;
    NSMutableData *_attributeInfoStack;
    struct CGSize _paperSize;
    double _lMargin;
    double _rMargin;
    double _bMargin;
    double _tMargin;
    NSMutableDictionary *_documentInfoDictionary;
    struct CGSize _viewSize;
    int _viewScale;
    int _viewKind;
    NSMapTable *_cachedRTFFontTable;
    double _hyphenationFactor;
    double _defaultTabInterval;
    NSColor *_documentBackgroundColor;
    struct _NSRTFPriv _private;
    BOOL _textBufferContentsIsFat;
    BOOL _explicitCharSetEncountered;
    BOOL _isRTLDocument;
    long long _readLimit;
    long long _thumbnailLimit;
    BOOL _limitReached;
    unsigned char _textFlow;
    NSMutableArray *_layoutOrientationSections;
    unsigned long long _verticalOrientationLocation;
    NSArray *_textBlocks;
    NSMutableArray *_nestedTables;
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
    BOOL _setTableCells;
    unsigned long long _currentBorderEdge;
    BOOL _currentBorderIsTable;
    NSMutableDictionary *_listDefinitions;
    int _currentListNumber;
    int _currentListLevel;
    NSCalendar *_gregorianCalendar;
    NSMutableDictionary *_fontAttributesTable;
    long long _cocoaTextScaling;
    long long _cocoaPlatform;
    long long _targetTextScaling;
    long long _sourceTextScaling;
    long long _finalTextScaling;
}

- (void)finalize;
- (void)dealloc;
- (void)_popState;
- (void)_pushState;
- (void)processString:(id)arg1;
- (void)_addOverride:(long long)arg1 forKey:(long long)arg2;
- (void)_addListDefinition:(id)arg1 forKey:(long long)arg2;
- (id)_listDefinitions;
- (void)_setCurrentListLevel:(long long)arg1;
- (long long)_currentListLevel;
- (void)_setCurrentListNumber:(long long)arg1;
- (long long)_currentListNumber;
- (void)_updateAttributes;
- (double)_updateFontSizeForTextScalingIfNeeded:(double)arg1;
- (void)_determineFinalTextScalingType;
- (void)_determineSourceTextScalingType;
- (id)_documentInfoDictionary;
- (id)attributesAtEndOfGroup;
- (id)attributedString;
- (id)attributedStringToEndOfGroup;
- (id)_mutableParagraphStyle;
- (id)defaultParagraphStyle;
- (id)mutableAttributes;
- (id)mutableAttributedString;
- (void)setMutableAttributedString:(id)arg1;
- (id)documentAttributes;
- (void)_mergeTableCellsVertically;
- (void)_mergeTableCellsHorizontally;
- (void)_endTableRow;
- (void)_lastTableRow;
- (void)_endTableCell;
- (void)_paragraphInTable;
- (void)_endTableCellDefinition;
- (void)_startTableRowDefinition;
- (void)_setTableNestingLevel:(long long)arg1;
- (void)_clearTableCells;
- (void)_setTableCells;
- (void)_popTableState;
- (void)_pushTableState;
- (void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(BOOL)arg2;
- (BOOL)_currentTableCellIsPlaceholder;
- (BOOL)_currentBorderIsTable;
- (unsigned long long)_currentBorderEdge;
- (id)_currentTableCell;
- (id)_currentTable;
- (void)_beginTableRow;
- (void)_ensureTableCells;
- (void)_setSourceTextScaling:(long long)arg1;
- (void)_setTargetTextScaling:(long long)arg1;
- (void)setCocoaTextScaling:(long long)arg1;
- (long long)cocoaTextScaling;
- (void)setCocoaPlatform:(long long)arg1;
- (long long)cocoaPlatform;
- (unsigned long long)textFlow;
- (void)setTextFlow:(unsigned long long)arg1;
- (long long)baseWritingDirection;
- (void)setBaseWritingDirection:(long long)arg1;
- (double)defaultTabInterval;
- (void)setDefaultTabInterval:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setBottomMargin:(double)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setLeftMargin:(double)arg1;
- (void)setUsesScreenFonts:(long long)arg1;
- (void)setReadOnly:(long long)arg1;
- (double)floatCocoaVersion;
- (void)setCocoaSubVersion:(long long)arg1;
- (void)setCocoaVersion:(long long)arg1;
- (long long)cocoaSubVersion;
- (long long)cocoaVersion;
- (void)setViewScale:(long long)arg1;
- (void)setViewKind:(long long)arg1;
- (struct CGSize)viewSize;
- (void)setViewSize:(struct CGSize)arg1;
- (struct CGSize)paperSize;
- (void)setPaperSize:(struct CGSize)arg1;
- (void)setThumbnailLimit:(long long)arg1;
- (void)setReadLimit:(long long)arg1;
- (id)_RTFDFileWrapper;
- (void)_setRTFDFileWrapper:(id)arg1;
- (id)initWithRTF:(id)arg1;
- (id)initWithRTFDFileWrapper:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithRTFD:(id)arg1;

@end

