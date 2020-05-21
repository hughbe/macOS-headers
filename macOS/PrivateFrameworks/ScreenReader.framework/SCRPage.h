//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class SCRElement;

__attribute__((visibility("hidden")))
@interface SCRPage : SCRMapElement
{
    BOOL _isAutoInteractingWithText;
    SCRElement *__readFromBeginningStopElement;
}

+ (BOOL)_shouldTreatAsTextNavigationForElement:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SCRElement *_readFromBeginningStopElement; // @synthesize _readFromBeginningStopElement=__readFromBeginningStopElement;
@property(nonatomic) BOOL isAutoInteractingWithText; // @synthesize isAutoInteractingWithText=_isAutoInteractingWithText;
- (id)description;
- (void)_resetFocusedTextNavigationElement;
- (BOOL)_handleMoveToPreviousLineInContentWithRequest:(id)arg1;
- (BOOL)_handleMoveToNextLineInContentWithRequest:(id)arg1;
- (BOOL)readFromBeginningWithRequest:(id)arg1;
- (BOOL)shouldStopReadFromBeginning;
- (BOOL)moveToContentInDirection:(long long)arg1 granularity:(long long)arg2 request:(id)arg3;
- (BOOL)moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveToChildElementVerticallyAlignedAbove:(BOOL)arg1 withFocusedChild:(id)arg2 request:(id)arg3;
- (void)_setKeyboardSyncForUIElement:(id)arg1;
- (BOOL)_focusOntoElement:(id)arg1 previouslyFocusedUIElement:(id)arg2 inPage:(id)arg3 withRequest:(id)arg4;
- (void)addItemTypeToRequest:(id)arg1;
- (void)addItemNameToRequest:(id)arg1;
- (BOOL)addLocalizedPageNumberToRequest:(id)arg1 includeTotalPages:(BOOL)arg2;
- (BOOL)_localizePageIndexStringWithFormat:(id)arg1 pageIndexDescription:(id)arg2 request:(id)arg3;
- (BOOL)_localizePageIndexWithTotalStringWithFormat:(id)arg1 pageIndexDescription:(id)arg2 totalPagesDescription:(id)arg3 request:(id)arg4;
- (id)previousElement;
- (id)nextElement;
- (id)_totalPagesDescription;
- (id)_pageIndexDescription;
- (id)_totalPages;
- (id)_pageIndex;
- (unsigned long long)pageIndex;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)isContainerElement;

@end

