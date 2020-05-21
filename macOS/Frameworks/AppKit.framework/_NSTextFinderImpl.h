//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSComboBoxDelegate-Protocol.h>
#import <AppKit/NSFindPatternManager-Protocol.h>
#import <AppKit/NSWindowDelegate-Protocol.h>

@class DOMRange, NSMapTable, NSMutableArray, NSMutableRangeArray, NSProgress, NSString, NSTextFinder, NSTextFinderAsyncSearch, WebView;
@protocol NSTextFinderAsynchronousDocumentFindMatch;

__attribute__((visibility("hidden")))
@interface _NSTextFinderImpl : NSObject <NSWindowDelegate, NSComboBoxDelegate, NSFindPatternManager>
{
    NSTextFinder *_finder;
    BOOL _lastFindWasSuccessful;
    long long _lastChangeCount;
    long long _ignoreCancelCount;
    long long _matchCount;
    BOOL _disableDelay;
    id _indicator;
    id _indicatorDelay;
    struct _NSRange _matchRange;
    BOOL _incremental;
    NSTextFinderAsyncSearch *_asyncSearch;
    NSMutableArray *_retiredAsyncSearches;
    NSMutableRangeArray *_incrementalMatchRanges;
    NSMapTable *_webViewsToDOMRanges;
    DOMRange *_matchDOMRange;
    WebView *_matchWebView;
    NSMutableArray *_matchWebViews;
    NSProgress *_currentAsynchronousDocumentFindProgress;
    id <NSTextFinderAsynchronousDocumentFindMatch> _asynchronousDocumentCurrentMatch;
    NSMutableArray *_incrementalAsynchronousDocumentMatches;
}

+ (double)_indicatorDelayIntervalForSearchString:(id)arg1;
+ (void)showWrapIndicatorInView:(id)arg1 forward:(BOOL)arg2;
+ (void)showWrapIndicatorImage:(id)arg1 inView:(id)arg2;
@property(retain) NSProgress *currentAsynchronousDocumentProgress; // @synthesize currentAsynchronousDocumentProgress=_currentAsynchronousDocumentFindProgress;
@property(retain) NSMutableArray *incrementalAsynchronousDocumentMatches; // @synthesize incrementalAsynchronousDocumentMatches=_incrementalAsynchronousDocumentMatches;
@property(retain) id <NSTextFinderAsynchronousDocumentFindMatch> asynchronousDocumentCurrentMatch; // @synthesize asynchronousDocumentCurrentMatch=_asynchronousDocumentCurrentMatch;
@property(retain) WebView *matchWebView; // @synthesize matchWebView=_matchWebView;
@property(retain) DOMRange *matchDOMRange; // @synthesize matchDOMRange=_matchDOMRange;
- (unsigned long long)_asynchronousDocumentFindOptions:(BOOL)arg1;
- (void)_didFindAsynchronousDocumentMatch:(id)arg1 wrapped:(BOOL)arg2 forward:(BOOL)arg3;
- (void)incremental_nextAsynchronousDocumentFindMatchForward:(BOOL)arg1 wrap:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startIncrementalAsynchronousDocumentSearchShowingFirstMatch:(BOOL)arg1;
- (id)_DOMRangeMatchesForString:(id)arg1 webView:(id)arg2 inDOMRange:(id)arg3;
- (BOOL)supportsFullWord;
- (BOOL)supportsPatterns;
- (void)nextMatchAfterCurrentRange:(id)arg1 inWebView:(id)arg2 forward:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)incremental_nextMatchAfterCurrentWebViewMatchForward:(BOOL)arg1 wrap:(BOOL)arg2;
- (void)_showFindIndicatorForDOMRange:(id)arg1 webView:(id)arg2;
- (id)_matchDOMRangesForWebView:(id)arg1;
- (id)_matchWebViews;
- (void)_startWebViewSearchShowingFirstMatch:(BOOL)arg1;
- (unsigned long long)_maxWebViewMatchCount;
- (BOOL)_isWebViewMatchCountOverLimit;
- (void)_searchWebViewsShowingFirstMatch:(BOOL)arg1;
- (void)_clearWebViewMatches;
- (void)_addDOMRange:(id)arg1 webView:(id)arg2;
- (void)findPatternField:(id)arg1 findPatternDoubleClicked:(id)arg2;
- (BOOL)_hasValidFindPattern;
- (BOOL)_hasFindPattern;
- (id)replaceFieldForField:(id)arg1;
- (id)findFieldForField:(id)arg1;
- (id)_replaceField;
- (id)_findField;
- (void)addStringToRecentReplaceStrings:(id)arg1;
- (void)addStringToRecentSearchStrings:(id)arg1;
- (id)incremental_allMatchesInRanges:(id)arg1;
- (struct _NSRange)incremental_nextMatchAfterCurrentRange:(struct _NSRange)arg1 forward:(BOOL)arg2 wrap:(BOOL)arg3;
- (BOOL)_getNextMatchAfterCurrentRange:(struct _NSRange)arg1 forward:(BOOL)arg2 wrap:(BOOL)arg3 result:(struct _NSRange *)arg4;
- (BOOL)incremental_hasMatchInRange:(struct _NSRange)arg1;
- (id)incremental_matchesIntersectingRanges:(id)arg1;
- (void)_noteClientStringWillChange;
- (long long)_matchCount;
- (void)_setMatchCount:(long long)arg1;
- (void)_hideIncrementalMatchesAndAnimate:(BOOL)arg1;
- (void)_updateIncrementalMatches;
- (void)_clearIncrementalMatches;
- (void)_changeIncrementalMatches:(unsigned long long)arg1 indexes:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_startIncrementalSearchShowingFirstMatch:(BOOL)arg1;
- (void)_disableDelay;
- (void)_asyncSearchCompleted:(id)arg1;
- (void)_foundFirstMatchInRange:(struct _NSRange)arg1 show:(BOOL)arg2 disableDelay:(BOOL)arg3;
- (id)_incrementalMatchRanges;
- (void)_updateIndicator;
- (void)_resetIncrementalSearch;
- (void)_setIncremental:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)_incremental;
- (void)_retireAsyncSearch:(id)arg1;
- (void)_delayFeedbackWithScrolling:(BOOL)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)_cancelIndicatorDelay;
- (BOOL)_selectionIsMatch;
- (id)_visibleMatchRanges;
- (void)_containerDidChange;
- (BOOL)_findIndicatorNeedsUpdate;
- (void)_setFindIndicatorNeedsUpdate:(BOOL)arg1;
- (void)_cancelFindIndicator;
- (id)replacementString;
- (id)rangesOfMatchesInString:(id)arg1 inRanges:(id)arg2;
- (struct _NSRange)rangeOfNextMatchInString:(id)arg1 currentRange:(struct _NSRange)arg2 forward:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)_lastFindWasSuccessful;
- (BOOL)_validateAction:(long long)arg1;
- (void)_performAction:(long long)arg1;
- (void)hideReplace;
- (void)showReplace;
- (void)deactivate;
- (void)activate;
- (void)takeSearchString:(CDUnknownBlockType)arg1;
- (long long)selectAllInSelectionOnly:(BOOL)arg1;
- (void)replaceAllInSelectionOnly:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceAndFind:(CDUnknownBlockType)arg1;
- (void)replace:(CDUnknownBlockType)arg1;
- (void)_performReplace:(CDUnknownBlockType)arg1;
- (void)findForward:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performProgressReportingClientOperationUsingBlock:(CDUnknownBlockType)arg1;
- (void)_onMainThreadUpdateCurrentProgress:(id)arg1 thenProcessResultsUsingBlock:(CDUnknownBlockType)arg2;
- (void)_didFindMatchInRange:(struct _NSRange)arg1 wrapped:(BOOL)arg2 forward:(BOOL)arg3;
- (void)_clientDidReplaceCharacters;
- (BOOL)_clientShouldReplaceCharactersInRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 withStrings:(id)arg3;
- (BOOL)_canReplace;
- (void)_setSelection:(id)arg1;
- (BOOL)_canSetSelection;
- (void)_clearCurrentMatch;
- (struct _NSRange)_currentMatchRange;
- (void)_showFindIndicatorForRange:(struct _NSRange)arg1;
- (void)_showWrapIndicatorForward:(BOOL)arg1;
- (id)_contentViewAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct _NSRange)_currentRange;
- (void)handleResult:(long long)arg1 forAction:(long long)arg2;
- (void)setSubstringMatchType:(long long)arg1;
- (void)setSearchOptions:(unsigned long long)arg1;
- (long long)substringMatchType;
- (unsigned long long)searchOptions;
- (void)setSearchString:(id)arg1 writeToPasteboard:(BOOL)arg2;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (void)_loadSearchStringToPasteboard;
- (void)_setGlobalFindSettings;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)_restoreDefaultSearchOptions;
- (void)appDidActivate:(id)arg1;
- (BOOL)_needToRefreshFromPasteboard;
- (long long)style;
- (BOOL)isVisible;
- (id)client;
- (id)_finder;
- (void)_setFinder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

