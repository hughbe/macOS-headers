//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRHeading : SCRMapElement
{
}

- (id)readContentsElement;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (id)children;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)shouldAllowAutoFocusInto;
- (BOOL)shouldSpeakFocusedOnlyChild;
- (long long)groupBehavior;
- (id)typeDescription;
- (void)addItemNameToRequest:(id)arg1;
- (BOOL)readyToHaveKeyboardFocus;
- (void)setKeyboardFocus:(BOOL)arg1;
- (void)addItemDescriptionForInteractionToRequest:(id)arg1;

@end

