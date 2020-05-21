//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRTable.h>

#import <ScreenReader/SCRWebElementAutoDrillAndAnnounceNavigationProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCRWebTable : SCRTable <SCRWebElementAutoDrillAndAnnounceNavigationProtocol>
{
    unsigned char _tableRequiresInteraction;
    unsigned long long __previousBrailleRowIndex;
}

@property(nonatomic) unsigned long long _previousBrailleRowIndex; // @synthesize _previousBrailleRowIndex=__previousBrailleRowIndex;
- (void)_outputBorderDescriptionForRequest:(id)arg1 direction:(long long)arg2;
- (id)emptyCellDescription;
- (BOOL)toggleWebTableInteractability:(id)arg1 request:(id)arg2;
- (id)_newWebTableDomainKey;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)rowCount;
- (void)addDescendantsToArray:(id)arg1 additionalToRetain:(id)arg2 additionalToSkip:(id)arg3;
- (void)setBrailleLineWithFocusedElement:(id)arg1 forceRebuild:(BOOL)arg2;
- (BOOL)allowDirectNavigationBetweenContentOfRows;
- (BOOL)webElementSuperInteractRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)allowStopInteractionIndependentOfGroupingMode;
- (BOOL)interactRightShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (long long)groupBehavior;
- (BOOL)_handleMovementWithEvent:(id)arg1 inDirection:(long long)arg2 request:(id)arg3 lastElement:(id)arg4 jumpToBookend:(BOOL)arg5;
- (BOOL)canWrapWhileNavigating;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldWrapNavigationForOrientation:(long long)arg1;
- (BOOL)_handleColumnNavigation:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldAutoFocusOnChildren;
- (BOOL)allowMoveAttemptsPastBoundary:(BOOL)arg1 allowFullWrapping:(BOOL)arg2;
- (id)lastChildForFocusing;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)completeKeyboardChainToUIElement:(id)arg1;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (void)addWebColumnHeaderInfoToRequest:(id)arg1 forCell:(id)arg2 shouldSpeakRowColumnIndices:(BOOL)arg3;
- (void)addWebRowHeaderInfoToRequest:(id)arg1 forCell:(id)arg2 shouldSpeakRowColumnIndices:(BOOL)arg3;
- (void)addWebRowChangeInfoToRequest:(id)arg1 forCell:(id)arg2;
- (void)addWebColumnIndexToRequest:(id)arg1 forCell:(id)arg2;
- (BOOL)includeRowIndices;
- (BOOL)includeColumnIndices;
- (void)addItemDescriptionForSearchToRequest:(id)arg1;
- (void)addItemDescriptionForInteractionToRequest:(id)arg1;
- (void)_addRowColumnInfoForCell:(id)arg1 request:(id)arg2 includeColumnIndex:(BOOL)arg3;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)moveToBookmarkInDirection:(long long)arg1 withEvent:(id)arg2 request:(id)arg3;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (void)endFocus;
- (void)setFocusedChild:(id)arg1;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (void)addStartBookendToRequest:(id)arg1;
- (void)addBorderCrossedDescriptionToRequest:(id)arg1 forDirection:(long long)arg2;
- (id)fullItemDescriptionForMenu;
- (void)addItemDescriptionForEndInteractionToRequest:(id)arg1;
- (void)addEndBookendToRequest:(id)arg1;
- (id)statusDescription;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)_moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)_moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)arg1;
- (BOOL)_webTableRequiresInteraction;
- (BOOL)requiresInteraction;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (BOOL)isDepthLevelElement;
- (BOOL)isWebTable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

