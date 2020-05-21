//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

#import <ScreenReader/SCRWebElementAutoDrillAndAnnounceNavigationProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCRWebDomList : SCRElement <SCRWebElementAutoDrillAndAnnounceNavigationProtocol>
{
    SCRElement *_firstNavigableElement;
    SCRElement *_lastNavigableElement;
    long long _childIndex;
    SCRElement *_readContentsElement;
}

+ (void)addWebListDescription:(id)arg1 toRequest:(id)arg2;
- (void).cxx_destruct;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (id)childrenInReadContentsOrder;
- (id)readContentsElement;
- (void)forgetReadContentsElement;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)arg1;
- (unsigned long long)readContentsElementCount;
- (void)_setReadContentsElement:(id)arg1;
- (void)addContentToRequest:(id)arg1 visibleOnly:(BOOL)arg2;
- (void)scrollToElement;
- (void)_rebuildElementOnSameLevel;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)arg1 request:(id)arg2;
- (void)_appendListItemIndexIfNeeded:(id)arg1 oldFocusedChild:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (id)prepareArrayToFocusInto;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (void)_setChildIndex:(long long)arg1;
- (long long)_childIndex;
- (id)childInAXOrderForward:(BOOL)arg1 horizontal:(BOOL)arg2 visibleOnly:(BOOL)arg3 wrapped:(char *)arg4 didHitBoundary:(char *)arg5 startElement:(id)arg6;
- (BOOL)isDescriptionList;
- (BOOL)isContentList;
- (id)roleDescription;
- (BOOL)canWrapWhileNavigating;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (void)addItemDescriptionForInteractionToRequest:(id)arg1;
- (void)addItemDescriptionForSearchToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)shouldMapElement:(id)arg1;
- (void)setFocusedChild:(id)arg1;
- (void)endFocus;
- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (void)addStartBookendToRequest:(id)arg1;
- (void)addEndBookendToRequest:(id)arg1;
- (BOOL)isDepthLevelElement;
- (BOOL)allowFocusThroughSingleChild;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (void)moveToElement:(id)arg1 withEvent:(id)arg2 allowAutoFocusToChildren:(BOOL)arg3;
- (BOOL)isInteractive;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)arg1;
- (BOOL)shouldNavigate;
- (long long)groupBehavior;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (BOOL)isWebDomList;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

