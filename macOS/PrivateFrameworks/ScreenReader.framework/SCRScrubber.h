//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

__attribute__((visibility("hidden")))
@interface SCRScrubber : SCRElement
{
}

- (long long)brailleLineType;
- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (id)childBeforeElement:(id)arg1;
- (id)childAfterElement:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (BOOL)scrollToShowDescendant:(id)arg1;
- (BOOL)allowBuildChildren;
- (id)prepareArrayToFocusInto;

@end

