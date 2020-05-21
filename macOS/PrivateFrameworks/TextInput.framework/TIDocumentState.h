//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding>
{
    NSString *_contextBeforeInput;
    NSString *_markedText;
    NSString *_selectedText;
    NSString *_contextAfterInput;
    struct _NSRange _selectedRangeInMarkedText;
}

+ (id)_selectedTextByDeletingInteriorSentences:(id)arg1;
+ (id)_contextStringByTrimmingSuccedingLines:(id)arg1;
+ (id)_contextStringByTrimmingPrecedingLines:(id)arg1;
+ (id)_string:(id)arg1 byTrimmingWordsAfterIndex:(unsigned long long)arg2;
+ (id)_string:(id)arg1 byTrimmingWordsBeforeIndex:(unsigned long long)arg2;
+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange)arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)unboundedDocumentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateForTestingWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange selectedRangeInMarkedText; // @synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText;
@property(readonly, nonatomic) NSString *contextAfterInput; // @synthesize contextAfterInput=_contextAfterInput;
@property(readonly, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(readonly, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property(readonly, nonatomic) NSString *contextBeforeInput; // @synthesize contextBeforeInput=_contextBeforeInput;
- (BOOL)documentIsEmpty;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnboundedContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 unboundedContextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (id)documentStateAfterCursorAdjustment:(long long)arg1;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterInsertingText:(id)arg1;
- (unsigned long long)inputIndexWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)inputStringWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)inputStemWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(CDUnknownBlockType)arg2 reverse:(BOOL)arg3;
- (BOOL)deletingBackwardsWillRemoveText;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;

@end

