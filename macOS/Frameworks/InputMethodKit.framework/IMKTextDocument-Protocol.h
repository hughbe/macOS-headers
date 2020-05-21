//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/NSObject-Protocol.h>

@class IMKTextDocumentTraits, NSCharacterSet, NSMutableArray, NSString;
@protocol IMKCandidateMenu, IMKTextDocument;

@protocol IMKTextDocument <NSObject>
@property(readonly, nonatomic) NSMutableArray *textSegmentationCharacterCounts;
@property(readonly, nonatomic) id <IMKCandidateMenu> candidateMenu;
@property(nonatomic) BOOL showsWithMarking;
@property(retain, nonatomic) NSString *text;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) BOOL hasSelection;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) id <IMKTextDocument> composingText;
@property(readonly, nonatomic) IMKTextDocumentTraits *traits;
- (void)undoTextChanges;
- (void)unmarkStateForUndo;
- (void)markStateForUndo;
- (unsigned long long)moveCursorBackwardBy:(unsigned long long)arg1;
- (unsigned long long)moveCursorForwardBy:(unsigned long long)arg1;
- (unsigned long long)moveCursorToEnd;
- (unsigned long long)moveCursorToStart;
- (unsigned long long)moveCursorByCharacterCount:(long long)arg1;
- (NSString *)recomposeCharacters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(NSCharacterSet *)arg3;
- (NSString *)recomposeCharacters:(unsigned long long)arg1 after:(long long)arg2;
- (NSString *)recomposeCharacters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(NSCharacterSet *)arg3;
- (NSString *)recomposeCharacters:(unsigned long long)arg1 before:(long long)arg2;
- (void)commitChanges;
- (void)commitComposingText;
- (void)replaceCharactersSurroundingCursor:(unsigned long long)arg1 withCharacters:(NSString *)arg2;
- (void)replaceCharactersAtCursor:(unsigned long long)arg1 withCharacters:(NSString *)arg2;
- (void)replaceCharacterAtCursorWith:(unsigned int)arg1;
- (void)replaceCharacters:(unsigned long long)arg1 after:(long long)arg2 with:(NSString *)arg3;
- (void)replaceCharacters:(unsigned long long)arg1 before:(long long)arg2 with:(NSString *)arg3;
- (void)insertCharacters:(NSString *)arg1 after:(long long)arg2;
- (void)insertCharacters:(NSString *)arg1 before:(long long)arg2;
- (void)insertCharactersAtCursor:(NSString *)arg1;
- (void)insertCharacterAtCursor:(unsigned int)arg1;
- (unsigned long long)deleteCharactersSurrounding:(long long)arg1;
- (unsigned long long)deleteCharacters:(unsigned long long)arg1 surrounding:(long long)arg2;
- (unsigned long long)deleteCharacters:(unsigned long long)arg1 after:(long long)arg2;
- (unsigned long long)deleteCharacters:(unsigned long long)arg1 before:(long long)arg2;
- (void)deleteCharactersAtCursor:(unsigned long long)arg1;
- (void)deleteCharacterAtCursor;
- (BOOL)hasContentAfter:(long long)arg1;
- (BOOL)hasContentBefore:(long long)arg1;
- (NSString *)characters:(unsigned long long)arg1 surrounding:(long long)arg2;
- (NSString *)charactersSurrounding:(long long)arg1;
- (unsigned int)characterAfter:(long long)arg1;
- (NSString *)characters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(NSCharacterSet *)arg3;
- (NSString *)characters:(unsigned long long)arg1 after:(long long)arg2;
- (NSString *)charactersAfter:(long long)arg1;
- (unsigned int)characterBefore:(long long)arg1;
- (NSString *)characters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(NSCharacterSet *)arg3;
- (NSString *)characters:(unsigned long long)arg1 before:(long long)arg2;
- (NSString *)charactersBefore:(long long)arg1;
- (void)setText:(NSString *)arg1 preserveCursorPosition:(BOOL)arg2;
@end

