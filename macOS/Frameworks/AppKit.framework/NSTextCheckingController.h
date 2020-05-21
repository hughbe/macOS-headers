//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSView;
@protocol NSTextCheckingClient;

@interface NSTextCheckingController : NSObject
{
    id _client;
    NSView *_correctingView;
    NSArray *_smartLinkLocations;
    NSArray *_textCheckingChangeLocations;
    NSArray *_textCheckingScheduledRanges;
    NSAttributedString *_annotatedStringForHandlingResults;
    CDUnknownBlockType _performTextChecking;
    struct __CFRunLoopTimer *_bubbleTimer;
    struct _NSRange _bubbleRange;
    struct _NSRange _spellingFromMenuRange;
    struct _NSRange _temporaryCorrectionRange;
    struct _NSRange _previousConsideredRange;
    struct _NSRange _previousSelectedRange;
    unsigned long long _previousCheckingSequenceNumber;
    unsigned long long _prechangeCheckingSequenceNumber;
    unsigned long long _candidateSequenceNumber;
    long long _spellCheckerDocumentTag;
    long long _offsetForHandlingResults;
    struct __tccFlags {
        unsigned int startOfTextReplaced:1;
        unsigned int startOfTextReplacedRecently:1;
        unsigned int pendingMarkForTextCheckingAfterChange:1;
        unsigned int scheduleTextCheckingQuickly:1;
        unsigned int textHasBeenEdited:1;
        unsigned int correctingText:1;
        unsigned int checkSpellingInFlight:1;
        unsigned int pendingCandidateUpdate:1;
        unsigned int registeredForNotifications:1;
        unsigned int generatingMenu:1;
        unsigned int globalAutomaticSpellingCorrectionEnabled:1;
        unsigned int globalAutomaticSpellCheckingEnabled:1;
        unsigned int globalAutomaticGrammarCheckingEnabled:1;
        unsigned int globalAutomaticDataDetectionEnabled:1;
        unsigned int globalAutomaticLinkDetectionEnabled:1;
        unsigned int globalAutomaticQuoteSubstitutionEnabled:1;
        unsigned int globalAutomaticDashSubstitutionEnabled:1;
        unsigned int globalAutomaticSmartInsertDeleteEnabled:1;
        unsigned int globalAutomaticTextReplacementEnabled:1;
        unsigned int globalAutomaticTextCompletionEnabled:1;
        unsigned int clientIsAsynchronous:1;
        unsigned int usesStringAnnotations:1;
        unsigned int reserved:10;
    } _tccFlags;
    struct __tccClientFlags {
        unsigned int respondsToAutocorrectionType:1;
        unsigned int respondsToSpellCheckingType:1;
        unsigned int respondsToGrammarCheckingType:1;
        unsigned int respondsToSmartQuotesType:1;
        unsigned int respondsToSmartDashesType:1;
        unsigned int respondsToSmartInsertDeleteType:1;
        unsigned int respondsToTextReplacementType:1;
        unsigned int respondsToDataDetectionType:1;
        unsigned int respondsToLinkDetectionType:1;
        unsigned int respondsToTextCompletionType:1;
        unsigned int respondsToSetAutocorrectionType:1;
        unsigned int respondsToSetSpellCheckingType:1;
        unsigned int respondsToSetGrammarCheckingType:1;
        unsigned int respondsToSetSmartQuotesType:1;
        unsigned int respondsToSetSmartDashesType:1;
        unsigned int respondsToSetSmartInsertDeleteType:1;
        unsigned int respondsToSetTextReplacementType:1;
        unsigned int respondsToSetDataDetectionType:1;
        unsigned int respondsToSetLinkDetectionType:1;
        unsigned int respondsToSetTextCompletionType:1;
        unsigned int respondsToAutomaticLanguageDetectionEnabled:1;
        unsigned int respondsToSelectedRanges:1;
        unsigned int respondsToIsSelectable:1;
        unsigned int respondsToIsEditable:1;
        unsigned int respondsToIsRichText:1;
        unsigned int respondsToLayoutOrientation:1;
        unsigned int respondsToReplaceWithReplacementRange:1;
        unsigned int respondsToLacksAnnotatedString:1;
        unsigned int respondsToSuppressTextCheckingAdaptation:1;
        unsigned int respondsToUpdateCandidates:1;
        unsigned int respondsToCheckTextInRange:1;
        unsigned int respondsToHandleTextCheckingResults:1;
    } _tccClientFlags;
}

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)menuAtIndex:(unsigned long long)arg1 clickedOnSelection:(BOOL)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct _NSRange)_characterRangeByTrimmingWhitespaceFromRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (void)handleCandidates:(id)arg1 sequenceNumber:(long long)arg2;
- (void)setPendingCandidateUpdate:(BOOL)arg1;
- (BOOL)pendingCandidateUpdate;
- (void)updateCandidates;
- (void)_updateCandidates;
- (void)_turnOnTextReplacementFromMenu:(id)arg1;
- (void)_replaceTextFromMenu:(id)arg1;
- (void)_turnOnSpellingCorrectionFromMenu:(id)arg1;
- (void)_unlearnSpellingFromMenu:(id)arg1;
- (void)_learnSpellingFromMenu:(id)arg1;
- (void)_ignoreGrammarFromMenu:(id)arg1;
- (void)_ignoreSpellingFromMenu:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)_changeAlternativesFromMenu:(id)arg1;
- (void)_changeAlternativesToString:(id)arg1;
- (void)_changeAlternativesForRange:(struct _NSRange)arg1 toString:(id)arg2;
- (void)changeSpelling:(id)arg1;
- (void)_changeSpellingFromMenu:(id)arg1;
- (void)_changeSpellingToWord:(id)arg1;
- (void)_changeSpellingForRange:(struct _NSRange)arg1 toWord:(id)arg2;
- (id)_spellingGuessesForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (id)_spellingGuessesForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2 canCorrect:(char *)arg3;
- (BOOL)_canUnlearnSpellingForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
@property long long spellCheckerDocumentTag;
- (void)showGuessPanel:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)_checkSpellingForPanel:(BOOL)arg1;
- (void)_checkSpellingWithOriginalStartLocation:(unsigned long long)arg1 currentStartLocation:(unsigned long long)arg2 firstTime:(BOOL)arg3 alreadyWrapped:(BOOL)arg4 forPanel:(BOOL)arg5;
- (void)_handleGrammarResultWithChecker:(id)arg1 grammarRange:(struct _NSRange)arg2 offset:(long long)arg3 grammarDetailRange:(struct _NSRange)arg4 grammarDetail:(id)arg5 orthography:(id)arg6 inAnnotatedString:(id)arg7;
- (void)_handleSpellingResultWithChecker:(id)arg1 misspellRange:(struct _NSRange)arg2 offset:(long long)arg3 orthography:(id)arg4 inAnnotatedString:(id)arg5;
- (void)updateSpellingPanel;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)_handleCorrectionIndicatorForCheckingType:(unsigned long long)arg1 replacingRange:(struct _NSRange)arg2 string:(id)arg3 withString:(id)arg4 acceptedString:(id)arg5;
- (void)_showCorrectionIndicatorForCheckingType:(unsigned long long)arg1 replacingRange:(struct _NSRange)arg2 string:(id)arg3 withString:(id)arg4 alternativeStrings:(id)arg5;
- (void)handleTextCheckingResults:(id)arg1 forRange:(struct _NSRange)arg2 inAnnotatedString:(id)arg3 offset:(long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 wordCount:(long long)arg8;
- (void)handleTextCheckingResults:(id)arg1 forRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 orthography:(id)arg5 wordCount:(long long)arg6;
- (void)_handleTextCheckingResults:(id)arg1 forRange:(struct _NSRange)arg2 inAnnotatedString:(id)arg3 offset:(long long)arg4 types:(unsigned long long)arg5 options:(id)arg6 orthography:(id)arg7 wordCount:(long long)arg8;
- (void)_handleTextCheckingResults:(id)arg1 sequenceNumber:(long long)arg2 forRange:(struct _NSRange)arg3 inAnnotatedString:(id)arg4 offset:(long long)arg5 types:(unsigned long long)arg6 options:(id)arg7 orthography:(id)arg8 wordCount:(long long)arg9 applyNow:(BOOL)arg10 checkSynchronously:(BOOL)arg11;
- (void)checkTextInDocument:(id)arg1;
- (void)checkTextInSelection:(id)arg1;
- (void)replaceTextInSelection:(id)arg1;
- (void)addLinksInSelection:(id)arg1;
- (void)replaceDashesInSelection:(id)arg1;
- (void)replaceQuotesInSelection:(id)arg1;
- (void)checkTextInDocumentUsingTypes:(unsigned long long)arg1 options:(id)arg2 restrictToSelection:(BOOL)arg3;
- (void)checkTextInRange:(struct _NSRange)arg1 types:(unsigned long long)arg2 options:(id)arg3;
- (void)_checkTextInRange:(struct _NSRange)arg1 types:(unsigned long long)arg2 options:(id)arg3;
- (void)_handleAlternativesIndicatorForRange:(struct _NSRange)arg1 contents:(id)arg2 textAlternatives:(id)arg3 acceptedString:(id)arg4;
- (void)_showAlternativesIndicatorForRange:(struct _NSRange)arg1 contents:(id)arg2 textAlternatives:(id)arg3;
- (void)_alternativesTimer;
- (void)_handleGuessesIndicatorForRange:(struct _NSRange)arg1 contents:(id)arg2 acceptedString:(id)arg3;
- (void)_showGuessesIndicatorForRange:(struct _NSRange)arg1 contents:(id)arg2 guesses:(id)arg3;
- (void)_guessesTimer;
- (void)_handleReversionIndicatorForRange:(struct _NSRange)arg1 contents:(id)arg2 correction:(id)arg3 string:(id)arg4 acceptedString:(id)arg5;
- (void)_showReversionIndicatorForRange:(struct _NSRange)arg1 contents:(id)arg2 correction:(id)arg3 string:(id)arg4 alternativeStrings:(id)arg5;
- (void)_reversionTimer;
- (void)_checkBubblesAfterMovementFromRange:(struct _NSRange)arg1;
- (void)_invalidateBubbleTimer;
- (void)_setBubbleTimer:(CDUnknownFunctionPointerType)arg1 range:(struct _NSRange)arg2 offset:(unsigned long long)arg3;
- (void)_markUncheckedAfterMovementFromRange:(struct _NSRange)arg1;
- (void)didChangeSelectedRange;
- (void)didChangeSelectionFromRange:(struct _NSRange)arg1;
- (void)didChangeText;
- (void)didChangeTextInRange:(struct _NSRange)arg1;
- (void)willChangeTextInRanges:(id)arg1 replacementStrings:(id)arg2;
- (void)_removeSpellingAttributeAfterChangeToRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;
- (void)willChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (void)considerTextCheckingForRange:(struct _NSRange)arg1;
- (void)_scheduleTextCheckingForRange:(struct _NSRange)arg1;
- (void)performPendingTextChecking;
- (void)_performPendingTextChecking;
- (void)cancelCorrectionIndicator;
- (void)dismissCorrectionIndicator;
- (void)_performScheduledTextChecking:(BOOL)arg1;
- (void)_markAllForTextChecking;
- (void)_checkLinksAfterChange;
- (void)_markForTextCheckingAfterChange;
- (void)_unmarkTextEdited;
- (void)insertedTextInRange:(struct _NSRange)arg1;
- (void)_markAsCheckedForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (struct _NSRange)_modifiedGrammarRangeForRange:(struct _NSRange)arg1 details:(id)arg2 inAnnotatedString:(id)arg3;
- (void)_removeGrammarAttributeForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (void)_removeGrammarAttributeForRange:(struct _NSRange)arg1 includeAccessibility:(BOOL)arg2 inAnnotatedString:(id)arg3;
- (void)_removeSpellingAttributeForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (void)_removeSpellingAttributeForRange:(struct _NSRange)arg1 includeAccessibility:(BOOL)arg2 inAnnotatedString:(id)arg3;
- (void)_addGrammarAttributesForRange:(struct _NSRange)arg1 details:(id)arg2 inAnnotatedString:(id)arg3;
- (void)_addGrammarAttributesForRange:(struct _NSRange)arg1 detailRange:(struct _NSRange)arg2 detail:(id)arg3 inAnnotatedString:(id)arg4;
- (void)_addSpellingAttributeForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (void)setSpellingState:(long long)arg1 range:(struct _NSRange)arg2 inAnnotatedString:(id)arg3;
- (void)_clearSpellingForRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (struct _NSRange)_selectionRangeForProposedRange:(struct _NSRange)arg1 inAnnotatedString:(id)arg2;
- (struct _NSRange)_doubleClickAtIndex:(unsigned long long)arg1 limitedRangeOK:(BOOL)arg2 inAnnotatedString:(id)arg3;
- (BOOL)suppressTextCheckingAdaptation;
- (BOOL)lacksAnnotatedString;
- (id)candidateListTouchBarItem;
- (void)viewForRange:(struct _NSRange)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectAndShowRange:(struct _NSRange)arg1;
- (void)setAnnotatedSubstring:(id)arg1 forRange:(struct _NSRange)arg2 offset:(long long)arg3 replacementRanges:(id)arg4 resultingRanges:(id)arg5;
- (void)_unifiedSetAnnotatedSubstring:(id)arg1 forRange:(struct _NSRange)arg2 offset:(long long)arg3 replacementRanges:(id)arg4 resultingRanges:(id)arg5;
- (void)_setAnnotatedSubstring:(id)arg1 forRange:(struct _NSRange)arg2 offset:(long long)arg3 replacementRanges:(id)arg4 resultingRanges:(id)arg5;
- (void)annotatedSubstringForSelectedRangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)annotatedSubstringForProposedRange:(struct _NSRange)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)annotatedSubstringForProposedRange:(struct _NSRange)arg1 wrap:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1 range:(struct _NSRange)arg2 offset:(unsigned long long)arg3;
- (void)setTextCheckedAnnotationForRange:(struct _NSRange)arg1 offset:(unsigned long long)arg2;
- (void)selectedRangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)selectedRangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)recordResponse:(long long)arg1 toCorrection:(id)arg2 forWord:(id)arg3;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)spellCheckerDidChangeDashSubstitution:(id)arg1;
- (void)spellCheckerDidChangeQuoteSubstitution:(id)arg1;
- (void)spellCheckerDidChangeReplacement:(id)arg1;
- (void)spellCheckerDidChangeCompletion:(id)arg1;
- (void)spellCheckerDidChangeCorrection:(id)arg1;
- (void)_noticeGlobalSettings;
- (void)spellCheckerDidChangeLanguage:(id)arg1;
- (void)spellCheckerDidUnlearnWord:(id)arg1;
- (void)spellCheckerDidLearnWord:(id)arg1;
- (unsigned long long)enabledTextCheckingTypes;
- (long long)layoutOrientation;
- (BOOL)isRichText;
- (BOOL)isEditable;
- (BOOL)isSelectable;
- (BOOL)isAutomaticTextCompletionEnabled;
- (BOOL)isAutomaticTextReplacementEnabled;
- (BOOL)smartInsertDeleteEnabled;
- (BOOL)isAutomaticDashSubstitutionEnabled;
- (BOOL)isAutomaticQuoteSubstitutionEnabled;
- (BOOL)isAutomaticLinkDetectionEnabled;
- (BOOL)isAutomaticDataDetectionEnabled;
- (BOOL)isGrammarCheckingEnabled;
- (BOOL)isContinuousSpellCheckingEnabled;
- (BOOL)isAutomaticSpellingCorrectionEnabled;
- (BOOL)isAutomaticLanguageIdentificationEnabled;
- (void)setTextCompletionType:(long long)arg1;
- (void)setLinkDetectionType:(long long)arg1;
- (void)setDataDetectionType:(long long)arg1;
- (void)setTextReplacementType:(long long)arg1;
- (void)setSmartInsertDeleteType:(long long)arg1;
- (void)setSmartDashesType:(long long)arg1;
- (void)setSmartQuotesType:(long long)arg1;
- (void)setGrammarCheckingType:(long long)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (long long)textCompletionType;
- (long long)linkDetectionType;
- (long long)dataDetectionType;
- (long long)textReplacementType;
- (long long)smartInsertDeleteType;
- (long long)smartDashesType;
- (long long)smartQuotesType;
- (long long)grammarCheckingType;
- (long long)spellCheckingType;
- (long long)autocorrectionType;
- (id)_URLStringForString:(id)arg1;
- (id)_URLForString:(id)arg1;
- (BOOL)needsLinkAnnotations;
- (id)convertFromStringAnnotatedString:(id)arg1;
- (id)convertToStringAnnotatedString:(id)arg1;
- (id)convertFromStringAnnotationDictionary:(id)arg1;
- (id)convertToStringAnnotationDictionary:(id)arg1;
- (id)validAnnotations;
- (void)setUsesStringAnnotations:(BOOL)arg1;
- (BOOL)usesStringAnnotations;
@property(readonly) id <NSTextCheckingClient> client;
- (void)dealloc;
- (void)invalidate;
- (id)initWithClient:(id)arg1;

@end

