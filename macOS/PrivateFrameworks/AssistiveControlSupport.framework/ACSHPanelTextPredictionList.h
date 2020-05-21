//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelGroup.h>

@class ACSHPanelButton, NSArray;

@interface ACSHPanelTextPredictionList : ACSHPanelGroup
{
    BOOL _isShowingNoSuggestions;
    ACSHPanelButton *__defaultButton;
    NSArray *__previousActions;
    unsigned long long __previousSuggestionCount;
}

+ (id)_actionForSuggestion:(id)arg1 defaultAction:(id)arg2;
- (void).cxx_destruct;
@property unsigned long long _previousSuggestionCount; // @synthesize _previousSuggestionCount=__previousSuggestionCount;
@property(retain) NSArray *_previousActions; // @synthesize _previousActions=__previousActions;
@property(retain) ACSHPanelButton *_defaultButton; // @synthesize _defaultButton=__defaultButton;
@property(nonatomic) BOOL isShowingNoSuggestions; // @synthesize isShowingNoSuggestions=_isShowingNoSuggestions;
- (BOOL)canBeBrokenApart;
- (BOOL)containsNonNavigablePanelElementsOnly;
- (void)sizeToFitPanelElements;
- (void)updateWithSuggestion:(id)arg1;
- (id)_insertSuggestionReturningButton:(id)arg1 actionsByWordSuggestion:(id)arg2;
- (unsigned long long)_insertWordSuggestions:(id)arg1 fromIndex:(unsigned long long)arg2 currentWidth:(double)arg3 maxWidth:(double)arg4 actionsByWordSuggestion:(id)arg5;
- (double)_totalWidthForPanelElements:(id)arg1 buttonSpacing:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)dictionaryForSaving;
- (id)initWithUndoManager:(id)arg1;

@end

