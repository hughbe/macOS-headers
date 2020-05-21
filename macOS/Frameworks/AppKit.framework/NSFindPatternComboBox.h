//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSComboBox.h>

#import <AppKit/NSFindPatternField-Protocol.h>

@class NSFindPatternAttachmentCell, NSString;
@protocol NSFindPatternManager;

__attribute__((visibility("hidden")))
@interface NSFindPatternComboBox : NSComboBox <NSFindPatternField>
{
    id <NSFindPatternManager> findPatternManager;
    NSFindPatternAttachmentCell *selectedAttachment;
}

@property id <NSFindPatternManager> findPatternManager; // @synthesize findPatternManager;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_selectedFindPattern:(id)arg1;
- (id)menuForFindPatternAttachment:(id)arg1;
- (id)_uniquePatterns;
- (id)replacementExpression;
- (id)regularExpression;
- (id)findPatternArray;
- (BOOL)hasFindPattern;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (void)textDidChange:(id)arg1;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)removeFindPattern:(id)arg1;
- (id)_rangesOfFindPattern:(id)arg1;
- (void)setFindPatternPropertyList:(id)arg1;
- (id)findPatternPropertyList;
- (id)plainTextValue;
- (void)setFindPatternArray:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)_uniqueFindPatternsInAttributedStringAttachments:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)_updateFindPatternsWithNewPatterns:(id)arg1;
- (void)_updateReplacePatternsWithNewPatterns:(id)arg1;
- (void)_invalidateLayout;
- (void)_insertFindPattern:(id)arg1;
- (void)insertNewFindPattern:(id)arg1;
- (void)_insertFindPatternAttachment:(id)arg1;
- (id)_findPatternAttachmentForFindPattern:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_eventIsInsertPatternKeyEquivalent:(id)arg1;
- (id)_fieldEditor;
- (BOOL)_isFindField;
- (id)replaceField;
- (id)findField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

