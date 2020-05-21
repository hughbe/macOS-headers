//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreChineseEngine/CIMBaseEngine.h>

@class CIMCandidate, CIMMecabraEngine, NSString, NSViewController;

@interface CIMPinyinEngine : CIMBaseEngine
{
    BOOL _capsLockEnabled;
    BOOL _lastCharacterWasNumber;
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    CIMMecabraEngine *_mecabraEngine;
    CIMCandidate *_selectedCandidate;
    NSViewController *_strokeInformationViewController;
    BOOL _selectedCandidateChanged;
    BOOL _previousInputSelectedTone;
    BOOL _usesStandardPinyinKeyboardLayout;
    NSString *_pairedPunctuationsInsertedInLastAction;
}

+ (id)contextualVariantMapping;
- (void).cxx_destruct;
@property(nonatomic) BOOL usesStandardPinyinKeyboardLayout; // @synthesize usesStandardPinyinKeyboardLayout=_usesStandardPinyinKeyboardLayout;
@property(nonatomic) BOOL previousInputSelectedTone; // @synthesize previousInputSelectedTone=_previousInputSelectedTone;
@property(retain, nonatomic) NSViewController *strokeInformationViewController; // @synthesize strokeInformationViewController=_strokeInformationViewController;
@property(retain, nonatomic) CIMCandidate *selectedCandidate; // @synthesize selectedCandidate=_selectedCandidate;
@property(retain, nonatomic) CIMMecabraEngine *mecabraEngine; // @synthesize mecabraEngine=_mecabraEngine;
@property(nonatomic) NSString *pairedPunctuationsInsertedInLastAction; // @synthesize pairedPunctuationsInsertedInLastAction=_pairedPunctuationsInsertedInLastAction;
@property(nonatomic) BOOL selectedCandidateChanged; // @synthesize selectedCandidateChanged=_selectedCandidateChanged;
@property(nonatomic) BOOL leftDoubleQuotationMarkInserted; // @synthesize leftDoubleQuotationMarkInserted=_leftDoubleQuotationMarkInserted;
@property(nonatomic) BOOL leftSingleQuotationMarkInserted; // @synthesize leftSingleQuotationMarkInserted=_leftSingleQuotationMarkInserted;
@property(nonatomic) BOOL lastCharacterWasNumber; // @synthesize lastCharacterWasNumber=_lastCharacterWasNumber;
@property(nonatomic) BOOL capsLockEnabled; // @synthesize capsLockEnabled=_capsLockEnabled;
- (void)updateTextReplacementEntries;
- (id)mecabraEnvironment;
- (id)currentInlineText;
- (BOOL)shouldUpdateExistingCandidates;
- (id)higherOrderDataProvider;
- (int)mecabraInputMethodType;
@property(readonly, nonatomic) CIMCandidate *selectedMecabraCandidate;
- (id)inputString;
- (id)sortingMethods;
- (void)hideCandidateWindow;
- (id)informationView;
- (id)candidateListDictionaryWithSortingMethod:(id)arg1;
- (id)insertApostrophesForPinyinString:(void *)arg1;
- (BOOL)isUsingSortingBar;
- (Class)onscreenCandidateWindowClass;
- (BOOL)shouldShowStrokeInformationWindow;
- (BOOL)shouldShowStrokeInformationWindowForCandidates:(id)arg1;
- (void)updateCandidateController:(id)arg1;
- (unsigned long long)panelType;
- (void)enterStrokeSequence;
- (void)forgetSelectedWord;
- (void)selectNextTone;
- (void)selectPreviousTone;
- (void)showPunctationCandidates;
- (void)updateMarkedText;
- (BOOL)insertPairedPunctuations:(id)arg1;
- (BOOL)handleEventDynamic;
- (void)showCandidateWindowIfNeeded;
- (id)convertedPunctuationFromString:(id)arg1;
- (id)contextualVariantForPunctuation:(id)arg1;
- (id)convertedBasicLatinPunctuationFromStringForURL:(id)arg1;
- (BOOL)handleITABCEvent;
- (void)performPageNavigationRight:(id)arg1;
- (void)performPageNavigationLeft:(id)arg1;
- (BOOL)expandableWindowIsShownAboveInlineAndEventIsRepeating;
- (BOOL)isShowingCandidateViewAboveInline;
- (BOOL)isFirstCandidateSelected;
- (BOOL)handleKeyEvent;
- (void)didHandleCandidateSelectionChanged:(id)arg1 candidateController:(id)arg2;
- (void)didHandleCandidateSelected:(id)arg1 isSecondary:(BOOL)arg2;
- (void)didHandleSecondaryCandidateSelected:(id)arg1;
- (void)didHandleCandidateSelected:(id)arg1 candidateController:(id)arg2;
- (void)commitInlineForSpecialWindow;
- (id)composedText;
- (void)reset;
- (BOOL)isInlineEmpty;
- (void)mouseClicked;
- (void)endSession;
- (void)endSessionAbandoningInlineText;
- (void)endSessionConfirmingInlineText;
- (BOOL)commitInlineTextCandidate;
- (BOOL)commitSelectedCandidate;
- (BOOL)commitCandidateWithSelection:(id)arg1 method:(id)arg2;
- (BOOL)commitCandidate:(id)arg1 selectionMethod:(id)arg2;
- (void)doCommandBySelector:(SEL)arg1 withUserInfo:(id)arg2;
@property(readonly, nonatomic) BOOL isShuangpin;
- (void)handleMecabraSettings;
- (void)updateSettingsForKeyboardLayout;
- (void)updateSettings;
- (void)checkSettings:(id)arg1 withClient:(id)arg2;
- (id)helpAnchorName;
- (void)preflightSpellChecker;

@end

