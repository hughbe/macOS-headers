//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRGroup.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRDockGroup : SCRGroup
{
    NSString *_previousFocusedChildWindowType;
}

- (void).cxx_destruct;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (BOOL)outputVirtualNavigationWithEvent:(id)arg1 commandString:(id)arg2 request:(id)arg3 keyboardSynched:(BOOL)arg4 allowScrolling:(BOOL)arg5;
- (void)setFocusedChild:(id)arg1;
- (void)_resetToItemInDirection:(id)arg1;
- (void)_describeFocusedChild;

@end

